#include <stdio.h>

int main(void)
{
   int a,b,c,d,e,f,g,h,i,j,k,l;
   int s,z,x;
	scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j,&k,&l);
    s=a+c+e+g+i+k;
    z=b+d+f+h+j+l;
    x=9-(z*3+s-1)%10;
    printf("Enter the first 12 digits of an EAN: \n"); 
	printf("\nCheck digit: %d",x); 
	return 0;
 } 
