#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *ptr;
    int memory_size_coeff = 5;
    
    ptr = (int*)malloc(memory_size_coeff*sizeof(int)); //20 Byte located.
    for(int index = 0; index<memory_size_coeff; index++){printf("%p\n", ptr+index);    }
    free(ptr); // Get free memory area.
    
    return 0;
}
