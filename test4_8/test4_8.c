#include<stdio.h>
//void bubble_sort(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j <sz-1-i ; j++)
//		{
//			if (arr[j] > arr[j + 1])
//			{
//				int tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] = tmp;
//			}
//		}
//	}
//}
//struct stu
//{
//	char name[20];
//	int age;
//};
//#include<stdlib.h>
//#include<string.h>
//int com_int(const  void* e1,const void* e2)
//{
//	return *(int*)e1 - *(int*)e2;
//}
//void test1()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	qsort(arr, sz, sizeof(arr[0]), com_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//int com_float(const void* e1,const void* e2)
//{
//	return *(float*)e1 - *(float*)e2;
//}
//void test2()
//{
//	float f[3] = { 9.0,8.0,7.0 };
//	int sz = sizeof(f) / sizeof(f[0]);
//	qsort(f, sz, sizeof(f[0]), com_float);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%f ", f[i]);
//	}
//}
//int com_stu_by_age(const void* e1, const void* e2)
//{
//	return ((struct stu*)e1)->age - ((struct stu*)e2)->age;
//}
//void test3()
//{
//	struct stu s[3] = { {"zhangsan,20"},{"lisi,30"},{"wangwu,10"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_stu_by_age);
//}
//int com_stu_by_name(const void* e1, const void* e2)
//{
//	return strcmp(((struct stu*)e1)->name ,((struct stu*)e2)->name);//比较字符串用strcmp
//}
//void test4()
//{
//	struct stu s[3] = { {"zhangsan,20"},{"lisi,30"},{"wangwu,10"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	qsort(s, sz, sizeof(s[0]), com_stu_by_name);
//	//    
//}
////////////////////////////////////////////////////////////////////////////////////////////////////
//void Swap(char*buf1,char*buf2,int width)
//{
//	int i = 0;
//	for (i = 0; i < width; i++)
//	{
//		char tmp = *buf1;
//		*buf1 = *buf2;
//		*buf2 = tmp;
//		buf1++;
//		buf2++;
//	}
//}
//void bubble_sort(void*base, int sz,int width,int(*cmp)(void*e1,void*e2))
//{
//	int i = 0;
//	for (i = 0; i < sz - 1; i++)//每行
//	{
//		int j = 0;
//		for (j = 0; j < sz - 1 - i; j++)//每行中的比较
//		{
//			if (cmp((char*)base+j*width,(char*)base +(j+1)*width) > 0)
//			{
//				//交换
//				Swap((char*)base + j * width, (char*)base + (j + 1) * width,width);
//			}
//		}
//	}
//}
//void test5()
//{
//	int arr[10] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz, sizeof(arr[0]),com_int);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void test6()
//{
//	struct stu s[3] = { {"zhangsan,20"},{"lisi,30"},{"wangwu,10"} };
//	int sz = sizeof(s) / sizeof(s[0]);
//	//bubble_sortt(s, sz, sizeof(s[0]), com_stu_by_name);
//	bubble_sortt(s, sz, sizeof(s[0]), com_stu_by_age);
//}
//
//int main()
//{
//	//test1();
//	//test2();
//	//test3();
//	//test4();
//	//test5();
//	//test6();
//	return 0;
//}
////void* 类型的指针可以接收任何类型的地址
