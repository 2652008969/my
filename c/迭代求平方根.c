#include <math.h>
#include <stdio.h>
 main( )
{
double x, y, y0 ;
printf( "����һ������:" ) ;
do
{
scanf("%lf", &x );//��ʽlf
}
while( x<0 );
y = 1;
do
{
y0 = y;
y = 1.0/2*( y + x / y ); 
}
while ( fabs( y - y0 ) / y > 0.00001);
printf("%.3f\n",  y ); 
}
