#include<stdio.h>
/*int main()
{
	int n = 0, t;
	for (t = 0; t <= 20 * 7; t++)
	{
		if (t % 5 == 0 && t <= 20 * 5)
		{
			n++;
			continue;
		}
		if (t % 6 == 0 && t <= 20 * 6)
		{
			n++;
			continue;
		}
		if (t % 7 == 0)
		{
			n++;
		}
	}
	printf("n=%d\n", n);
	return 0;
}*/

//#include <stdio.h>
//int main()
//{
//	int x, y, z, j = 0;
//	for (x = 0; x <= 20; x++)
//		for (y = 0; y <= 33; y++)
//			for (z = 0; z <= 100; z++)
//				if (z % 3 == 0 && x + y + z == 100 && 5 * x + 3 * y + z / 3 == 100)
//					printf("%2d:cock=%2d hen=%2d chicken=%2d\n", ++j, x, y, z);
//	return 0;
//}

int main()
{
	int a, b, i, sum1, sum2;
	for (a=1;a<=1000; a++)
	{
		sum1 = 0;
		for (int i = 0; i <a; i++)
		{
			if (a % i == 0)
				sum1 += i;
		}
	}
	for (b = 1; b <= 1000; b++)
	{
		sum2 = 0;
		for (int i = 0; i < b; i++)
		{
			sum2 += i;
		}
if(sum1==b&&sum2==a&&a<b)
	printf("%d,%d", sum1, sum2);
	}
	

	return 0;
}