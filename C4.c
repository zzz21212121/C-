#include <stdio.h>
int main()
{
int a =10;
char b='A ';
char* c = &b;
*c = 1;
int*p = &a; //��a�ĵ�ַ��P
*p=20;  //*p�ǽ����ò�����   ָ���С��32����ϵͳ 4���ֽ�
printf("%d\n",a);
printf("%d\n",b);
}
// int Max (int x ,int y)
// {
// if(x>y)
//    return x;
// else  
//    return y;

// }
// #define MAX(x,y)  (x>y?x:y) //��Ŀ�����

// int main()
// {
//   int a = 10;
//   int b=20;
//   // �����ķ�ʽ
// //   int max = Max(a,b);
// //   printf("max=%d\n",max);
//  // ��ķ�ʽ
//   int max = MAX(a,b);
//   printf("max=%d\n",max);
// return 0 ;
// }