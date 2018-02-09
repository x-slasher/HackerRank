#include<stdio.h>
int main()
{
    char val[100];
    scanf("%[^\n]%*c",&val);
    printf("Hello, World.\n%s\n",val);


return 0;
}
