#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	char src[100]="programming course";
	char dst[100];
	int i=0;
	
	while(src[i] != '\0')
	{
		i++;
	}
	
	printf("%s (%i)\n", src, i);
	
	return 0;
}
