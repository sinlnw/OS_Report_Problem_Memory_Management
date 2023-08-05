#include <iostream>
#include <cstdlib>

int global_num1 = 1112;
int global_num2 = 1150;
int global_num3 = 1450;

void call_stack(int num)
{
    if (num >= 3)
    {
        return;
    }
    int numnum = num;
    numnum++;
    call_stack(numnum);
}
int main(void)
{
    call_stack(0);
    int *int_pointer_array[3];
    
    for (int i = 0; i < 3; i++)
    {
        int_pointer_array[i] = (int*)malloc(sizeof(int)*3);
    }
}