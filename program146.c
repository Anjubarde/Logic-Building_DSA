#include<stdio.h>

int main()
{
    char Name[] = {'M','u','m','b','a','i','\0'};

    printf("%s\n",Name);
    
    printf("%c\n",Name[0]);
    printf("%c\n",Name[1]);
    printf("%c\n",Name[2]);
    printf("%c\n",Name[3]);

    return 0;
}