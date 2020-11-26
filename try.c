#include<stdio.h>
int main()
{
#ifdef __GNUG__
                printf("qwertyuio");
                printf("I am wrong");
#else
                printf ("123456789");
                printf("I am right");
#endif
        return 0;

}
