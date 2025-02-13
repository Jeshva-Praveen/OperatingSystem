#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>  // Required for exit()

struct dirent *dptr;

int main(int argc, char *argv[]) 
{
    char buff[100];
    DIR *dirp;

    // Prompt the user to enter a directory name
    printf("Enter Directory name: ");
    scanf("%s", buff);

    // Open the directory
    if ((dirp = opendir(buff)) == NULL) {
        printf("The given directory doesn't exist\n");
        exit(1);
    }

    // Read and print all directory entries
    while ((dptr = readdir(dirp)) != NULL) {
        printf("%s\n", dptr->d_name);
    }

    // Close the directory stream
    closedir(dirp);
    
    return 0;
}
