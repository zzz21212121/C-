#include <stdio.h>

// unsigned char a ;
// unsigned short b;
// unsigned int c;

// float temp = 37.5;
// char *mac = "192.168.31.84";

// char mac_array[4]  = {192,168,31,84};
// char temp_array [2] = {37,5};



// int main()
// {
// printf("%d %d %d\n",sizeof(a),sizeof(b),sizeof(c));

// }

int Max(int x ,int y)
{
  if  (x>y)
  return x;
  else 
  return y ;
}
// int main()
// {    
//      int num1 =5;
//      int num2 = 10;
//      typedef  unsigned int u_int;
//      u_int num3 = 20;// typedef 类型定义 改名卡
//      int max = 0; //int  signed int 是相同的  有符号数
//      register int a = 0; //register建议把a定义寄存器变量
//      int c = a++ ; //先使用，再相加  c =1 a=0
//      int d = ++a; //先加 ，后使用 --同理
//      // 强制类型转换 int a = (int)3.14
//      int  b = ~a;
//      // 取反 
    //   a 0000000000000000000
    //   b 1111111111111111111 
    // 负数在内存中以补码的形式存储
    //   取反加1 
    //   减1取反
    //   1000000000000000001  -1
      
    //  printf("%d",b);
      
    //  printf("请输入两个数：\n");
    //  scanf("%d %d",&num1,&num2);
    //  max = Max(num1,num2);
    //  printf("较大值是：%d\n",max);

// }

void test()
{
 static int a=1 ; //static 修饰静态局部变量 ，局部变量的生命周期变长 
 // 修饰全局变量时，改变了作用域，只能在所在源文件内部使用
 // static 修饰函数时，改变函数的作用域（改变了函数的链接属性） 普通函数具有外部链接属性
 a++;
 printf("a=%d\n",a);
}

int main(){
        int i=0;
        while(i<5)
        {
        test();
        i++;
        }
        return 0;
}