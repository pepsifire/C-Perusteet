#include <stdio.h>
#include <string.h>

void reverse( char * str1, char * str2 );

int main( void ){

    char str1[6] = {"apple"};
    char copyOfStr[6];

    reverse( copyOfStr, str1 );
    printf("the copy is:  %s\n", copyOfStr);

    return 0;
}

void reverse( char * str1, char * str2 ){

    int i=0,j=0;
    int len = strlen(str2);

    for(i=len -1; i >= 0; i--){
        str1[j] = str2[i];
        j++;
    }

}
