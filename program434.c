#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[10] = {'\0'};

    int fd = 0;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

   read(fd,Arr,10);
   printf("%s",Arr);

   read(fd,Arr,10);
   printf("%s",Arr);

   read(fd,Arr,6);
   printf("%s",Arr);

    close(fd);

    return 0;
}
