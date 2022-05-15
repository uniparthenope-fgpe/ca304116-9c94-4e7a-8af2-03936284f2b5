#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


{{code}}

int main(void) {
   char a[100];
    
    scanf("%s",a);

    alltoupper(a);
    printf("%s\n",a);
    exit(0);
}
