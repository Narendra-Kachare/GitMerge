/*
User
    1.Owner
        Read(4) -  Write(2) -  Execute(1) 
        
    2.Group
        Read(4) -  Write(2) -  Execute(1) 

    3.Other
        Read(4) -  Write(2) -  Execute(1) 

# According to number we get permission, for full permission  #0777 --> (0,#owner,#group,#other)     (4+2+1)
*/ 

// # create file with Demo.txt
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

    fd = creat(Name,0777);  // Read-4 + Write-2 + Execute-1 
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