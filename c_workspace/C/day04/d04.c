#include <stdio.h>
#pragma warning (disable:4996)
#include<stdlib.h>
#include <time.h>

//
//void func(void) {
//	puts("test");
//}
//
//main() {
//
//	void(*p)(void);	//void�� void�Լ��� ����Ű�� ������ p // int (*p)[3] : ��Ʈ�� ������ [3]
//	p = func;
//	p();
//	func();	//�Լ����� �ּҰ� ���� -> ��� ȣ�⿡ &�� ���� �ʿ�� ����
//}

//int add(int a, int b) {
//	return a + b;
//}int sub(int a, int b) {
//	return a - b;
//}int mul(int a, int b) {
//	return a * b;
//}int dvv(int a, int b) {
//	return a / b;
//}
//
//main() {
//
//	int(*p[4])(int, int) = { add, sub, mul,div };
//	//�Լ��� Ÿ�� (�����͹迭 �ڸ� ��)(�Լ��� �Ű�����) = { �Լ���, �Լ���, ...}
//
//	int i;
//	for (i = 0;i < 4;i++) {
//		printf("%d\n", p[i](10, 5));
//	}
//
//	/*int (*p)(int, int) = add;
//	printf("%d\n", p(10, 5));
//	p = sub;
//	int (*p)(int, int) = add;
//	printf("%d\n", p(10, 5));
//	p = mul;
//	int (*p)(int, int) = add;
//	printf("%d\n", p(10, 5));*/
//
//
//
//}

//void cold(void) {//client
//	puts("cold");
//}
//void hot(void) {//client
//	puts("hot");
//}
//
//void aircon(void(*p)(void)) {//server code
//	p();//call back
//}
//main() {//client code
//	aircon(hot);//call
//}
//
//temp(int(*p)(int,int), int a, int b) {
//	
//
//	return p(a, b);
//}
//
//int add(int a, int b) {
//	return a + b;//leaf function call
//}
//
//main() {
//	int a = 10, b = 5;
//	printf("%d\n", temp(add, a, b));
//
//}

//main()
//{
//	//void //���� ���� ������ : char, int long, float, double
//	void* p; 
//
//	char ch = 'A';
//	p = &ch;
//
//	printf("%c\n", *(char*)p);	//void ������ ĳ���� : void�� ����Ʈ���� ĳ������ �ʿ�
//
//}
//
//void test() {
//	puts("Test");
//}
//main() {
//	char* a = "Hello";
//	void* p;
//	p = a;
//	printf("%s\n", (char*)p);
//	printf("%c\n", *(char*)p);
//
//	p = test;
//	((void(*)(void))p)();
//	//ĳ���� : ���𹮿��� ����(p) �����Ѱſ� ����� ���� : void(*p)void ���� p�� ��
//	//
//}


//void func(int argc, char** argv) {
//	int dx;
//	for (dx = 0;dx < argc;dx++) {
//		printf("%s\n", argv[dx]);
//	}
//
//}

/*int main(�Ű�����, �Ű�����...){
}//����� -> �Ӽ� -> ����� -> ��� �μ� -> �Է� /  �����س��� �� ������ �迭�� ������ �ʾƵ� ����� ����. 
void main(��ĭ) ���¸� �� ������ �迭�� ����� ȣ���ϴ� �Լ��� ������ �����ߴ� ���¸� ����ȭ
��, ���� �Լ��� ���� ������ ������ ����
}
*/
//		//int a	,	char** b ����
//int main(int argc, char** argv) {
//	int dx;
//	for (dx = 0;dx < argc;dx++) {
//		printf("%s\n", argv[dx]);
//	}
//
//}
//
//int main(void) {
//	int ch;
//	while (1) {
//		ch = getchar();
//		if (ch == EOF)
//			break;
//		putchar(ch);
//
//	}
//	return 0;
//}
//int find(char** p, char* find) {
//
//	int i = 0;
//	while (1) {
//		if (p[i] == find) {
//			break;
//		}
//		else if (i == 7)
//			break;
//		else
//			i++;
//	}
//	printf("%d ��", i + 1);
//
//	int dx;
//	for (dx = 0;dx < 7;dx++) {
//		if (0 == strcmp(p[dx], find))
//		{
//			printf("%d %s \n", dx, p[dx]);
//		};
//	}
//}
//main() {
//	char* a[] = {"aaa","bbb","ccc","ddd","eee","fff","ggg"};
//
//	find(a, "ggg");
//}

//
//main() {
//	char a[3][10] = {
//		"aaa","Bbb","ccccc"
//	};
//	char tmp[10];
//	//push(a, 1);
//		//�� 2���� �迭�� ��ĭ�� �Ʒ��� �и��� ����.
//	strcpy(tmp, a[2]);
//	strcpy(a[2], a[1]);
//	strcpy(a[1], a[0]);
//	strcpy(a[0], tmp);
//	puts(a[0]);
//	puts(a[1]);
//	puts(a[2]);
//}

