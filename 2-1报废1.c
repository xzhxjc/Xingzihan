#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct elevator {
	int floor;
	int people;
	int time;
};
struct elevator* arr;
struct elevator* arrtwo;
arr = (struct elevator*)malloc(sizeof(struct elevator)*)//��̬���������С�������ơ�
int tt = 0;
int p = 0;
void movedown(void)
{
	int i = 0;
	for (i = 0; i <= 10; i++) {
		if (arrtwo[i].c != a)
			a--;
		else {
			for (j = 0; j <= 10; j++)
			{
				if (arr[j].)//�ж����ϻ�������
			}
		}
			
	}
}

int directiondown(void)
{
	int s;
	for (s = 0; s >= 0; s++) {
		a--;
		tt++;
		int i;
		for (i = 0; i <= 10; i++) {
			if (b == arr[i].c)
			{
				if (tt>=)
			}
			if (a == arr[i].b)
			{
				if (p < 4) {
					p++;
					arrtwo[i] = arr[i];
					directiondown();

				}
				else
					movedown();
			}
		}

		
	}
	return tt;
}
int main()
{
	
	int i=0;
	int j;
	int a;//���ݳ�ʼλ��
	scanf_s("%d", &a);
	int p = 0;
	int b, c, t;//bΪ��ʼ¥�㣬cΪĿ��¥�㣬tΪ���뿪ʼ��ʱ��
	printf("�����κ�����1-10�����������������˳�,��һ��t����Ϊ0��");
	while (scanf_s("%d %d %d", &b, &c, &t) == 1) {
		arr[i] = { b,c,t };
		i++;
		continue;
	}
	if (a > (a[1].b))
		directiondown();
	else
		directionup();

		

}