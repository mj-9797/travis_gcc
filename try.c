#include<stdio.h>
int main()
{
#ifdef __GNUG__
                printf("I am wrong");
#else
                printf("I am right");
#endif
        return 0;

}
