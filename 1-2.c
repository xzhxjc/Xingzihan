#include <stdio.h>
#include<math.h>
#include<string.h>

int main()
{
	FILE* file = NULL;
	char elevator[10];
	fopen_s(&file,"elevator.txt", "r");
	int a, b, c;
	fscanf_s(file, "%s %d %d %d", &elevator, &c, &a,&b);
	printf("%s %d\n %d %d\n",elevator, c, a, b);
	printf("%d 0 0\n", c);
	printf("%d %d %d\n", a, abs(c - a), 1);
	printf("%d %d %d\n", b, abs(c - a) + abs(a - b), 0);
	return 0;
}
