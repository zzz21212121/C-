

#include <stdio.h>
#include <string.h>

//�ṹ��    ���ýṹ�����ʹ���һ�������͵Ľṹ�����
struct book{
   char name[20];
   int price ;

};   //���;����
int main()
{
     struct book b1 = {"C����",55};
     strcpy(b1.name,"C++");
     struct book* p1= &b1;
     printf("������֣�%s\n",p1->name);
     printf("��ļ�Ǯ��%d\n",p1->price);
//      printf("������֣�%s\n",(*p1).name);
//       printf("��ļ�Ǯ��%d\n",(*p1).price);
      return 0;
}
//      printf("������֣�%s\n",b1.name);
//      printf("��ļ�Ǯ��%d\n",b1.price);
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
//  printf("���빫˾\n");

//   while (line<10)
//   {
//      printf("�ô���:%d\n",line);
  
//   line++;
//   }
//   if (line>=10);
//   printf("�õ�offer\n");

//   return 0;
// }


// int num = 8; // 1 
// const int a = 2022;   
// // 2  const 
// //3 #define   �����ʶ������
// //4  #define MAX 10  

// enum Sex  //    enumö�ٱ���
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
//   // \132 �˽���
//   // \x61 ʮ������
//   // printf ("%c\n",'c');
//   // printf ("%s\n","\""); //

// //   int arr [MAX] = {0}
// //   enum Sex a = female ;
//   return 0;
// }
