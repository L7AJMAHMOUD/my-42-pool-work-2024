#include <unistd.h>
int main(int ac,char **av)
{
    int i = 0;
        while(av[1][i])
        {
            while(av[1][i] == 32 || av[1][i] == '\t')
            {
                i++;
            }
            while(av[1][i] && av[1][i] != 32 && av[1][i] != '\t')
            {
                write(1,&av[1][i],1);
                i++;
            }
        if(av[1][i])
        {
            write(1,"   ",3);
        }
        }
        write(1,"\n",1);
}