 #include<stdio.h>
 int sum (int f)
 	{int i;
	int k=1;
 	for(i=1;i<=f;i++)
 	   { 
 	    k+=i;     
	 }
	    printf("%d\n",k);
	    return k;
 } 
 	main(){
 	int a, b,c,e,ee;
 	a=1;
 	b=2;
 int *p1=&a;
 		int *p2=&b;   //p1 p2ָ��a b 
 	printf("%d\n",*p1);  
 	printf("%d\n",*p2);   //���a b ����ֵ 
 	p1=&b;             //p1ָ��b 
 	p2=&a;             //  
       printf("0x%p\n",p1);
 	     printf("0x%p\n",p2);    //��ӡ ��ַ 
 	    p1++;
 	         printf("0x%p\n",p1);
            	p1++;
 	             c=*p1;
 	         printf("0x%p\n",c);
 	         int (*p3)(int)=sum;
 	          e=8;
      ee=p3(e);
 	      sum(e)   ;
 	}