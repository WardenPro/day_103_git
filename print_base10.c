/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: print_base10.c
*/

#include <unistd.h>
#include <stdio.h>
void stu_putchar(char c)
{
    write(1,&c,1);
}

int nb_len(int nb)
{
    int i = 0;
    if(nb < 0)
        {
            nb = nb * -1;
            return(1);
        }
    else if (nb == 0)
        {
            return(i + 1);
        }
    while (nb > 0)
        {
            nb = nb / 10;
            i = i +1;
        }
    return i;
}

int get_digit(int nb, int index)
{
    int power = index;
    if (nb < 0)
        {
            nb = nb * -1;
        }
    if (index == 0)
        {
            return (nb);
        }
    while(power > 1)
        {
            nb= nb /10;
            power = power -1;
        }
    nb = nb % 10;
    return(nb);
}
int print_base10(int nb)
{
    int a = nb_len(nb) -1 ;
    int nmb = nb;
    if(nb >= 0)
        {
            while(a >= 0)
        {
            nb = get_digit(nb, a);
                stu_putchar('0' + nb);
                nb = nmb;
                a = a-1;
                 }
        }
    else if(nb < 0)
        {
            stu_putchar('-');
            nb = nb * -1;
            while(a >=0)
                {
                    nb = get_digit(nb,a);
                    stu_putchar('0'+nb);
                    nb = nmb;
                    a = a - 1;
                }
        }
    stu_putchar('\n');
    return(nb_len(nb));
}
