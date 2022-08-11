#include <stdio.h>

int main()
{
    int array[4] = {1,2,3,4};
    int sum = 0;
    
    for(int index = 0; index<4; index++){sum += *(array + index);}
    printf("Sum: %d\n",sum);
    
    return 0;
}
