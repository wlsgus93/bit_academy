#include <stdio.h>
#pragma warning(disable:4996) 
#include <stdlib.h>
#include <time.h>
#define swap(a,b) do{int t; t = a;a=b;b=t;}while(0)

//
//typedef struct _list List;
//void insert_list(int data);
//void new_list();
//void init_list();
//void view_list();
//void find_list(int data);
//void del_list(int data);
//void ordered_insert(int data);
//void movetofront(int data);
//void inserttofront(int data);
//
//main() {
//	init_list();
//	//insert_list(155);
//	//insert_list(717);
//	//insert_list(87);
//	//insert_list(7);
//	//view_list();
//	puts("");
//	find_list(7);
//	del_list(77);
//	puts("");
//	view_list();
//	ordered_insert(13);
//	ordered_insert(9);
//	ordered_insert(192);
//	ordered_insert(169);
//	puts("");
//	view_list();
//	movetofront(169);
//	view_list();
//}
//
//
//struct _list {
//	int key;
//	struct _list* next;	// node ���� 
//
//};//struct _list end
//
//List* head, * tail;		//���� ��� �̸� 
//
//void init_list(void) {
//	head = (List*)malloc(sizeof(List));
//	tail = (List*)malloc(sizeof(List));
//	head->next = tail;
//	tail->next = tail;
//
//}//init_list end
//
//
//void insert_list(int data) {
//	List* nw;
//	nw = (List*)malloc(sizeof(List));
//	nw->key = data;
//	nw->next = head->next;
//	head->next = nw;
//
//}
//
//void view_list() {
//	List* wk;
//	wk = head->next;
//	
//	/*wk = head->next;
//	printf("%d\n", wk->key);
//	wk = wk->next;
//	printf("%d\n", wk->key);*/
//
//	while (wk != tail) {
//		printf("%d\n", wk->key);
//
//		wk = wk->next;
//
//	}
//}
//void find_list(int data) {
//	List* wk;
//	wk = head->next;
//
//	/*while (wk != tail) {
//		if (wk->key == data)
//		{
//			printf("data exist\n");
//			break;
//		}wk = wk->next;
//	}
//	if (wk == tail)
//		printf("no data\n");
//*/
//	while (wk -> key != data && wk != tail) {
//		wk = wk->next;
//	}
//	if (wk == tail)
//		printf("no data\n");
//	else
//		printf("%d exists\n", data);
//
//}
//
//void del_list(int data) {
//	List* wk;
//	List* del;
//	//wk = head->next;
//	wk = head;
//	while (wk->next->key != data && wk->next != tail) {
//		wk = wk->next;
//	}
//	if (wk->next == tail) {
//		printf("%d does not exist\n",data);
//	}
//	else
//	{
//		del = wk->next;
//		wk->next = wk->next->next;
//		free(del);
//		printf("%d delete complete\n", data);
//
//
//	}
//
//
//	//while (wk != tail) {
//	//	if (wk->key == data)
//	//	{
//	//		wk->key = wk->next->key;
//	//		wk->next = wk->next->next;
//	//		printf("delete complete\n");
//	//		break;
//	//	}
//	//	else
//	//	{
//	//		printf("nono data\n");
//	//	}
//	//		wk = wk->next;
//
//	//} tail �� ���� ��� tail �ּҰ� ��µ�
//	
//
//}
//
//void ordered_insert(int data) {
//	List* wk;
//	List* pre;
//	List* nw;
//	pre = head;
//	wk = head->next;
//	while (wk->key <= data && wk != tail)
//	{
//		pre = pre->next;
//		wk = wk->next;
//	}
//	nw = (List*)malloc(sizeof(List));
//	nw->key = data;
//	nw->next = wk;
//	pre->next = nw;
//
//}
//
//void inserttofront(int data) {	//������ �� �տ� ����
//	List* wk;
//	List* nw;
//	wk = head;
//	nw = (List*)malloc(sizeof(List));
//	nw->next = wk->next;
//	wk->next = nw;
//	nw->key = data;
//
//}
//
//void movetofront(int data) {	//ã�� �����͸� �Ǿ����� �̵�
//	List* wk;
//	wk = head->next;
//
//	List* move;
//
//	while (wk->next->key != data && wk->next != tail) {
//		wk = wk->next;
//	}
//	if (wk->next == tail) {
//		printf("%d does not exist\n", data);
//	}
//	else
//	{
//		move = wk->next;
//		wk->next = wk->next->next;
//		move->next = head->next;
//		head -> next = move;
//		printf("%d moved to front\n", data);
//
//
//	}
//}
//
//typedef struct engine {
//	
//	int piston;
//	int fan;
//	int pipe;
//
//}Engine;
//
//struct car {
//	Engine* sedan, * sports;
//
//
//};
//void hyundai(struct car* man)
//{
//	Engine* p = man->sedan;
//	p->piston = 50;
//	p->fan = 30;
//	man->sedan->pipe= 20;	//���� ���� p->pipe �� ����ȭ ����
//
//}
//main() {
//
//	struct car hi;
//	hi.sedan = (Engine*)malloc(sizeof(Engine));
//	Engine* p = hi.sedan;
//	hyundai(&hi);
//	printf("%d %d %d \n", p->piston, p->fan, hi.sedan->pipe);
//
//}


