#include <stdio.h>

//��1 2 3 4����������ɶ��ٸ�������ͬ�����ظ�����λ�������Ƕ��٣�
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
//	printf("һ����%d��\n", count);
// return 0;
//}


//һ����������100����һ����ȫƽ����������168��Ҳ��һ����ȫƽ���������ʸ���Ϊ���٣�

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
//			printf("������%d\n", i);
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