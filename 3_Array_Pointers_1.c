#include <stdio.h>

int main()
{
    int array[10];
    for(int index = 0; index<10; index++){printf("Element[%d] -> Address: %p\n",index, &array[index]);}
    return 0;
}
