#include <stdio.h>
#include <stdlib.h>

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
    printf("  stack%d : %p\n",num+1,&numnum);
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
        printf(" malloc%d : %p\n",i+1,int_pointer_array[i]);
        free(int_pointer_array[i]);
    }

    printf(" global1 : %p\n",&global_num1);
    printf(" global2 : %p\n",&global_num2);
    printf(" global3 : %p\n",&global_num3);
   
}