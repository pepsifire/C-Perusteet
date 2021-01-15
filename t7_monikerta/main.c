#include <stdio.h>
#include <stdlib.h>

int main()
{
    int luku1,
        luku2;

    scanf("%d %d",&luku1,&luku2);

    if(luku1 == 0 || luku2 == 0) {
        printf("Nollalla ei saa jakaa!\n");
        return 0;
    }

    if ( luku1 % luku2 == 0) {
        printf("Luku %d on luvun %d monikerta.", luku1,luku2);
    } else {
        printf("Luku %d ei ole luvun %d monikerta.",luku1,luku2);
    }
}
