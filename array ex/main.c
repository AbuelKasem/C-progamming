#include <stdio.h>
#include <stdlib.h>

int main()
{
    int index,values[10];
    values[0]=197;
    values[2] = -100;
values[5] = 350;
values[6] = 0;
values[3] = values[0] + values[5];
values[9] =
values[5] / 10;
--values[2];
    for ( index = 0; index < 10; ++index )
printf ("values[%i] = %i\n", index, values[index]);
    return 0;
}
