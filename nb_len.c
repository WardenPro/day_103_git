/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: nb_len.c
*/

int nb_len(int nb)
{
    int i = 0;
    if(nb< 0)
        {
            nb = nb * -1;
        }
    while (nb > 0)
        {
            nb = nb / 10;
            i = i +1;
        }
    return i;
}
