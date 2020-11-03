import os
from flask_sqlalchemy import SQLAlchemy
from flask import Flask, render_template
from gpiozero import LEDBoard
import Adafruit_DHT
import datetime

app = Flask(__name__)


now = datetime.datetime.now()


leds = LEDBoard(14, 15, 18)

led_states = {
        'red':0,
        'green':0,
        'yellow':0
}



db = SQLAlchemy()

class Myuser(db.Model):
    __tablename__ = 'fcuser'
    id = db.Column(db.Integer, primary_key=True)
    red = db.Column(db.Integer)
    green = db.Column(db.Integer)
    yellow = db.Column(db.Integer)
    time = db.Column(db.String(30))



@app.route('/', methods=['GET','POST'])
def hello():
    return 'Hello World!'

# ex) 192.168.1.57:5000/red/0
@app.route('/<color>/<int:state>',methods=['GET','POST'])
def led_switch(color, state):
    led_states[color] = state
    leds.value = tuple(led_states.values())

    myuser = Myuser()
    myuser.time = str(now)

    myuser.red = 0
    myuser.yellow = 0
    myuser.green = 0

    if color == 'red':
        myuser.red = leds.value
    elif color == 'yellow':
        myuser.yellow = leds.value
        db.session.add(myuser)
        db.session.commit()

        return render_template('index.html', led_states=led_states)

    @app.route('/all/<int:state>', methods=['GET', 'POST'])
def all_on_off(state):
    myuser = Myuser()

    if state is 0:
        led_states = {
            'red': 0,
            'green': 0,
            'yellow': 0
        }
        myuser.red = 0
        myuser.yellow = 0
        myuser.green = 0
        myuser.time = str(now)

    elif state is 1:
        led_states = {
            'red': 1,
            'green': 1,
            'yellow': 1
        }
        myuser.red = 1
        myuser.yellow = 1
        myuser.green = 1
        myuser.time = str(now)

    db.session.add(myuser)
    db.session.commit()
    id += 1

    leds.value = tuple(led_states.values())
    return render_template('index.html', led_states=led_states)

if __name__ == "__main__":
    basedir = os.path.abspath(os.path.dirname(__file__))
    dbfile = os.path.join(basedir, 'RGB/db.sqlite')

    app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
    app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///' + dbfile
    app.config['SQLALCHEMY_COMMIT_ON_TEARDOWN'] = True
    app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = False
    app.config['SECRET_KEY'] = 'yellowmango'

    db.init_app(app)
    db.app = app
    db.create_all()
    app.run(host='0.0.0.0', port=5000, debug=True)


