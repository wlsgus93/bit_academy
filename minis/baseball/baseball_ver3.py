import random

ball = 0
strike = 0
helper = []
skipper = []

def divider(list, a):   #여러자리의 숫자를 편하게 리스트에 넣기 위한 메소드
    if (a > 10):
        b = a % 10
        divider(list,a//10)
        list.append(b)
    else:
        list.append(a)

def randmaker(list):    #사용자가 지정한 자리수의 숫자를 만드는 메소드
    a = random.randrange(0,10)  #랜덤 변수 1개 생성
    while (1):
        if (a in list): #중복값일 경우 다시 생성
            a = newmaker()
        else:
            break       #중복값이 아닐 경우 중지
    list.append(a)  #생성한 숫자를 리스트에 추가

def newmaker(): #중복값일 경우 재생성 시켜주는 메소드
    a = random.randrange(0,10)
    return a

def ball_counter(target, tries):    #볼은 스트라이크보다 맞추기가 쉬움.
    global ball
    global strike
    global helper
    ball = 0
    strike = 0
    for i in range(0,3):
            if(tries[i] in target):     #만약 숫자가 타겟 리스트에 있을 경우
                ball += 1               #볼 1개 추가 후
                strike_counter(tries[i], target[i])     #스트라이크 검출기에 리스트 값을 넘김
                if(tries[i] not in helper):
                    helper.append(tries[i])
    print(ball, "balls")
    print(strike, "strikes")
    hinter(tries)


def strike_counter(a,b):
    global strike
    global ball

    if a == b:  #리스트에 있는 값이 같을 경우 같은 자리수를 공유중인 것임
        strike += 1
        ball -= 1


#
# def us_input():
#     a = int(input("your number?"))


def three_dig(list, a): #초기 버전. 3자리만 가능하게 만들어 놓음
    hun_dig = a // 100
    ten_dig = (a // 10) % 10
    last_dig = a % 10
    list.append(hun_dig)
    list.append(ten_dig)
    list.append(last_dig)


def guesser():   #유저가 주는 숫자 저장

    trying = int(input("new try?"))
    tries = []      #시도를 새로 할 때마다 리스트 초기화
    three_dig(tries, trying)
    # print("tries", tries)
    return tries


def randrand(list, targnum):    #플레이 하고 싶은 숫자를 받아 생성시켜주는 메소드
    while(1):
        if((targnum <= 10) and (targnum >= 1)):     #1~10개의 숫자만 사용 가능
            for i in range(0,targnum):
                randmaker(list)
            break
        elif (targnum == 101):                  #101을 입력하면 그냥 종료
            print("ending")
            break
        else:
            print("input out of range")         #10개를 초과할 경우 출력
            print("put between 1 ~ 10")
            break


def indexhelper(tries):

    helping = ()
    hint = []
    i = 0

    for t in tries:
        helping = (i,t)
        i += 1
        print(helping)
        hint.append(helping)
    if(len(hint)>0):
        print('help ',hint[0][1])

    return hint

def hinter(tries):
    global ball
    global strike
    if (ball > 0 or strike > 0):
        print("try one of these!")
        if ball == 1:
            oneball(tries)
        elif ball == 2:
            twoball(tries)
        elif ball==1 and strike == 1:
            onebones(tries)
        elif ball==1 and strike== 2:
            onebtwos(tries)
        elif ball==2 and strike == 1:
            twobones()
        elif strike ==2:
            twostrike()
        elif strike == 1:
            onestrike(tries)


def oneball(tries):
    pass

def twoball(tries):
    pass

def threeball(tries):
    pass

def onebones(tries):
    pass

def onebtwos(tries):
    pass

def twobones(tries):
    pass

def twostrike(tries):
    pass

def onestrike(tries):
    helphelp = []

    helphelp = indexhelper(tries)
    if helphelp[0][0] == 0:
        for j in range(0, 10):
            for k in range(0, 10):
                if ((helphelp[0][1] != j) and (helphelp[0][1] != k) and (j != k)):
                    if ((j not in tries) and (k not in tries)):
                        num = ((helphelp[0][1]) * 100) + (j * 10) + k
                        print('%03d' % num, end=' ')
            print()
    print('================')
    if helphelp[1][0] == 1:
        for j in range(0, 10):
            for k in range(0, 10):
                if ((helphelp[1][1] != j) and (helphelp[1][1] != k) and (j != k)):
                    if ((j not in tries) and (k not in tries)):
                        num = (j * 100) + (helphelp[1][1] * 10) + k
                        print('%03d' % num, end=' ')
            print()
    print('================')
    if helphelp[2][0] == 2:
        for j in range(0, 10):
            for k in range(0, 10):
                if ((helphelp[2][1] != j) and (helphelp[2][1] != k) and (j != k)):
                    if ((j not in tries) and (k not in tries)):
                        num = (j * 100) + (k * 10) + helphelp[2][1]
                        print('%03d' % num, end=' ')
            print()


def main():

    global ball
    global strike
    global helper
    i = 0
    targnum = 3
    target = []
    randrand(target, targnum)
    tries = []

    while(strike != targnum):
        tries = guesser()
        # print("target ",target)
        ball_counter(target, tries)

        i += 1

        print('helper', helper)
    print("congratz! you got it in ", i, " tries!")

main()














