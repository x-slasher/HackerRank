#include<stdio.h>
int main()
{
    char input_string[100];
    scanf("%[^\n]%*c",&input_string);
    printf("Hello, World.\n%s\n",input_string);


return 0;
}
