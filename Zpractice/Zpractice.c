#include<stdio.h>
#include<string.h>
//int main()
//{
//	//数组名是首元素地址
//	//**两个例外 
//	//1.sizeof（数组名） 
//	//2. &数组名 表示取出整个数组的地址
//	int a[] = { 1,2,3,4 };
//	printf("%zd\n", sizeof(a));//16         数组总          的大小
//	printf("%zd\n", sizeof(a + 0));//8      首元素地址      的大小 
//	printf("%zd\n", sizeof(*a));//4         首元素          的大小    解引用首元素地址访问首元素
//	printf("%zd\n", sizeof(a + 1));//8      第二个元素地址  的大小
//	printf("%zd\n", sizeof(a[1]));//4       第二个元素      的大小
// 	printf("%zd\n", sizeof(&a));//8         整个数组地址    的大小   
//	printf("%zd\n", sizeof(*&a));//16       整个数组        的大小    解引用数组的地址访问的是数组
//	printf("%zd\n", sizeof(&a + 1));//8     下个数组地址    的大小    跳过整个数组的地址还是一个地址 算的还是一个地址大小
//	printf("%zd\n", sizeof(&a[0]));//8      首元素地址      的大小
//	printf("%zd\n", sizeof(&a[0] + 1));//8  第二元素地址    的大小
//	return 0;
//}
//int main()
//{
//	char arr[] = { 'a','b','c','d','e','f' };
//	printf("%d\n", sizeof(arr));//6         整个数组的      的大小
// 	printf("%d\n", sizeof(arr + 0));//8     首元素的地址    的大小
//	printf("%d\n", sizeof(*arr));//1        首元素          的大小   
//	printf("%d\n", sizeof(arr[1]));//1      第二个元素      的大小
//	printf("%d\n", sizeof(&arr));//8        整个数组地址    的大小
//	printf("%d\n", sizeof(&arr + 1));//8    下个数组的地址  的大小 
//	printf("%d\n", sizeof(&arr[0] + 1));//8 第二个元素地址  的大小 
//
//	printf("%d\n", strlen(arr));//随机值     找不到\0
//	printf("%d\n", strlen(arr + 0));//随机值 找不到\0
//	printf("%d\n", strlen(*arr));//err   将a的asc值返回到strlen中作为地址访问 属于非法访问
//	printf("%d\n", strlen(arr[1]));//err 将b的asc值返回到strlen中作为地址访问 属于非法访问
//	printf("%d\n", strlen(&arr));//随机值
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//随机值
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
//	//sizeof 是 计算内存中存储空间大小
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%d\n", sizeof(arr));//7    （6+1）*1
// 	printf("%d\n", sizeof(arr + 0));//8     首元素地址      的大小
//	printf("%d\n", sizeof(*arr));//1        首元素          的大小
//	printf("%d\n", sizeof(arr[1]));//1      第二个元素      的大小 
//	printf("%d\n", sizeof(&arr));//8        整个数组地址    的大小
//	printf("%d\n", sizeof(&arr + 1));//8    下个数组地址    的大小
//	printf("%d\n", sizeof(&arr[0] + 1));//8 第二个元素地址  的大小
//	//a b c d e f /0
//	printf("%d\n", strlen(arr));//6         找到/0停止  
//	printf("%d\n", strlen(arr + 0));//6
//	printf("%d\n", strlen(*arr));//err
//	printf("%d\n", strlen(arr[1]));//err
//	printf("%d\n", strlen(&arr));//6       可能会报警告 const char* 和 char（*）[7]不兼容
//	printf("%d\n", strlen(&arr + 1));//随机值
//	printf("%d\n", strlen(&arr[0] + 1));//5  从b的地址开始数字符
//	return 0;
//}
//int main()
//{
//	char* p = "abcdef";//把a的地址存到p里面
//	//printf("%d\n", sizeof(p));//8      计算指针变量p的大小
//	//printf("%d\n", sizeof(p + 1));//8  计算存放b的指针的大小
//	//printf("%d\n", sizeof(*p));//1     解引用得到a 计算a的大小
//	//printf("%d\n", sizeof(p[0]));//1        int arr[10]; arr[0]==*(arr+0)  p[0]==*(p+0)=='a'
//	//printf("%d\n", sizeof(&p));//8         a的地址的大小
//	//printf("%d\n", sizeof(&p + 1));//8     跳过p的笑一个地址的大小
//	//printf("%d\n", sizeof(&p[0] + 1));//8  b的地址大小
//	
//	printf("%d\n", strlen(p));//6
//	printf("%d\n", strlen(p + 1));//5
//	printf("%d\n", strlen(*p));//err
//	printf("%d\n", strlen(p[0]));//err
//	printf("%d\n", strlen(&p));//随机    从p中找/0 strlen（const char* arr） strlen需要传入地址访问
//	printf("%d\n", strlen(&p + 1));//随机
//	printf("%d\n", strlen(&p[0] + 1));//5 从b开始数/0
//
//	return 0;
//}
//int main()
//{
//	int a[3][4] = { 0 };
//	printf("%d\n", sizeof(a));//48 (3*4)*4
//	printf("%d\n", sizeof(a[0][0]));//4     第一行第一个元素的大小
//	printf("%d\n", sizeof(a[0]));//16       第一行数组的大小
//	printf("%d\n", sizeof(a[0] + 1));//8    第一行第二个元素的大小 a[0]是第一行的数组名 数组名此时是首元素的地址其实就是第一行第一个的地址 所以加一就是第一行第二个元素的地址
//	printf("%d\n", sizeof(*(a[0] + 1)));//4  第一行第二个元素地址解引用得到第一行第二个元素 大小是4个字节
//	printf("%d\n", sizeof(a + 1));//8        第二行的地址  二位数组的数组名表示首元素（第一行）地址
//	printf("%d\n", sizeof(*(a + 1)));//16    第二行元素的大小
//	printf("%d\n", sizeof(&a[0] + 1));//8    第二行的地址
//	printf("%d\n", sizeof(*(&a[0] + 1)));//16第二行的元素 &相当于捆绑了一行
//	printf("%d\n", sizeof(*a));//16           第一行元素
//	printf("%d\n", sizeof(a[3]));//16         第四行元素
//	printf("%d\n", sizeof(&a));//8            整个二维数组的地址
//	return 0;
//}
//int main()
//{
//    int a[5] = { 1, 2, 3, 4, 5 };
//    int* ptr = (int*)(&a + 1);//(强制类型转换)(&a + 1)
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
////假设p 的值为0x100000。 如下表表达式的值分别为多少？
////已知，结构体Test类型的变量大小是20个字节
//int main()
//{
//    p = (struct Test*)0x100000;
//    printf("%p\n", p + 0x1);// +1跳过20个字节 0x00100014
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
//    printf("%x,%x", ptr1[-1], *ptr2);//4   ,地址
//    return 0;
//} 
//int main()
//{
//    int a[3][2] = { (0, 1), (2, 3), (4, 5) };//逗号表达式==>{1，3，5}
//    int* p;
//    p = a[0];
//    printf("%d", p[0]);
//    return 0;
//}
int main()
{
    int a[5][5];
    int(*p)[4];//指针数组
    p = a;//int (*)4------int(*)5
    printf("%p,%d\n", &p[4][2] - &a[4][2], &p[4][2] - &a[4][2]);//&p[4][2] =*(*(p+4)+2)
    return 0;
}

