#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char resault[5];
int main() {
	char *c;
	
char string[16]="duty is:131";

char i=0;
if (c=strstr (string,"s") )
 c+=2;
while ( *c>47 && *c<58 )
{
   resault[i]=*c;
   i++;
   c++;
   resault[i]=0;
}
	
	printf(resault);
	
	int	val=atoi(resault);
	printf("\n\n");
	printf("%i",val);
	
	return 0;
}
