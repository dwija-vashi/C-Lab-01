#include<crtdefs.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    if(ch >= 'A' && ch <= 'Z')
        printf("Capital Letter");
    else if(ch >= 'a' && ch <= 'z')
        printf("Small Case Letter");
    else if(ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special Symbol");

    return 0;
}
