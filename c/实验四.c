#include<stdio.h>
#include<math.h>
int sum1(int x ,int y)
{int z;
 z= x>y ?x:y;	
}
int sum2(double k)
 {
 	double l;
 	if(k<0)
 	{
	 	printf("%.2f",fabs(k));
	 }
	 if(k>=0&&k<2)
	 {
 		l=sqrt(k+1);
 		printf("%.2f",l);
 	}
 	if(k>=2&&k<4)
 	{
	 	l=pow(k,3);
	 	printf("%.2f",l);
	 }
	 if(k>=4)
	 {
 		l=2*k+5;
 		printf("%.2f",l);
 	}
 }
int main()
{int a,b ,c,d;char ,qq,q,ch; float aa,bb,cc; double aaa;
printf("��������������: "); 
	scanf ("%d%d%d",&a,&b,&c);
	d=sum1(sum1(a,b),c);
     printf("%d\n",d);
     //�ڶ��� 
     printf("������һ����ĸ: "); 
scanf("%c%c%c",&qq,&q,&ch);
 if('Z'>=ch&&ch>='A')
     {
     	printf("��һ����д��ĸ: ");
     }
     printf("��������ߣ�cm�������أ�kg��"); 
     scanf("%f%f",&a,&b);
     cc=(aa-100)*0.9;
     if(bb>cc)
     {
     	printf("n�������ƫ��:"); 
     }
     printf("�����벻ͬ�Ķ�������");
     scanf("%d%d",&a,&b);
     if(a>b)
     {printf("���к�Ϊ��%d  %d\n",b,a);}
     printf("���к�Ϊ��%d   %d\n",a,b);
     printf("������һ����\n")
	 scanf("%lf",&aaa);
     sum2(aaa);
}
