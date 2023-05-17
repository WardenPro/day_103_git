/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: get_digit.c
*/

int get_digit(int nb,int index)
{
    int power = index;
     if (nb < 0)
         {
             nb = nb * -1;
         } 
    if(index == 0)
        {
            return (nb % 10);
        }

    while(power >1)
        {
            nb = nb / 10;
            power = power -1;
        }
    nb = nb %10;
    return (nb);
}