//typedef struct person newman;
//
//struct person{
//	char name[20];
//	char tel[20];
//	int age;
//	float eye;
//
//
//};//����ü ���� (java/python class�� ����)
//
//
//main() {
//	newman man1 = { "jake shin",	"01022169171",28,0.2f };
//
//	printf("%s\n", man1.name);
//
//	newman man2;
//	man2 = man1; // man1�� ������ �״�� �����
//	
//	//scanf("%d" ,&man1.age);
//	printf("%d\n", man1.age);
//
//	scanf("%s", man1.name);
//	printf("%s", man1.name);
//}
//
//struct num{
//	int fir;
//	int sec;
//};
//
//void func1(int a, int b) {
//	printf("%d",a + b);
//	}
//
//void func2(struct num* p) {
//	printf("%d", p->fir * p->sec);
//
//}
//void func3(struct num* p) {
//	int sz;
//
//	int i;
//	int sum = 0;
//	//for (i = 0;i < sz;i++) {
//	//	sum += (p + i)->fir;
//	//	printf("%d", (p + i)->fir);
//	//	sum += (p + i)->sec;
//	//}
//	sum += (p->fir + p->sec + (p + 1)->fir + (p + 1)->sec);
//	printf("%d", sum);
//
//}
//
//
//
//main() {
//	struct num a = { 1,2 }, b = { 3,4 }, c[8] = { 5,6,7,8,9,10,11,12 };
//
//	//����ü��� ���� ������ ��
//	func1(a.fir, a.sec);
//
//	//����ü ���� �ּ� ������ ��
//	func2(&b);
//
//	//����ü �迭 �ּ� ������ ��
//	func3(c);
//
//
//
//}

//��ø����ü���� �ּҿ����ڷ� ������ �ַο� �����ڷ� ȣ���ؾ���.


struct subject {
	int subname[5];
};

struct info {
	char name[10];
	float avg;
	struct subject sub;
};


void name_in(struct info *mans, int a) {
	printf("%d��° ��� �̸�: ", a + 1);
	scanf("%s",mans[a].name);
	printf("%s check\n",mans[a].name);
}

void kor_in(struct info* mans,int a) {
	int i = 0;
	printf("���� ���� : ");
	scanf("%d", &i);
	mans[a].sub.subname[0] = i;
}
void eng_in(struct info* mans,int a) {
	int i = 0;
	printf("���� ���� : ");
	scanf("%d", &i);
	mans[a].sub.subname[1] = i;
}
void math_in(struct info* mans,int a) {
	int i = 0;
	printf("���� ���� : ");
	scanf("%d", &i);
	mans[a].sub.subname[2] = i;
}

void info_in(struct info* mans) {
	int i;
	for (i = 0;i < 3;i++) {
		name_in(mans, i);
		kor_in(mans,i);
		eng_in(mans,i);
		math_in(mans,i);
	}

}
void tot_cal(struct info* mans) {
	int i;
	int j;
	int sum;
	for (i = 0;i < 3;i++) {
		sum = 0;
		for (j = 0;j < 3;j++) {
			sum += mans[i].sub.subname[j];
		} mans[i].sub.subname[3] = sum;
		printf("%d\n",mans[i].sub.subname[3]);
	}

}
void avg_cal(struct info* mans) {
	int i;
	for (i = 0;i < 3;i++) {
		mans[i].avg = mans[i].sub.subname[3] / 3.0;
	}

}

void rank_cal(struct info* mans) {
	int a = 3, b = 3, c = 3;
	int at, bt, ct;
	at = mans[0].sub.subname[3];
	bt = mans[1].sub.subname[3];
	ct = mans[2].sub.subname[3];
	if (at > bt) {
		a -= 1;
		if (bt > ct) {
			b -= 1;
			a -= 1;
		}
		else if (ct > at) {
			c -= 2;
		}

	}
	else if(at<bt){
		b -= 1;
		if (bt > ct) {
			b -= 1;
		}
		else if (bt < ct) {
			c -= 2;
		}
	}
	mans[0].sub.subname[4] = a;
	mans[1].sub.subname[4] = b;
	mans[2].sub.subname[4] = c;
	
	printf("1�� ��� %f�� %d ��\n", mans[0].avg, mans[0].sub.subname[4]);
	printf("2�� ��� %f�� %d ��\n", mans[1].avg, mans[1].sub.subname[4]);
	printf("3�� ��� %f�� %d ��\n", mans[2].avg, mans[2].sub.subname[4]);


	
}

main() {
	int i = 0;
	struct info man[3] = { 0 };

	//scanf("%d", &i);
	//man[0].sub.subname[0] = i;
	//printf("%d", man[0].sub.subname[0]);

	info_in(man);
	tot_cal(man);
	avg_cal(man);
	rank_cal(man);
}


































