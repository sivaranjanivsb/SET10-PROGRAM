#include<stdio.h>
int main()
{
	 int l,b,h,tsa,volume;
	 scanf("%d%d%d",&l,&b,&h);
	 volume=l*b*h;
	 printf("%d\n",volume);
tsa=2*((l*b)+(b*h)+(h*l));
	 printf("%d\n",tsa);
	 return 0;
}
