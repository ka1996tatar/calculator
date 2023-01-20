#include<stdio.h>
void main()
{
	int a,b,add,sub,mul,div,ch;
	printf("enter the two numbers a and b");
	scanf("%d %d",&a,&b);
	printf("enter the ch: 1=add,2=sub,3=mul,4=div");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:
		add=a+b;
		printf("addition is %d",add);
		break;	
	case 2:
		sub=a-b;
		printf("substration is %d",sub);
		break;	
	case 3:
		mul=a*b;
		printf("multiplication is %d",mul);
		break;	
	case 4:
		div=a/b;
		printf("division is %d",div);
		break;
	default:
		printf("\n Invalid number")	;
	}
}

