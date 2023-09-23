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
arr = (struct elevator*)malloc(sizeof(struct elevator)*)//动态分配数组大小，待完善。
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
				if (arr[j].)//判断向上或者向下
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
	int a;//电梯初始位置
	scanf_s("%d", &a);
	int p = 0;
	int b, c, t;//b为初始楼层，c为目标楼层，t为距离开始的时间
	printf("输入任何三个1-10的整数，输入其他退出,第一个t必须为0：");
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