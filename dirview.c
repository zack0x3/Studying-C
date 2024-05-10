#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>

void showdir(char teste[]){
	DIR *dirp;
	dirp = opendir(teste);
	struct dirent *dp;
	printf("Directories and files : \n");
	while (1){
		if ((dp = readdir(dirp)) != NULL){
			printf("%s\n", dp->d_name);
		}
		else {
			return;
		}
	}
}

int main(void){
	char teste[20];
	printf("Enter the directory : ");
	scanf("%20s", &teste);
	showdir(teste);
	return 0;
}
