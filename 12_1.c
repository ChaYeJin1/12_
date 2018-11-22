#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	FILE *fp;
	char input;
	
	fp=fopen("sample.txt", "r");
	
	while ((input=fgetc(fp)) != EOF) 
	{
		putchar(input); 
	}
	
	
	fclose(fp);
	
	return 0;
}
