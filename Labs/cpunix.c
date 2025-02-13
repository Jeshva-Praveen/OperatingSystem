#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
int main(int argc,char*argv[]){
	FILE *fp;
	char ch;
	int sc=0;
	fp=fopen(argv[1],"r");
	if(fp==NULL)
		printf("unable to open a file",argv[1]);
	else{
		while(!feof(fp)){
			ch=fgetc(fp);
			if(ch==" ")
				sc++;
		}
		printf("no of spaces %d",sc);
		printf("\n");
		fclose(fp);
	}	
}
