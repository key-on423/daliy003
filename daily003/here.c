#include <stdio.h>

//有1 2 3 4个数字能组成多少个互不相同的无重复的三位数？都是多少？
//
//int main()
//{
//	int x;
//	int y;
//	int z;
//	int count = 0;
//	for (x = 1;x <= 4;x++)
//	{
//		for (y = 1;y <= 4;y++)
//		{
//			for (z = 1;z <= y;z++)
//			{
//				printf("%d%d%d ", x, y, z);
//				count++;
//			}
//		}
//		printf("\n");
//	}
//	printf("一共有%d个\n", count);
// return 0;
//}


//一个整数加上100后是一个完全平方数，加上168后也是一个完全平方数，请问该数为多少？

//#include <math.h>
//int main()
//{
//
//	int i;
//	int X, Y;
//	int x, y;
//	for(i=1;i<1000000;i++)
//	{
//		 X = i + 100;
//		 Y = i + 168;
//		 x = (int)sqrt(i+100);
//		 y = (int)sqrt(i + 168);
//		if (x*x==X &&  y*y==Y)
//		{
//			printf("该数是%d\n", i);
//				break;
//		}
//	}
//	printf("i+%d=%d i+%d=%d\n", 100, X, 168, Y);
//	printf("%d*%d=%d %d*%d=%d\n", x, x, x * x, y, y, y * y);
//	return 0;
//}


int main()
{
	printf("hello %c\n", 80);
	printf("%d\n", 0xa8);
	int i, j;
	for (i = 0;i < 8;i++)
	{
		for (j = 0;j < 8;j++)
		{
			if ((i + j) % 2 == 0)
				printf("%c%c", 0xa8, 0);
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}