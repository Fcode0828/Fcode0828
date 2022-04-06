#include<stdio.h>
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001-原码补码相同
//	//0 00000000 00000000000000000001001-浮点型内存
//	float* pFloat = (float*)&n;
//	printf("n的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	//全0 
//	//(-1)^0*0.00000000000000000001001*2^-126
//	
//	*pFloat = 9.0;//3+127=130
//	//1001.0
//	//1.001*2^3
//	//(-1)^0*1.001*2^3
//	//0 10000010 00100000000000000000000 9.0存的形式
//	printf("num的值为：%d\n", n);
//	printf("*pFloat的值为：%f\n", *pFloat);
//	return 0;
//}
//int main()
//{	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//指针的类型决定了加减访问几个字节
//		                        p+1表示第二个元素的地址
//	}
	/*int(*pa)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*pa + i));
	}*/
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", (*pa)[i]);//pa存的数组arr的地址 *解引用相当于得到了数组arr
	//	                       //即*pa=arr
	//}
//	return 0;
//}
void print1(int arr[3][5], int x, int y)//传参传数组 需要写成数组形式
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
void print2(int(*p)[5], int x, int y)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			printf("%d ", p[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//二维数组一行为一个元素
	                                                        //首元素为第一行的元素
/*	print1(arr, 3, 5);*///arr-首元素地址     两个特例 sizeof (arr) 和 &arr
	print2(arr, 3, 5);
	return 0;
}