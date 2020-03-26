#include <stdio.h>
// String inputs

int main()
{
    char color[20] , noun[20], celebrity[20];

    printf("Enter a color: ");
    scanf("%s", color);
    printf("Enter a plural noun: ");
    scanf("%s", noun);
    printf("Enter a celebrity: ");
    scanf("%s", celebrity );

    printf("Roses are %s \n", color);
    printf("%s are blue\n", noun);
    printf("I love %s \n", celebrity);

    return 0;


}
