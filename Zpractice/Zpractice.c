#include<stdio.h>
#include<string.h>
//int main()
//{
//	//����������Ԫ�ص�ַ
//	//**�������� 
//	//1.sizeof���������� 
//	//2. &������ ��ʾȡ����������ĵ�ַ
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));//16         ������          �Ĵ�С
//	printf("%zd\n", sizeof(a + 0));//8      ��Ԫ�ص�ַ      �Ĵ�С 
//	printf("%zd\n", sizeof(*a));//4         ��Ԫ��          �Ĵ�С    ��������Ԫ�ص�ַ������Ԫ��
//	printf("%zd\n", sizeof(a + 1));//8      �ڶ���Ԫ�ص�ַ  �Ĵ�С
//	printf("%zd\n", sizeof(a[1]));//4       �ڶ���Ԫ��      �Ĵ�С
// 	printf("%zd\n", sizeof(&a));//8         ���������ַ    �Ĵ�С   
//	printf("%zd\n", sizeof(*&a));//16       ��������        �Ĵ�С    ����������ĵ�ַ���ʵ�������
//	printf("%zd\n", sizeof(&a + 1));//8     �¸������ַ    �Ĵ�С    ������������ĵ�ַ����һ����ַ ��Ļ���һ����ַ��С
//	printf("%zd\n", sizeof(&a[0]));//8      ��Ԫ�ص�ַ      �Ĵ�С
//	printf("%zd\n", sizeof(&a[0] + 1));//8  �ڶ�Ԫ�ص�ַ    �Ĵ�С
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6         ���������      �Ĵ�С
// 	printf("%d\n", sizeof(arr + 0));//8     ��Ԫ�صĵ�ַ    �Ĵ�С
//	printf("%d\n", sizeof(*arr));//1        ��Ԫ��          �Ĵ�С   
//	printf("%d\n", sizeof(arr[1]));//1      �ڶ���Ԫ��      �Ĵ�С
//	printf("%d\n", sizeof(&arr));//8        ���������ַ    �Ĵ�С
//	printf("%d\n", sizeof(&arr + 1));//8    �¸�����ĵ�ַ  �Ĵ�С 
//	printf("%d\n", sizeof(&arr[0] + 1));//8 �ڶ���Ԫ�ص�ַ  �Ĵ�С 
//
//	printf("%d\n", strlen(arr));//���ֵ     �Ҳ���\0
//	printf("%d\n", strlen(arr + 0));//���ֵ �Ҳ���\0
//	printf("%d\n", strlen(*arr));//err   ��a��ascֵ���ص�strlen����Ϊ��ַ���� ���ڷǷ�����
//	printf("%d\n", strlen(arr[1]));//err ��b��ascֵ���ص�strlen����Ϊ��ַ���� ���ڷǷ�����
//	printf("%d\n", strlen(&arr));//���ֵ
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//���ֵ
//	return 0;
//}
//int main()
//{
//	char mystr[100] = "test";
//	int a = sizeof(mystr);//100
//	int b = strlen(mystr);//4
//	printf("%d %d ", a, b);
//	char str[] = "test";
//	int c = sizeof(str);//5
//	int d = strlen(str);//4
//	printf("%d %d", c, d);
//	char e = 'abc';
//	int f = sizeof(e);
//	printf("%d", f);//1
//
//	//sizeof �� �����ڴ��д洢�ռ��С
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7    ��6+1��*1
// 	printf("%d\n", sizeof(arr + 0));//8     ��Ԫ�ص�ַ      �Ĵ�С
//	printf("%d\n", sizeof(*arr));//1        ��Ԫ��          �Ĵ�С
//	printf("%d\n", sizeof(arr[1]));//1      �ڶ���Ԫ��      �Ĵ�С 
//	printf("%d\n", sizeof(&arr));//8        ���������ַ    �Ĵ�С
//	printf("%d\n", sizeof(&arr + 1));//8    �¸������ַ    �Ĵ�С
//	printf("%d\n", sizeof(&arr[0] + 1));//8 �ڶ���Ԫ�ص�ַ  �Ĵ�С
//	//a b c d e f /0
//	printf("%d\n", strlen(arr));//6         �ҵ�/0ֹͣ  
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6       ���ܻᱨ���� const char* �� char��*��[7]������
//	printf("%d\n", strlen(&arr + 1));//���ֵ
//	printf("%d\n", strlen(&arr[0] + 1));//5  ��b�ĵ�ַ��ʼ���ַ�
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//��a�ĵ�ַ�浽p����
//	//printf("%d\n", sizeof(p));//8      ����ָ�����p�Ĵ�С
//	//printf("%d\n", sizeof(p + 1));//8  ������b��ָ��Ĵ�С
//	//printf("%d\n", sizeof(*p));//1     �����õõ�a ����a�Ĵ�С
//	//printf("%d\n", sizeof(p[0]));//1        int arr[10]; arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
//	//printf("%d\n", sizeof(&p));//8         a�ĵ�ַ�Ĵ�С
//	//printf("%d\n", sizeof(&p + 1));//8     ����p��Цһ����ַ�Ĵ�С
//	//printf("%d\n", sizeof(&p[0] + 1));//8  b�ĵ�ַ��С
//	
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//���    ��p����/0 strlen��const char* arr�� strlen��Ҫ�����ַ����
//	printf("%d\n", strlen(&p + 1));//���
//	printf("%d\n", strlen(&p[0] + 1));//5 ��b��ʼ��/0
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 (3*4)*4
//	printf("%d\n", sizeof(a[0][0]));//4     ��һ�е�һ��Ԫ�صĴ�С
//	printf("%d\n", sizeof(a[0]));//16       ��һ������Ĵ�С
//	printf("%d\n", sizeof(a[0] + 1));//8    ��һ�еڶ���Ԫ�صĴ�С a[0]�ǵ�һ�е������� ��������ʱ����Ԫ�صĵ�ַ��ʵ���ǵ�һ�е�һ���ĵ�ַ ���Լ�һ���ǵ�һ�еڶ���Ԫ�صĵ�ַ
//	printf("%d\n", sizeof(*(a[0] + 1)));//4  ��һ�еڶ���Ԫ�ص�ַ�����õõ���һ�еڶ���Ԫ�� ��С��4���ֽ�
//	printf("%d\n", sizeof(a + 1));//8        �ڶ��еĵ�ַ  ��λ�������������ʾ��Ԫ�أ���һ�У���ַ
//	printf("%d\n", sizeof(*(a + 1)));//16    �ڶ���Ԫ�صĴ�С
//	printf("%d\n", sizeof(&a[0] + 1));//8    �ڶ��еĵ�ַ
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16�ڶ��е�Ԫ�� &�൱��������һ��
//	printf("%d\n", sizeof(*a));//16           ��һ��Ԫ��
//	printf("%d\n", sizeof(a[3]));//16         ������Ԫ��
//	printf("%d\n", sizeof(&a));//8            ������ά����ĵ�ַ
//	return 0;
//}
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//(ǿ������ת��)(&a + 1)
//    printf("%d,%d", *(a + 1), *(ptr - 1));//2 ,5
//    return 0;
//}
//struct Test
//{
//    int Num;
//    char* pcName;
//    short sDate;
//    char cha[2];
//    short sBa[4];
//}*p;
////����p ��ֵΪ0x100000�� ���±���ʽ��ֵ�ֱ�Ϊ���٣�
////��֪���ṹ��Test���͵ı�����С��20���ֽ�
//int main()
//{
//    p = (struct Test*)0x100000;
//    printf("%p\n", p + 0x1);// +1����20���ֽ� 0x00100014
//    printf("%p\n", (unsigned long)p + 0x1);//+1
//    printf("%p\n", (unsigned int)p + 0x1);//+1
//    printf("%p\n", (unsigned int*)p + 0x1);//+4
//    printf("%p\n", ( int*)p + 0x1);//+4
//    return 0;
//}
//int main()
//{
//    int a[4] = { 1, 2, 3, 4 };
//    int* ptr1 = (int*)(&a + 1);
//    int* ptr2 = (int*)((int)a + 1);
//    printf("%x,%x", ptr1[-1], *ptr2);//4   ,��ַ
//    return 0;
//} 
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//���ű��ʽ==>{1��3��5}
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}
int main()
{
    int a[5][5];
    int(*p)[4];//ָ������
    p = a;//int (*)4------int(*)5
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//&p[4][2] =*(*(p+4)+2)
    return 0;
}

