#include<stdio.h>
#pragma warning(disable:4996) 
#include<stdlib.h>
#include <time.h>

/*
const int * p : * ���� ���� const : �����͸� �̿��Ͽ� ���� ������ �� ����
int const * p : 
int * const p: * ���� ������ const: �ּҸ� ������ �� ����

int num = 20;
const int * ptr = &num; 

*ptr = 30; -> �ּҸ� �̿��� ������ �Ұ���(����)
num = 40; -> ������ �̿��� ������ ����
---------

int num1 = 20;
int num2 = 40;

int * const p = &num1; => p�� �ּҰ��� num1���� ������Ŵ

p = &num2 -> p�� num2 �ּҰ��� �Ҵ��Ϸ� �ϸ� ���� �߻�
*p = 40 -> �ּҰ��� �̿��� ������ ���� ����

--------
int num1 = 20
const int * const p = &num1 -> ��ȸ�� ����


int a[2][3]

a	= a[0][0]~[0][2]	+1 => ���� �� �̵�
&a[0] = a[0]~a[0][2]	+1 => ���� �� �̵�
a[0] = a[0][0]			+1 => ��ĭ �̵� : *(a[0] + 2) => a[0][2]
&a[0][0] = a[0][0]		+1 => ��ĭ �̵�
&a = [0][0]~[1][2]

*/


/*main() {
	int i, j, k;
	k = 1;
	int a[10][10];
	for (i = 0;i < 10;i++) {
		for (j = 0;j < 10;j++)
		{
			a[i][j] = k++;
			printf("%d\t", a[i][j]);
		}printf("\n");
	}
}*/
//
//main() {
//	int a[2][3] = { 1,2,3,4,5,6 };
//	int rx, cx,k;
//	k = 0;
//	int ro_size = sizeof(a) / sizeof(a[0]);
//	int co_size = sizeof(a[0]) / sizeof(a[0][0]);
//	int col_sum[3]= { 0 };
//	int row_sum[2] = { 0 };
//	for (rx = 0;rx < ro_size;rx++) {
//		for (cx = 0;cx < co_size;cx++) {
//			row_sum[rx] += a[rx][cx];
//			//printf("%d\t", a[i][j]);
//			col_sum[cx] += a[rx][cx];
//		}
//		//printf("\n");
//		//printf("\n%d\t", col_sum[i]);
//	}
//	for (rx = 0; rx < ro_size;rx++)
//	{
//		for (cx = 0;cx < co_size;cx++) {
//			printf("%d ", a[rx][cx]);
//		}
//		printf("+ %d", row_sum[rx]);
//		printf("\n");
//	}
//}

/*
int a = 7
int *p = &a	= 100
int **k = &p	= 200
&k = 300


		a	p	k
7		a	*p	**k
100		&a	p	*k
200		x	&p	k
300		x	x	&k

*/

//
//main() {
//	int a;
//	int* p;
//	int** k;
//	p = &a;
//	k = &p;
//
//	**k = 10;
//	printf("%d", a);
//	printf("%d", *p);
//	
//
//}
//last(int** k) {
//	**k = 500;
//}
//middle(int* p)
//{
//	last(&p);	//�̱��������� �ּ�
//}
//main() {
//	int a = 7;
//	middle(&a);	//������ �ּ�
//	printf("%d", a);
//}


//last(int* k) {
//	*k = 500;	//�̱��������� ��
//}
//middle(int* p)
//{
//	last(&p);	//�̱��������� �ּ�
//}
//main() {
//	int a = 7;
//	middle(&a);	//������ �ּ�
//	printf("%d", a);
//}
//�� �� a�� ���� �ٲ�

//void connect(int *a, int** p) {
//	*p = a;
//}
//
//main() {
//	int a = 7;
//	int* p = NULL;
//	connect(&a,&p);	//a�� p�� ���� 
//	printf("%d", *p);
//}
//
//void swap1(int* p1, int* p2) {
//	int tmp = 0;
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//}	//������ &�� �߰����� �ʾƾ� ���� �ٲ� 
//
//void swap2(int** p1, int** p2) {
//
//	int temp = 0;
//	temp = **p1;
//	**p1 = **p2;
//	**p2 = temp;
//}	//������ &�� �߰��ؾ� �ΰ� ���� �ٲ�
//
//
//void middle(int*p1,int*p2) {
//
//	swap2(&p1, &p2);
//
//}
//
//main() {
//	int num1 = 10;
//	int num2 = 20;
//
//	
//	printf("1 %d\t%d\n", num1, num2);
//	middle(&num1,&num2);
//	printf("2 %d\t%d", num1, num2);
//
//}