//
//int partition(int arr[], int s, int e)
//{
//    int big, small, pivot;
//    big = s;
//    small = e + 1;
//    pivot = arr[big];
//    while (big < small) {
//        while (arr[++big] <= pivot);
//        while (arr[--big] > pivot);
//        //pivot���� ū���� ã�� ����
//
//        //pivot ���� �۰ų� ���� ���� ã�� ����
//
//
//        if (big < small) {
//            swap(arr[big], arr[small]);
//        }
//    }
//    swap(arr[s], arr[small]);
//    return small;
//}
//void qsort(int arr[], int s, int e)
//{
//    int mid;
//    if (s < e) {
//        mid = partition(arr, s, e);
//        qsort(arr, s, mid - 1);
//        qsort(arr, mid + 1, e);
//    }
//}
//
//main()
//{
//    int arri[] = { 3,4,1,5,2,8,9,6,10,7 };
//}


void printInt(int* arr, int size);
void printDbl(double* arr, int size);
void printstr(char(*arr)[10], int size);

int comp_i(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

//���̺귯�� �����ϴ� qsort�� ���� comp_d �Լ� �ϼ�
int comp_d(const void* a, const void* b) {
    if (*(double*)a > * (double*)b)
        return 1;
    else if (*(double*)a < *(double*)b)
        return -1;
    else return 0;

}

//���̺귯�� �����ϴ� qsort�� ���� comp_s �Լ� �ϼ�
int comp_s(const void* a, const void* b) {
    return strcmp((char*)a,(char*)b);
}

int main(void) {
    int arri[] = { 3,4,1,5,2,8,9,6,10,7 };
    double arrd[] = { 3.2, 5.6, 4.3, 8.7, 2.3, 4.5, 2.1, 2.3, 4.6, 4.5 };
    char arrs[][7] = {  "��ҿ�","������","�̽���","������",
        "�ں�ȣ","��õ��","�ڼ���","���μ�",
        "�����","������","�̰��","���α�"

    };
    qsort(arri, sizeof(arri) / sizeof(arri[0]), sizeof(int), comp_i);
    printInt(arri, sizeof(arri) / sizeof(arri[0]));

    qsort(arrd, sizeof(arrd) / sizeof(arrd[0]), sizeof(double), comp_d);
    printDbl(arrd, sizeof(arrd) / sizeof(arrd[0]));

    //���̺귯�� qsort�� �̿��Ͽ� 2�����迭�� �ִ� ���ڿ��� �����սô�.

    qsort(arrs, sizeof(arrs) / sizeof(arrs[0]), sizeof(arrs[0]), comp_s);
    printstr(arrs, sizeof(arrs) / sizeof(arrs[0]));

    return 0;
}
void printInt(int* arr, int size) {
    int dx = 0;
    for (dx = 0; dx < size; ++dx) {
        printf("%d ", arr[dx]);
    }
    printf("\n");
}

void printDbl(double* arr, int size) {
    int dx = 0;
    for (dx = 0; dx < size; ++dx) {
        printf("%.1f  ", arr[dx]);
    }
    printf("\n");
}

void printstr(char(*arr)[7], int size) {
    int dx = 0;
    for (dx = 0; dx < size; ++dx) {
        printf("%s ", arr[dx]);
    }
    printf("\n");
}
















































































