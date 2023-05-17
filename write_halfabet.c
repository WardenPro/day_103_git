/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: write_halfabet.c
*/


#include <unistd.h>
void stu_putchar(char c)
{
    write(1,&c,1);
}


int main(void)
{
    int a = 0;
    while (a <= 25)
        {
            stu_putchar(97 + a);
            
                a = a+2;
    }
    stu_putchar('\n');
}
