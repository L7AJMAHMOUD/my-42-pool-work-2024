//#include <unistd.h>
// int main(int ac,char **av)
// {
//     int i = 0;
//     if(ac == 2)
//     {
//         while(av[1][i])
//         {
//             i++;
//         }
//         while(i >= 0)
//         {
//             write(1,&av[1][i],1);
//             i--;
//         }
//     }
//     write(1,"\n",1);
//     return(0);
// }
#include <unistd.h>

void rev_print(char *str);

int main(int ac, char **av) 
{
    if (ac == 2) 
    {
        int i = 0;

        
        while (av[1][i]) 
        {
            i++;
        }
        while (i > 0) 
        {
            write(1, &av[1][--i], 1);
        }
    }
    write(1, "\n", 1);
    return 0;
}
