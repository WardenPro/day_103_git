/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: roll_2d6.c
*/

#include <unistd.h>
void stu_putchar(char c)
{
    write(1,&c,1);
}

int main(void)
{
    int a = 0;
    int b = 1;
    int c = 1;
    while( b <=6)
        {
            while(c<=6)
                {
                    stu_putchar(b + '0');
                    stu_putchar('-');
                    stu_putchar(c +'0');
                    stu_putchar(32);
                    c = c+1;
                }
            a = a+1;
            b = b+1;
                c = 1 + a;
        }
    stu_putchar('\n');
}
