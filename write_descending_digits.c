/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: write_descending_digits.c
*/

#include <unistd.h>
void stu_putchar(char c)
{
    write(1,&c,1);
}


int main(void)
{
    int i = 0;
    while(i <10)
        {
            stu_putchar(57 - i);
            
                i++;
        }
    stu_putchar('\n');
}
