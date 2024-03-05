/////////////////////////////////////////////////
// Header
/////////////////////////////////////////////////
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<stdlib.h>


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
    char Data[30] = {'\0'};

    printf("Enter the file name that you want to read: \n");
    scanf("%s",Name);

    // Read file
    fd = open(Name,O_RDONLY);
    if(fd == -1)
    {
        printf("File unable to open\n");
        return -1;
    }
    else
    {
        printf("File successfully opened\n");
    }
    read(fd,Data,5);


    printf("Data from the file is : \n");
    write(1,Data,5);

    close(fd);
    return 0;
}