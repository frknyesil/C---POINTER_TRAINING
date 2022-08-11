#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int memory_size_coeff = 5;
    int relocated_memory = 10;
    
    ptr = (int*)malloc(memory_size_coeff*sizeof(int)); //20 Byte located.
    printf("Old Address:\n\n");
    for(int index = 0; index<memory_size_coeff; index++){printf("%p\n", ptr+index);}
    ptr = realloc(ptr, relocated_memory*sizeof(int)); //New size.
    printf("\nNew Address:\n\n");
    for(int index = 0; index<relocated_memory; index++){printf("%p\n", ptr+index);}
    free(ptr); // Get free memory area.
    
    return 0;
}
