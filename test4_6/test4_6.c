#include<stdio.h>
//int main()
//{
//	int n = 9;
//	//00000000000000000000000000001001-ԭ�벹����ͬ
//	//0 00000000 00000000000000000001001-�������ڴ�
//	float* pFloat = (float*)&n;
//	printf("n��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	//ȫ0 
//	//(-1)^0*0.00000000000000000001001*2^-126
//	
//	*pFloat = 9.0;//3+127=130
//	//1001.0
//	//1.001*2^3
//	//(-1)^0*1.001*2^3
//	//0 10000010 00100000000000000000000 9.0�����ʽ
//	printf("num��ֵΪ��%d\n", n);
//	printf("*pFloat��ֵΪ��%f\n", *pFloat);
//	return 0;
//}
//int main()
//{	
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", *(p + i));//ָ������;����˼Ӽ����ʼ����ֽ�
//		                        p+1��ʾ�ڶ���Ԫ�صĵ�ַ
//	}
	/*int(*pa)[10] = &arr;
	int i = 0;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(*pa + i));
	}*/
	//for (i = 0; i < 10; i++)
	//{
	//	printf("%d ", (*pa)[i]);//pa�������arr�ĵ�ַ *�������൱�ڵõ�������arr
	//	                       //��*pa=arr
	//}
//	return 0;
//}
void print1(int arr[3][5], int x, int y)//���δ����� ��Ҫд��������ʽ
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
	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };//��ά����һ��Ϊһ��Ԫ��
	                                                        //��Ԫ��Ϊ��һ�е�Ԫ��
/*	print1(arr, 3, 5);*///arr-��Ԫ�ص�ַ     �������� sizeof (arr) �� &arr
	print2(arr, 3, 5);
	return 0;
}