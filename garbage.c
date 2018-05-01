/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void unsorted(int *unsorted, int size );

int main()
{
    int *vasya = malloc(sizeof vasya[0] * 10);

    srand(time(NULL));
    
    int d,s = 10;
    
    for(int i = 0; i < s; i++)
    {
        d = rand();
        vasya[i] = d;
    }
    
    unsorted(vasya, s);
    
    for(int i = 0; i < s; i++)
    {
        printf("%d\n", vasya[i]);
    }
    
    return 0;
}

void unsorted(int *d, int size)
{
    int temp;
    
    for(int i = 1; i < size; i++)
    {
        if(d[i-1] > d[i])
        {
            temp = d[i-1];
            d[i-1] = d[i];
            d[i] = temp;
        }
    }
}
