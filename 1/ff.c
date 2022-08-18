#include <stdlib.h>
 
#include <stdio.h>
 
#include <string.h>
 
 
 
int main()
 
{
 
    const char* s = "set duty to 123";
 
    int i1;
    
    if ( 1 == sscanf(s,"%*[^0123456789]%d",&i1))
 
   {
 
        printf("%d\n",i1);
 
    }
 
    return 0;
 
}
