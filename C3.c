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
//      u_int num3 = 20;// typedef ���Ͷ��� ������
//      int max = 0; //int  signed int ����ͬ��  �з�����
//      register int a = 0; //register�����a����Ĵ�������
//      int c = a++ ; //��ʹ�ã������  c =1 a=0
//      int d = ++a; //�ȼ� ����ʹ�� --ͬ��
//      // ǿ������ת�� int a = (int)3.14
//      int  b = ~a;
//      // ȡ�� 
    //   a 0000000000000000000
    //   b 1111111111111111111 
    // �������ڴ����Բ������ʽ�洢
    //   ȡ����1 
    //   ��1ȡ��
    //   1000000000000000001  -1
      
    //  printf("%d",b);
      
    //  printf("��������������\n");
    //  scanf("%d %d",&num1,&num2);
    //  max = Max(num1,num2);
    //  printf("�ϴ�ֵ�ǣ�%d\n",max);

// }

void test()
{
 static int a=1 ; //static ���ξ�̬�ֲ����� ���ֲ��������������ڱ䳤 
 // ����ȫ�ֱ���ʱ���ı���������ֻ��������Դ�ļ��ڲ�ʹ��
 // static ���κ���ʱ���ı亯���������򣨸ı��˺������������ԣ� ��ͨ���������ⲿ��������
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