/*
int *p[3] = array of pointer(������ �迭)
=> �迭 ��ĭ ��ĭ�� ����Ű�� ������
int(*p)[3] = pinter to an array(�迭�� ������)
=> �迭 ��ü�� ����Ű�� ������

	
���� ����(����)			�ּ� ǥ��(����)			������ ǥ��(�ּҸ� �޴� �޸�)(����)
1. int a					&a							int *p = int p[], int p[1000]

2. int a[3]				a, &a[0]						int *p = int p[], int p[1000]

3. int a[2][3]			a, &a[0]							int(*p)[3] = int p[1000][3] = int p[][3]
						a[0], &a[0][0]					int *p = int p[], intp[1000]

4. int*a					&a							int**p = int *p[], int *p[1000]

5. int *p[3]			a,&a[0]							int**p = int *p[], int *p[1000]

func(int *p) {//����				/func(int (*p)[3]) 

}

main() {

	//����
	int a;							/int a[2][3]
	func(&a);//ȣ�� : ����(���)	/func(a)
}

*/
//
//void func(char *p[1000]) {
//	//cd ���
//	printf("%s\n", p[0] + 2);
//	//k���
//	printf("%c\n", **(p+1));
//	//b���
//	printf("%c\n", *(*(p + 2) + 1));	//p[2][1]
//	
//}
//
//main() {
//	char* a[3] = { "abcd","kbs","sbs" };
//	func(a);
//
//}

/*
a[0] == *(a+0)		== *(a)		== *a
a[1] == *(a+1)
a[2] == *(a+2)

a[0][2] -> a[0] == t
== t[2]
== *(t+2)
== *(a[0]+2)
== *(*(a+0)+2

a[0][2] 
== (a[0])[2]
== *(*(a+0)+2) 
== (*a)[2]
== *(*a+2)

*/
char* d_1[1] = { "��" };
char* d_2[1] = { "�ݶ�" };
char* d_3[1] = { "ȯŸ" };
char* d_4[1] = { "���̴�" };
char* d_5[1] = { "��Ÿ��" };
char* d_6[1] = { "��Ʈ��" };
char** d_list[6] = { d_1,d_2,d_3,d_4,d_5,d_6 };
int p_list[6] = { 800,1000,1100,1200,1500,2000 };
int balance = 0;
int select = 0;

void change_d() {
	int i;
	int a;
	int b;
	printf("�����Ͻ� ���Ḧ �������ּ���\n");
	for (i = 0;i < 6;i++) {
		printf("%d. %s  ", i + 1, *d_list[i]);
		printf("%d\n", p_list[i]);
		}

	scanf("%d", &a);
	b = a - 1;

	char np[10] = { 0 };
	char* npp[1] = { np };
	printf("%s ����\n", *d_list[b]);
	scanf("%s", &np);
	printf("%s\n", *npp);
	
	d_list[b] = npp;
	
	printf("%s�� ����\n", *d_list[b]);

}
void change_p() {
	int a = 0;
	int i;
	int c_price;
	printf("������ �����Ͻ� ���Ḧ �������ּ���\n");

		for (i = 0;i < 6;i++) {
			printf("%d. %s  ", i + 1, *d_list[i]);
			printf("%d\n", p_list[i]);
		}
		scanf("%d", &a);

			if (a > 0 && a < 7) {
				int b = a - 1;
				printf("%s ���� \n", *d_list[b]);
				printf("�����Ͻ� ������ �Է����ּ���\n");
				scanf("%d", &c_price);
				p_list[b] = c_price;
				printf("%d�� ���� �Ϸ�\n", p_list[b]);

			}
			else
				printf("�߸� �����ϼ̽��ϴ�. 1~6���� ����ּ���.\n");
}


void admin_menu() {
	int a;
	printf("������ �޴� ����\n");
	printf("1. ���� ���� / 2. ���� ���� / 3. ����\n");
	scanf("%d", &a);
	
		if (a == 1)
			change_d();
		else if (a == 2)
			change_p();
			
		else
			printf("�߸� �����ϼ̽��ϴ�.");
	

}

void select_drink(int sel_num) {
	int a = sel_num - 1;
	if (balance >= p_list[a]) {
		printf("%s, %d�� ���� �Ϸ�\n", *d_list[a],p_list[a]);
		balance -= p_list[sel_num-1];
		printf("���� �ܾ� : %d\n", balance);
	}
	else
		printf("�ܾ� ����. ���� �ܾ� %d ��\n", balance);
}


void addbalance(int new_bal) {
	balance += new_bal;
	printf("���� �ܾ�: %d \n", balance);
}




void user_select() {
	int a;
	scanf("%d", &a);
	printf("%d ����\n", a);
	if (a <= 6)
		select_drink(a);
	else if (a == 1000)
		addbalance(a);
	else if (a == 500)
		addbalance(a);
	else if (a == 100)
		addbalance(a);
	else if (a == 7)
		select += 7;
	else if (a == 8)
		admin_menu();
	else
		printf("wrong number\n");
}


void menu_print(int a) {
	int i;
	
	printf("���� ���� ���\n");
	for (i = 0;i < a;i++) {
		printf("%d. %s  ", i+1,*d_list[i]);
		printf("%d\n", p_list[i]);
	}
}

void menu() {
	int i;
		printf("�ܾ��� �߰��ϰų� ���Ḧ ����ּ���\n");
		printf("�ݾ��� 100/500/1000���� �߰� �����մϴ�\n");
		printf("7�� �����ø� ����˴ϴ�. \n");
		user_select();
		if (balance >= 2000)
			menu_print(6);
		else if (balance >= 1500)
			menu_print(5);
		else if (balance >= 1200)
			menu_print(4);
		else if (balance >= 1100)
			menu_print(3);
		else if (balance >= 1000)
			menu_print(2);
		else if (balance >= 800)
			menu_print(1);
	}
	


main() {
	
	while(select!=7)
		menu();
	}

















