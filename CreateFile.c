// Create file

/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>


/////////////////////////////////////////////////
// Helper function
/////////////////////////////////////////////////


/////////////////////////////////////////////////
// Entry point function
/////////////////////////////////////////////////
int main()
{
    int fd = 0;
    char Name[30];

    printf("Enter your file name : \n");
    scanf("%s",Name);

    fd = creat(Name,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to create file\n");
        return -1;
    }
    else
    {
        printf("File successfully created");
    }

    close(fd);

    return 0;
}