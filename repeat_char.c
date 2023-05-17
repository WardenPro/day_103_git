/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: repeat_char.c
*/

#include <unistd.h>
void stu_putchar(char c)
{
    write(1,&c,1);
}
void stu_repeat_char(char c, int n)
{
    while (n >0)
        {
            stu_putchar(c);
            n = n-1;
        }
    stu_putchar('\n');
}
