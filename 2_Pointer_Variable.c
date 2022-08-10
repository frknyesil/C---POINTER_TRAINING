
#include <stdio.h>

int main()
{
    int* ptr1;
    /*Other Correct syntaxes!
    int * ptr1; 
    int *ptr1;
    */
    
    int param;
    //int* ptr1 = &param; 
    ptr1 = &param; //Get address of "param".
    *ptr1 = 1; //"param" = 1.
    
    printf("Variable Value: %d\nPointer Content: %d\n\n", param, *ptr1);
    printf("Variable Address: %p\nPointed Address: %p", &param, ptr1);
    
    return 0;
}
