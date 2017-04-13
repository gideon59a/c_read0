/* this program reads a line from the keyboard and prints it to the screen */

#include <stdio.h>
int main( ) {

   char line[1024];
   int endf=0;
   int count=0; 

   while (endf == 0) {
   	printf ("Enter something (or '0' to break): ");
   	scanf("%[^\n]%*c", line);
	//printf( "The line 0: %c \n", line[0]);
	if ((line[0] != '0') && (count <10)) {
   		printf( "The line you entered: %s \n\n", line);
		count++;
		}
	else {
		printf( "end. \n");
		endf=1;	
	}
   }
   return 0;
}

