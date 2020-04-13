#include<stdio.h>
#include<cs50.h>

int main(void)

{
    int height;
    do
    {
        height = get_int("Please enter a number between 1-8. \n");
    }
    while (height < 1 || height > 8);

    for (int row = 0; row < height; row++)
    {
        for (int period = height - 1; period > row; period--)
        {
            printf(".");
        }
        for (int hash = 0; hash <= row; hash++)
        {
            printf("#");
        }
        printf("\n");
    }
    
}
