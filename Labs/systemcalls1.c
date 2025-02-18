#include<stdio.h>
#include<dirent.h>
#include<stdlib.h>

struct dirent *dptr;

int main(int argc, char *argv[]) 
{
    char buff[100];
    DIR *dirp;


    printf("Enter Directory name: ");
    scanf("%s", buff);

    if ((dirp = opendir(buff)) == NULL) {
        printf("The given directory doesn't exist\n");
        exit(1);
    }
    printf("Contents of directory %s: \n",buff);
    while ((dptr = readdir(dirp)) != NULL) {
        printf("%s\n", dptr->d_name);
    }

 
    closedir(dirp);
    
    return 0;
}
