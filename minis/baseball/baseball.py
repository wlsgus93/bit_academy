import random

ball = 0
strike = 0

# a = random.randrange(101,1000)
# hun_dig = a // 100
# ten_dig = (a // 10) % 10
# last_dig = a % 10
# print(a)
# print("hund ", hun_dig)
# print("ten " , ten_dig)
# print("las " ,last_dig)

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
def strike_counter():
    pass

def ball_counter(target, tries):
    ball = 0
    for i in range(0,3):
            if(tries in target):
                ball += 1


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


    targnum = int(input("how many numbers?"))
    target = []
    randrand(target, targnum)

    while(1):
        guesser()
        print("target ",target)


main()














