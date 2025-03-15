#include <stdio.h>
#include <stdlib.h>


void fun(int n) {
    if(n > 0) {
        fun(n - 1);
        printf(" %d ", n);
    }
}
int main()
{
    printf("Hello world!\n");
    int n = 3;
    fun(n);
    return 0;
}
