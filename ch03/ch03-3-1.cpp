#include <stdio.h>

int main()
{
    int i, sale[4] = { 157, 209, 251, 312 };

    for (i = 0; i < 4; i++)
    {
        printf("\n address : %u sale [%d]", &sale[i], i, sale[i]);
    }
}