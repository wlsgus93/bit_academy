#include <stdio.h>
#pragma warning(disable:4996) 
#include<stdlib.h>
#include <time.h>
// f10 : debugging  / shift f5 => ����
// f9 : break pointer : ǥ�������� ����
// f5  :�ߴ��� �̵�(debugging �ڵ� ����)
//main() {
//	float a = 12.0f;	//f = float, ������ double
//	float b = 6.0f;
//	int c = 0x12345678; 
//}
/* 1100 :2
*	000000001100	
	0000110000000000
*				
* 6*0110 = 1.10*2^2+127
* 0100 0 0001 1 00000000000
* 
* /
*/ 
//
//main() {
//	printf("my name is %s\n","abdec");
//	printf("i am %d years old", 22);
//	
//}


//main() {
//
//	char a = 'z';
//	char b = 65;
//	/*printf("%c %d", a, a);
//	printf("%c %d", b, b);*/
//	printf("%d", a);
//
//	if (a > 64 && a < 97) {
//		a += 32;
//		printf("%c", a);
//		printf("�빮��");
//	}
//	else if (a > 96 && a < 123) {
//		a -= 32;
//		printf("�ҹ���\n");
//		printf("%c\n", a);
//	}
//
//	if ('a' <= a && a <= 'z') {
//		printf("up -> low (%c)\n", a - 'a' + 'a');
//	}
//	else {
//		printf("low => up (%c)\n", a - 'a' + "a");
//	}
//
//	printf("%c\n", (a ^ 32)^32);
//}


//
//main() {
//	
//	printf("%d\n", sizeof('a'));
//	int num = 129;
//	printf("%d\n", sizeof(num));
//	char ch = num;
//	printf("%d\n", sizeof(ch));
//
//}

//main() {
//
//	int i = 0;
//	while (i <= 100) {
//		if (i % 2 == 0) {
//			printf("%d\n", i);
//		}	i++;
//	}
//}
//
//main() {
//	int i = 0;
//	while (i <= 5) {
//		printf("*****\n");
//		i++;
//	}
//
//}

//main() {
//
//	int a, b;
//	a = 0;
//	
//	while (a < 5) {
//		b = 0;
//		while (b < 5) {
//		
//			if (a == b) {
//				printf("-");
//			}
//			else 
//				printf("*");
//			b++;
//		}a++;
//			printf("\n");
//
//	}
//
//
//
//}


/*main() {*//*
	int i = 3;
	int pw = 1234;
	int ipass;
	while (i > 0) {
		printf("input password");
		scanf_s("%d", &ipass);
			i--;
		if (ipass != pw)
		{
			printf("%d���� ��ȸ ����", i);
		}
		else
		{
			printf("pass");
			break;
		}
	}printf("cop");*/
//
//int get_passwd(void) {
//	int passwd;
//	printf("input password: ");
//	scanf("%d", &passwd);
//	return passwd;
//
//}
//
//void chance(int cnt) {
//	if(cnt != 0)
//	printf("%d ���� ��ȸ�� ���� \n", cnt);
//
//}
//
//int compare(int a, int b) {
//	return a == b;
//}
//void police(int cnt) {
//	if (cnt == 0)
//		printf("Police!");
//}
//
//main(){
//
//	int pwd = 1234;//������ ���ص� �н�����
//	int get_pwd; //���� �н�����
//	int cnt = 3; //��ȸ�� 3�� ��
//	do {
//		get_pwd = get_passwd();//�н����� �޾� �� 
//
//		if (compare(pwd, get_pwd)) //�κ��� ������ ������ 1 �ٸ��� 0�� �����Ѵ�.
//		{
//			puts("���");
//			break;
//		}
//		else {
//			chance(--cnt); //��ȸ�� �����ִ� �Լ�
//		}
//	} while (cnt); //cnt!=0
//
//	police(cnt); //������ �θ��� �Լ� cnt�� 0�̸� ������ �θ��� �Լ�
//
//
//
//
//
////}
//main() {
//	srand(time(NULL));	//seed�Լ� ��ġ ����
//	int dx;
//	int rnd;
//	for (dx = 0; dx < 5;dx++)
//	{
//		rnd = rand();
//		printf("%d\n", rnd);
//	}
//}

int input_age() {//���� �Է�
	int age = 0;
	printf("input age : \n");
	scanf("%d", &age);
	return age;
}

int compare_age(int a, int b) {	// ���� �� �Լ�
	if (a > b)
		return 1;
	else if (a < b)
		return -1;
	else
		return 0;
}				//Ÿ�� ���̺��� �Է� ���̰� ������ 1, ������ -1, ������ 0 ��ȯ

void print_bingo(int a) {	//���� ��� �Լ� : �� �Լ��� ��ȯ������ ����
	if (a == 1)
	{
		printf("input bigger num\n");
		
	}
	else if (a == -1)
	{
		printf("input smaller num\n");
		
	}
		
}

void check_input(int a, int b, int c) {
	if ((a == 1) && (compare_age(b, c) == 1))
		printf("INPUT BIGGER NUMBER\n");
	else if ((a == -1) && (compare_age(b, c) == -1))
		printf("input SMALLER number\n");
}


main() {
	int tgt_age;
	srand(time(NULL));
	int age = rand();
	tgt_age = age % 100;
	int ipt_age = input_age();
	int i = 1;
	int oage;
	while (tgt_age != ipt_age) {
		int cp_age = compare_age(tgt_age, ipt_age);
		print_bingo(cp_age);
		oage = ipt_age;
		ipt_age = input_age();
		check_input(cp_age, oage, ipt_age);

		//printf("oage %d, n_age %d\n", oage, ipt_age);
		i++;
	}
	printf("bingo! %d times tried", i);
}


















































