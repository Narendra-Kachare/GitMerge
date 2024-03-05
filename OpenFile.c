// Write into the file

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

    char Name[30];
    int fd = 0;



    printf("Enter file name that you want open : \n");
    scanf("%s",Name);

    fd = open(Name,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is successfully opened with fd %d",fd);
    }

    close(fd);


}