#include<stdio.h>
int main ()
{
    int m ,n,p,q,i;
    float o;
    char a,b,c,d,e,f,aa,bb,cc,dd,ee,ff;
    printf("�����������mn ����m<n\n");
    scanf("%d%d",&m,&n);
    o=(float)m/(float)n;
    printf("m��n��%.2f%%\n",o);
    //�ڶ��� 
    printf("������:");
    a=getchar();
    b=getchar();
    c=getchar();
    d=getchar();
    e=getchar();
    f=getchar(); 
    aa=a+1;
    bb=b+1;
    cc=c+1;
    dd=d+1;
    ee=e+1;
    ff=f+1;
 printf("ת����Ϊ%c%c%c%c%c",bb,cc,dd,ee,ff);
 printf("\n");
 //������ 
    printf("�����������\n");
    scanf("%d%d",&m,&n);
    p=m/n;
    q=m%n;
    printf("���ǵ�����:%d   ����:%d\n",p,q);
    printf("����һ����λ����\n");
    scanf("%d",&m);
    n=m/100;
    p=m/10%10;
    q=m%10;
    printf("�٣�%d ʮ��%d ����%d\n",n,p,q);
}