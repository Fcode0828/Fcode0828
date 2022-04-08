#include<stdio.h>
#include<math.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	printf("%p\n", &Add);//函数的地址
//	printf("%p\n", Add);//函数的地址
//	int (*pa)(int, int) = Add;//函数指针--->存放函数的地址的指针
//	printf("%p\n", *pa);
//	printf("%d\n", (*pa)(2,3));//5
//	return 0;
//}
//void Print(char* str)
//{
//	printf("%s\n", str);
//}
//int main()
//{
//	void (*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int (*pa)(int, int) = Add;//函数指针--->存放函数的地址的指针
//	printf("%p\n", *pa);
//	printf("%d\n", pa(2,3));//5
//	printf("%d\n", (*pa)(2, 3));
//	printf("%d\n", (**pa)(2, 3));
//	return 0;
//}
void menu()
{
	printf("*****************************\n");
	printf("***  1. Add     2.Sub      **\n");
	printf("***  3. Mul     4.Div      **\n");
	printf("***  5.Xor      0.Exit     **\n");
}
int Add(int x, int y)
{
	return x + y;
}
int Sub(int x, int y)
{
	return x - y;
}
int Mul(int x, int y)
{
	return x * y;
}
int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}
int main()
{
	int x = 0;
	int y = 0;
	int input = 0;
	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		if (input >= 1 && input <=5)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出");
		}
		else
		{
			printf("选择错误");
		}
	} while (input);
}