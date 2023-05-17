/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: write_waving_alphabet.c
*/

#include <stdbool.h>
#include <unistd.h>


void stu_putchar(char c)
{
    write(1,&c,1);
}

int main(void)
{
    int i = 0;
    while(i <= 25)
        {
            if(i< 26 &&i % 2 ==0)
                {
                    stu_putchar(97+i - 32);
                    i++;
                }
            else if(i<26 &&i % 2 != 0)
                {
                    stu_putchar(97+i);
                    i++;
                }
        }
    stu_putchar('\n');
}
