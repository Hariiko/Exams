#include <stdio.h>
#include <unistd.h>

int main(int argv, char **argc)
{
    int i;
        i = 0;
    if(argv == 2)
    {
        while(argc[1][i] == 32 || argc[1][i] == 9)
            i++;
        while((argc[1][i] != 32 && argc[1][i] != 9) && argc[1][i])
        {
            write(1,&argc[1][i],1);
            i++;
        }
        write(1,"\n",1);
    }
    else
        write(1, "Error", 6);
    return 0;
}