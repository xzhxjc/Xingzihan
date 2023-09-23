#include <stdio.h>
#include<math.h>

int main()
{
	int a, b, c;
	scanf_s("%d %d %d", &c, &a, &b);//a层等电梯，b层目标层，c层电梯所在层数
	printf("%d 0 0\n", c);
	printf("%d %d %d\n", a, abs(c - a), 1);
	printf("%d %d %d\n", b, abs(c - a) + abs(a - b), 0);
	return 0;
}










	

