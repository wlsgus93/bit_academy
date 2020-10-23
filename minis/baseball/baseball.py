import random

ball = 0
strike = 0

def randmaker(list):
    a = random.randrange(0,10)
    while (1):
        if (a in list):
            a = newmaker()
        else:
            break
    list.append(a)

def newmaker():
    a = random.randrange(0,10)
    return a

def strike_counter(a,b):
    global strike
    global ball

    if a == b:
        strike += 1
        ball -= 1


def ball_counter(target, tries):
    global ball
    global strike
    ball = 0
    strike = 0
    for i in range(0,3):
            if(tries[i] in target):
                ball += 1
                strike_counter(tries[i], target[i])
    print(ball, "balls")
    print(strike, "strikes")


def us_input():
    a = int(input("your number?"))


def three_dig(list, a):
    hun_dig = a // 100
    ten_dig = (a // 10) % 10
    last_dig = a % 10
    list.append(hun_dig)
    list.append(ten_dig)
    list.append(last_dig)


def guesser():

    trying = int(input("new try?"))
    tries = []
    three_dig(tries, trying)
    print("tries", tries)
    return tries


def randrand(list, targnum):
    while(1):
        if((targnum <= 10) and (targnum >= 1)):
            for i in range(0,targnum):
                randmaker(list)
            break
        elif (targnum == 101):
            print("ending")
            break
        else:
            print("input out of range")
            break



def main():

    global ball
    global strike
    i = 0
    targnum = int(input("how many numbers?"))
    target = []
    randrand(target, targnum)
    tries = []
    while(strike != 3):
        tries = guesser()
        print("target ",target)
        ball_counter(target, tries)
        i += 1
    print("congratz! you got it in ", i, " tries!")

main()














