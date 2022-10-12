#include <stdio.h>
int main()
{
int a =10;
char b='A ';
char* c = &b;
*c = 1;
int*p = &a; //将a的地址给P
*p=20;  //*p是解引用操作符   指针大小在32操作系统 4个字节
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
// #define MAX(x,y)  (x>y?x:y) //三目运算符

// int main()
// {
//   int a = 10;
//   int b=20;
//   // 函数的方式
// //   int max = Max(a,b);
// //   printf("max=%d\n",max);
//  // 宏的方式
//   int max = MAX(a,b);
//   printf("max=%d\n",max);
// return 0 ;
// }