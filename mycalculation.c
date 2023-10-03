#include<stdio.h>



int  add()
{

   int a,b,sum;
   printf("Enter the Two Numbers\n");
   scanf("%d%d",&a,&b);
   sum = a +b;
   printf("Add the Two number%d",sum);
}


int mul()
{
	int a,b,mult;
	printf("Enter the Two Numbers in Mult\n");
	scanf("%d%d",&a,&b);
	mult =a * b;
	printf("Mulitiplication of the Two numbers %d",mult);
}

int sub()
{
	int a ,b,sub;
	printf("Enter the Two Number in Sub\n");
	scanf("%d%d",&a,&b);
	sub = a -b;
	printf("Sub of the Two numbers %d",sub);
}

int div()
{
	int a, b,div;
	printf("Enter the Two numbers in Div\n");
	scanf("%d%d",&a,&b);
	div = a/b;
	printf("div of the Two numbers %d",div);
}



int main()
{
	add();
	mul();
	sub();
	div();
	
	return 0;
 }
