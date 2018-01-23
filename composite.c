#include<stdio.h>
int main()
{
	 int no,i,j,count=0;
	 scanf("%d",&no);
	 for(i=1;i<no;i++)
	 {
	 	if(no%i==0)
	 	count++;
	 }
	 if(count>2)
	 printf("no is composite");
	 else
	 printf("not a compoiste");
return 0;
}
