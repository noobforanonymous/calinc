#include<stdio.h>
#include<conio.h>
void main()
{
	int x,y,z, d;
	while(d != 4)
	{
	printf("\nEnter 1 to addition ");
	printf("\nEnter 2 to subraction  ");
	printf("\nEnter 3 to multiplication ");
	printf("\nEnter your choice : ");
	scanf("%d",&d);	
switch(d)
		{
		case 1:
			printf("enter two numbers : ");
			scanf("\n%d%d",&x,&y);
			z = x + y;
			printf("%d",z);
			break;
		case 2:
			printf("enter two numbers : ");
			scanf("\n%d%d",&x,&y);
			z = x - y;
			printf("%d",z);
			break;
		case 3:
			printf("enter two numbers : ");
			scanf("\n%d%d",&x,&y);
			z = x * y;
			printf("%d",z);
			break;
		default:
			printf("press correct number........");	
		}
	}
	return 0;
}
