#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#pragma warning(disable:4996) 
#define SWAP(a,b)	do{ int t; t= a;a=b;b=t;}while(0)

#include<string.h>



typedef struct {
	int first;	//100의 자리 수
	int second;	//10의 자리 수
	int third;	//1의 자리 수 

}randnum;
typedef struct {
	int strike;
	int ball;


}outcount;

randnum* r;
outcount* o;
void _initrand(randnum* r);
void _initout(outcount* o);

void firstrand(randnum* numb);
void secondrand(randnum* numb);
void thirdrand(randnum* numb);
void usernum(int* user);




main() {
	_initrand(r);
	_initout(o);
	int userinput[3];
	usernum(userinput);


}

void usernum(int user[3]) {

	int i;
	for (i = 0;i < 3;i++) {
		scanf("%d", &user[i]);
		printf("%d\n", user[i]);
	}

}
void _initout(outcount* out) {
	out->ball = 0;
	out->strike= 0;
}

void _initrand(randnum* r) {		//이니셜라이즈 : 타겟 생성

	r = (randnum*)malloc(sizeof(randnum));

	srand(time(NULL));
	firstrand(r);
	secondrand(r);
	thirdrand(r);	//난수 생성


}

void firstrand(randnum* r) {
	int base = rand() % 10;
	r->first = base;
}

void secondrand(randnum* r) {
	int base = rand() % 10;
	r->second = base;
	if (r->first == base)	//1번난수와 같으면 재실행
		secondrand(r);

}

void thirdrand(randnum* r) {
	int base = rand() % 10;
	r->third = base;
	if (base == r->first || base == r->second)	//1번 난수 or 2번 난수와 같으면 재실행
		thirdrand(r);
}