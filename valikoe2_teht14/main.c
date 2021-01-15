#include <stdio.h>

void doSomething( int p1, int p2 );
int main( void ){
   int n1 = 5;
   int n2 = 9;

   printf("n1: %d and n2: %d\n", n1, n2);

   doSomething( n1, n2 );
   printf("n1: %d and n2: %d\n", n1, n2);
   return 0;
}//main
void doSomething( int p1, int p2 ){
     int temp;

     if( p1 < p2 ){
         temp = p1;
         p1 = p2;
         p2 = temp;
     }
}
