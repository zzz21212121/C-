

#include <stdio.h>
#include <string.h>

//结构体    利用结构体类型创建一个该类型的结构体变量
struct book{
   char name[20];
   int price ;

};   //最后;结束
int main()
{
     struct book b1 = {"C语言",55};
     strcpy(b1.name,"C++");
     struct book* p1= &b1;
     printf("书的名字：%s\n",p1->name);
     printf("书的价钱：%d\n",p1->price);
//      printf("书的名字：%s\n",(*p1).name);
//       printf("书的价钱：%d\n",(*p1).price);
      return 0;
}
//      printf("书的名字：%s\n",b1.name);
//      printf("书的价钱：%d\n",b1.price);
//      return 0;
//       }
// int main()
// {
// int arr[10]={0,1,2,3,4,5};
// int i = 0;
// while (i<=6)
//  {
//          printf("%d\n",arr[i]);
//          i++;
//  }
// return 0;
// }
// int main()
// {
//   int line=0;
//  printf("加入公司\n");

//   while (line<10)
//   {
//      printf("敲代码:%d\n",line);
  
//   line++;
//   }
//   if (line>=10);
//   printf("得到offer\n");

//   return 0;
// }


// int num = 8; // 1 
// const int a = 2022;   
// // 2  const 
// //3 #define   定义标识符常量
// //4  #define MAX 10  

// enum Sex  //    enum枚举变量
// {
//     male, female, secreat 
// };

// int main ()
// {
//   char arr1[] = "abc\n";  /
//   char arr2[] = {'a','b','c'};  
//   printf ("%s\n",arr1); 
//   printf ("%s\n",arr2);
//   printf("%d\n",strlen(arr1)); //strlen 
//   printf("%d\n",strlen(arr2)); 
  
//   // printf("%c\n",'\132') 
//   // \132 八进制
//   // \x61 十六进制
//   // printf ("%c\n",'c');
//   // printf ("%s\n","\""); //

// //   int arr [MAX] = {0}
// //   enum Sex a = female ;
//   return 0;
// }
