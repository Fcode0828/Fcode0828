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
//int main()//调试
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
////代码1
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
//    //代码2
//    int n = 10;
//    int m = 20;
//    const int* p = &n;
//    int const* p = &n;//const如果放在*的左边，修饰的是指针指向的内容
//    *p = 20;//ok?保证指针指向的内容不能通过指针来改变。但是指针变量本身的内容可变。
//    p = &m; //ok?
//}
//void test3()
//{
//    int n = 10;
//    int m = 20;
//    int* const p = &n; //const如果放在* 的右边，修饰的是指针变量本身，
//    *p = 20; //ok?保证了指针变量的内容不能修改，但是指针指向的内容，可以通过指针改变。
//    p = &m;  //ok?
//   
//}
//int main()
//{
//    //测试无cosnt的
//    test1();
//    //测试const放在*的左边
//    test2();
//    //测试const放在*的右边
//    test3();
//    return 0;
//}

#include<assert.h>//10分
//char* strc_cpy(char* dest, const char* src)//const char* src 
//{
//    char* ret = dest;
//    assert(src!=NULL);//断言
//    assert(dest != NULL);
//    while (*dest++ = *src++)//当为\0时循环停止
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
	assert(str != NULL);//保证指针的有效性
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