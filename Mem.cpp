#include <iostream>
#include <cstdlib>

int global_num1 =1112;
int global_num2 =1450;
int global_num3 =1550;
int test = 0;


void call_stack(int num)
{
    if (num >= 3)
    {
        return;
    }
    int numnum = num;
    std::cout<<"stack"<<num+1<<" : "<<&numnum<<"\n";
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

    

    for (int i = 2; i >= 0; i--)
    {
        std::cout<<"malloc"<<i+1<<" : "<<int_pointer_array[i]<<"\n";
    }

    std::cout<<"global"<<1<<" : "<<&global_num1<<"\n";
    std::cout<<"global"<<2<<" : "<<&global_num2<<"\n";
    std::cout<<"global"<<3<<" : "<<&global_num3<<"\n";
        
}