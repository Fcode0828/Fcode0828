#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	for (i = 0; i < 100; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;
//}
//int main()
//  { 
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	printf("%p\n",arr);
//	printf("%p\n", &arr[2]);
//	printf("%p\n", &i);
//		for (i = 0; i <= 9; i++)
//	{
//		printf("hehe\n"); 
//		arr[i] = 0;
//	}
//
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = i;
//	}
//	return 0;
//}
//int main()//����
//{
//	int i = 0;
//	int sum = 0;
//	int n = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		ret = 1;
//		for (j = 1; j <= i; j++)
//		{
//			ret *= j;
//		}
//		sum+=ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//#include <stdio.h>
////����1
//void test1()
//{
//    int n = 10;
//    int m = 20;
//    int* p = &n;
//    *p = 20;//ok?
//    p = &m; //ok?
//}
//void test2()
//{
//    //����2
//    int n = 10;
//    int m = 20;
//    const int* p = &n;
//    int const* p = &n;//const�������*����ߣ����ε���ָ��ָ�������
//    *p = 20;//ok?��ָ֤��ָ������ݲ���ͨ��ָ�����ı䡣����ָ�������������ݿɱ䡣
//    p = &m; //ok?
//}
//void test3()
//{
//    int n = 10;
//    int m = 20;
//    int* const p = &n; //const�������* ���ұߣ����ε���ָ���������
//    *p = 20; //ok?��֤��ָ����������ݲ����޸ģ�����ָ��ָ������ݣ�����ͨ��ָ��ı䡣
//    p = &m;  //ok?
//   
//}
//int main()
//{
//    //������cosnt��
//    test1();
//    //����const����*�����
//    test2();
//    //����const����*���ұ�
//    test3();
//    return 0;
//}

#include<assert.h>//10��
//char* strc_cpy(char* dest, const char* src)//const char* src 
//{
//    char* ret = dest;
//    assert(src!=NULL);//����
//    assert(dest != NULL);
//    while (*dest++ = *src++)//��Ϊ\0ʱѭ��ֹͣ
//        ;     /* Copy src over dst */
//    return(ret);
//}
//int main()
//{
//    char arr1[] = "###";
//    char arr2[] = "bit";
//    printf("%s\n", strc_cpy(arr1, arr2));
//    return 0;
//}
int my_strlen(const char* str)
{
	int count = 0;
	assert(str != NULL);//��ָ֤�����Ч��
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}
int main()
{
	char arr[] = "abcdef";
	int len = my_strlen(arr);
	peintf("%d\n", len);

	return 0;
}