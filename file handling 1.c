#include<stdio.h>
	main(){
	FILE *fp;
	fp=fopen("file.txt", "w");
	fprint(fp, "Hello file by printf...\n");	
	fclose(fp);
}
