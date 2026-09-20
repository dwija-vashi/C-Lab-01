#include<crtdefs.h>
int main()
{
	int a, b, choice, sum, sub, multi, divi;
	
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	
	printf("1. Addition\n");
	printf("2. Subtraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	
	printf("Enter your choice: \n");
	scanf("%d", &choice);
	
	switch(choice)
	{
		case 1:
		{
			sum=a+b;
			printf("Addition=%d", sum);
			break;
		}
			
		case 2:
		{
			sub=a-b;
			printf("Subtraction=%d", sub);
			break;
		}
			
		case 3:
		{
			multi=a*b;
			printf("Multiplication=%d", multi);
			break;
		}
			
		case 4:
		{
			divi=a/b;
			printf("Division=%d", divi);
			break;
		}
		default:
			printf("Invalid choice.");
	}
	
}
