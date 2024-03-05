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
    char Data[30];

    printf("Enter the file name that you want to open: \n");
    scanf("%s",Name);

    // Open file
    fd = open(Name,O_RDWR);
    if(fd == -1)
    {
        printf("File unable to open\n");
        return -1;
    }
    else
    {
        printf("File opened successfully\n");
    }

    // Write data into the file
    printf("Enter the data you want to write : \n");
    scanf("%s",Data);
        
    write(fd,Data,19);
    printf("Data Successfully return in the file\n");

    close(fd);
    return 0;
}