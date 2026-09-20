#include<crtdefs.h>
int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'a' && ch <= 'z')
		printf("Small Case Letter");
	else
		printf("Not a Small Case Letter");

    return 0;
}
