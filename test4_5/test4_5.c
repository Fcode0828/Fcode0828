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
//	//���ղ������ʽ�������㣬����ʽ����Ϊ�з�������
//	return 0;
//}
//int main()
//{
//	int i = -20;
//	unsigned  int  j = 10;
//	printf("%u\n", i + j);
//	//���ղ������ʽ�������㣬����ʽ����Ϊ�з�������
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)//i��Զ����С��0
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//int main()
//{
//    char a[1000];//char���������װ-128��127 �ܼ�255��Ԫ��
//    //-1.....-127 -128 127....1 0
//    int i;
//    for (i = 0; i < 1000; i++)
//    {
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));//strlen������׽\0�����ַ������� ����׽��0ʱֹͣ��Ϊ255
//    return 0;
//}
unsigned char i = 0;
int main()
{
    for (i = 0; i <= 255; i++)//�޷���char�ķ�Χ 0-255
    {
        printf("hello world\n");
    }
    return 0;
}
int check_sys()
{
    int i = 1;//0000 0001���   1000 0000С��
    return (*(char*)&i);//(char*)��ǿ������ת��
   //���ַ���0�Ǵ�� ���ַ���1��С��
   //��ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĸߵ�ַ�У������ݵĸ�λ���������ڴ�ĵ͵�ַ
   //�У�
   // С�ˣ��洢��ģʽ����ָ���ݵĵ�λ�������ڴ�ĵ͵�ַ�У������ݵĸ�λ, ���������ڴ�ĸߵ�
   //ַ�С�
}
int main()
{
    int ret = check_sys();
    if (ret == 1)
    {
        printf("С��\n");
    }
    else
    {
        printf("���\n");
    }
    return 0;
}
