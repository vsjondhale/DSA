#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    //This code will allocate memory in the stack
    int a[5] = {1, 2, 3, 4, 5};
    int *p;
    p = a; // p = &a[0]  Both are same

    for(int i=0; i< 5; i++) {
        //printf("%d", p[i]);
        std::cout << p[i] << std::endl;
    }

    // if we want to allocate the memory in the Heap then use bellow code.
    int *ptr;
    //ptr = (int *)malloc(5 * sizeof(int)); // Allocate memory using c programming
    ptr = new int[5]; //Using C++
    ptr[0] = 10;
    ptr[1] = 20;
    ptr[2] = 30;
    ptr[3] = 40;
    ptr[4] = 50;

    for(int j=0; j< 5; j++) {
        //printf("%d", p[i]);
        std::cout << ptr[j] << std::endl;
    }

    delete [ ] p; // Delete or free up the allocated memory once job is done.
    free(p);

    delete [ ] ptr; // Delete or free up the allocated memory once job is done.
    free(ptr);

    return 0;
}
