#include<stdio.h>
#pragma warning(disable:4996) 
#include<stdlib.h>
#include <time.h>

/*
�޸𸮿��� ������ ������ -> ���
write : �޸𸮿��� ���Ͽ� ���� -> ��� 
=> printf? �޸𸮿��ִ� ������ ȭ������ ��������(������) ��� ���

scanf, getc, ... : ���𰡸� �޸� �ۿ��� �޸𸮿� ������ : '�Է�' -> �ۿ��� �޸𸮷� ����

*/
//
//main() {
//	FILE* fp;
//	//fp = fopen("aws iot.txt", "w");	//������ ������ �ڵ�����, ������ ���� �����ϰ� ����
//	//
//	//fprintf(fp, "%d, %s \n", 1, "aaa");	//���� ���¹�
//
//	//fclose(fp);//�������°��� ����
//	
//	//int num;
//	//char str[100];
//	//fp = fopen("aws iot.txt", "r"); //������ ������ ����
//	//fscanf(fp, "%d, %s\n", &num, str);
//	//fclose(fp);
//	//printf("%d %s\n, num, str");
//
//	//fprintf(stdout, "%d, %s\n", num, str);
//	int num; char str[100];
//	fp = fopen("a.txt", "r");
//	while (1) {
//		fscanf(fp, "%d %s", &num, str);
//		if (feof(fp)!=0)
//		{
//			break;
//		}
//		printf("%d, %s\n", num, str);
//	}
//	fclose(fp);
//	//���� ���� �ڵ�
//
//}
//
//main() {
//
//	FILE* wp, *rp;
//	int cnt;
//		rp = fopen("1.jpg", "rb");
//		wp = fopen("2.jpg", "wb");
//		int tot = 0;
//
//	while (1) {
//		cnt = fread(buff, sizeof(char), 100, rp);
//		if (feof(rp) != 0)
//		{
//			fwriter(buff, sizeof(char), cnt, wp);
//			puts("���� �Ϸ�");
//			fread(buff, sizeof(char), 100, rp);
//		}
//		else
//			puts("����");
//		fclose(rp);
//		fclose(wp);
//	}
//}
//

//main() {
//	int* p;
//	char* c;
//
//	p = (int*)malloc(sizeof(int));
//	c = (char*)malloc(sizeof(char)*4);
//
//	c[0] = 'a';
//	c[1] = 'b';
//	c[2] = '\0';
//	puts(c);
//
//	free(p);
//	free(c);
//}


//main() {
//// �����Ҹ� �Է��ؼ� ���̸�ŭ ���� ����� ���� �ּҸ� ���� �� ���
//	char buff[100];
//	int len;
//	char* ad;
//
//	gets(buff); //�Ҵ�� �޸� ������ ���ڸ� ����
//	
//	len = strlen(buff);
//
//	ad = (char*)malloc(sizeof(len) * len+1);	//4ĭ¥�� ���ڿ� ����
//
//	strcpy(ad, buff);//������ �ִ� ���ڵ��� ad���ڿ��� �־��� 
//	puts(ad);
//	free(ad);
//
//	//free(ad) ���� �� ���� �߻�: ĳ���ͷ� 3ĭ�� ���������� strcpy������ ad���� �ڿ� �ΰ����� 4ĭ�� ����. ��� heap corruption error �߻�
//	// �����ϱ� ���ؼ��� ad �� ��ĭ�� �� �־�� ��
//
//}
//
//main() {//���������� �̿�  ����
//// �����Ҹ� �Է��ؼ� ���̸�ŭ ���� ����� ���� �ּҸ� ���� �� ���
//	char buff[100];
//	int len;
//	char* ad;
//	char** myad; //double pointer
//	
//	gets(buff);
//	len = strlen(buff);
//
//	
//	myad = (char**)malloc(sizeof(char*));//�޸� �����Ҵ�
//	*myad = (char*)malloc(sizeof(char*) * len + 1);//myad ������ �����Ϳ� 4ĭ¥�� ���ڿ� �޸� ����(���� ad�� �ش�)
//	strcpy(*myad, buff);
//	puts(*myad);
//	
//	ad = (char*)malloc(sizeof(len) * len+1);	//4ĭ¥�� ���ڿ� ����
//
//	free(myad);
//	free(ad);	//free�� �� �� ���� ����ϴ� �޸𸮸� �����ָ� ���� ���ٴϰ� ��. �׷��� �ٱ��� ���������� �޸𸮸� ���� ��������
//
//}
//
//main() {
//	int i;
//	int num_b[1];
//	int cnt;
//	char buff[100];
//	char* in_str;
//
//	printf("������ ����?\n");
//	scanf("%d", num_b);
//	cnt = num_b[0];
//
//	char** a[] = (char**)malloc(sizeof(char*)*cnt+1);
//	
//
//	for (i = 0;i < cnt;i++) {
//
//	}
//
//}

//main() {
//	int cnt;
//	char buff[100];
//	char** p;
//	int dx;
//	int len;
//
//	scanf("%d", &cnt);
//	getchar();	//�Է� �����÷ο�(ù��° �Է��� ����
//
//	p = (char**)malloc(sizeof(char*) * cnt);
//
//	for (dx = 0;dx < cnt;dx++) {
//		printf("%d��° ����?", dx+1);
//		gets(buff);
//		len = strlen(buff);
//		p[dx] = (char*)malloc(sizeof(char*) * len + 1);
//		strcpy(p[dx], buff);
//		puts(p[dx]);
//		
//	}
//	for (dx = 0;dx < cnt;dx++) {
//		free(p[dx]);
//	}
//
//}

/*
malloc : 4ĭ¥���� ����� ���� �����Ⱚ���� ä����
calloc : 4ĭ¥���� ����� ���� 0���� �ʱ�ȭ��
realloc : �޸��� ������ ���ο���� ����°�


*/

//#define square(X) ((X)*(X))
//#define PR(X) printf("%d",X)
//#define abss(x) if (x > 0) printf("%d", x); else printf("%d", -(x))
//#define three_max(a,b,c) if (a > b) { if (b > c) { printf(a); } else if (c > a) { printf("%d", c); } }else if (a < b) {if (b > c) {printf("%d", b);}else if (b < c) {	printf("%d", c);}}
////							a>b? (a?c?a:c) : (b>c?b:c) 
//#define SWAP(x,y) do {int t; t=x;x=y;y=t;} while(0)
//
//
//main() {
//	int a = 123, b = 111, c = 324;
//	printf("%d \n", (25 / square(5)));
//	// sqare(3+2) : 3 + 2 * 3 + 2 �� ���·� ó���� -> �ڿ������� 2*3�� ���� �����ؼ� 11�� ��ȯ
//	PR(14);
//	abss(-15);
//	three_max(15, 118, 19);
//	if (a > b)
//		SWAP(a, b);
//	else
//		SWAP(b, c);
//}
//
//#define PI 3.14
////(#define RED		//�ƹ��͵� ���� �ʾƵ� ��ó�� ���� ����)���ٰ� �����ϰ� ifndef �����ϱ�
//
//#ifndef RED		//RED�� define �Ǿ� ���� �ʴٸ� �Ʒ��� ����
//#define RED
//#endif
////RED�� ��� ������ �� �� RED ����
//
////���� ifndef�� �ִٸ� �̹����� RED�� define�Ǿ������Ƿ� ���� ����
//#ifndef RED //RED�� define�� �Ǿ��ִٸ� �Ʒ��� ����
//
//#endif

main() {
	
	int x = 4, y, z;
	x *= 3 + 2;
	printf("%d", x);
	x *= x = 2;
	printf("%d", x);

}











































































































































