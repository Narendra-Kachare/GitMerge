/*
    Normal file operation : read and write data from sequential manner

    LSeek function : if we want to access the data from any specific offset the we prefer lseek system call.

        SEEK_SET : from the starting position of the file  

        SEEK_CUR : from the current offset of the file

        SEEK_END : from the ending of the file.

*/ 

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
    char Data[30] = {'\0'}; // Initialise the array with empty values. Due to these garbage yet nay.

    printf("Enter the file name that you want to open : \n");
    scanf("%s",Name);

    fd = open(Name,O_RDWR);
    if(fd == -1)
    {
        printf("Unable to open file\n");
        return -1;
    }
    else
    {
        printf("File is successsfully opened\n");
    }

    lseek(fd,9,SEEK_SET);

    read(fd,Data,10);

    printf("Data from file is : \n");
    write(1,Data,10);   // Instead of printf (library function) we write function (system call).
    
    close(fd); 


    return 0;
}