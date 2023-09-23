#include<stdio.h>
int main()
{
	int a, b, c,d,e,temp;
	e = 1;
	scanf_s("%d%d%d%d", &a, &b, &c, &d);
	if (a > c && c > e)
	{
		if (d<a && d>c)
		{
			printf("%d %d %d %d %d", e, c, d, a, b);
		}
		if (d==a)
			printf("%d %d %d %d", e, c, d,b);
		if (d > a)
		{
			if (b==d)
				printf("%d %d %d %d", e, c, a, d);
			if (b>d)
				printf("%d %d %d %d %d", e, c, a, d, b);
			if (b<d)
				printf("%d %d %d %d %d", e, c, a, d, b);
		}
		if (d < c)
		{
			if (b>d)
				printf("%d %d %d %d %d", e, c, a, b, d);
			if (b==d)
				printf("%d %d %d %d", e, c, a, d);
			if (b<d)
				printf("%d %d %d %d %d", e, c, a, d, b);

		}

	}
	if (a > c && e == c)
	{
		if (d<a && d>c)
		{
			printf("%d %d %d %d", e, d, a, b);
		}
		if (d == a)
			printf("%d %d %d", e, d, b);
		if (d > a)
		{
			if (b == d)
				printf("%d %d %d", e, a, d);
			if (b > d)
				printf("%d %d %d %d", e, a, d, b);
			if (b < d)
				printf("%d %d %d %d", e, a, d, b);
		}
		
	}
	if (a<c && a>e)
	{
		temp=a;
		a = c;
		c = temp;
		if (d<a && d>c)
		{
			printf("%d %d %d %d %d", e, c, d, a, b);
		}
		if (d == a)
			printf("%d %d %d %d", e, c, d, b);
		if (d > a)
		{
			if (b == d)
				printf("%d %d %d %d", e, c, a, d);
			if (b > d)
				printf("%d %d %d %d %d", e, c, a, d, b);
			if (b < d)
				printf("%d %d %d %d %d", e, c, a, d, b);
		}
		if (d < c)
		{
			if (b > d)
				printf("%d %d %d %d %d", e, c, a, b, d);
			if (b == d)
				printf("%d %d %d %d", e, c, a, d);
			if (b < d)
				printf("%d %d %d %d %d", e, c, a, d, b);

		}
	}
	if (a < c && a == e)
	{
		temp=a;
		a = c;
		c = temp;
		if (d<a && d>c)
		{
			printf("%d %d %d %d", e, d, a, b);
		}
		if (d == a)
			printf("%d %d %d", e, d, b);
		if (d > a)
		{
			if (b == d)
				printf("%d %d %d", e, a, d);
			if (b > d)
				printf("%d %d %d %d", e, a, d, b);
			if (b < d)
				printf("%d %d %d %d", e, a, d, b);
		}
	}
	
}