#include <stdio.h>
//int main()
//{
//    char a = -128;
//    printf("%u\n", a);
//    return 0;
//}
//int main()
//{
//    char a = 127;//127+1=-128
//    printf("%u\n", a);
//    return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%d\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%u\n", i + j);
//	//按照补码的形式进行运算，最后格式化成为有符号整数
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//i永远不会小于0
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//int main()
//{
//    char a[1000];//char数组中最多装-128到127 总计255个元素
//    //-1.....-127 -128 127....1 0
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));//strlen函数捕捉\0计算字符串长度 当捕捉到0时停止故为255
//    return 0;
//}
unsigned char i = 0;
int main()
{
    for (i = 0; i <= 255; i++)//无符号char的范围 0-255
    {
        printf("hello world\n");
    }
    return 0;
}
int check_sys()
{
    int i = 1;//0000 0001大端   1000 0000小端
    return (*(char*)&i);//(char*)是强制类型转换
   //首字符是0是大端 首字符是1是小端
   //大端（存储）模式，是指数据的低位保存在内存的高地址中，而数据的高位，保存在内存的低地址
   //中；
   // 小端（存储）模式，是指数据的低位保存在内存的低地址中，而数据的高位, ，保存在内存的高地
   //址中。
}
int main()
{
    int ret = check_sys();
    if (ret == 1)
    {
        printf("小端\n");
    }
    else
    {
        printf("大端\n");
    }
    return 0;
}
