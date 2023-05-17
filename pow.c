/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: pow.c
*/

int stu_pow(int nb, int power)
{
    int nb_useless = nb;
    while(power >1)
        {
            nb_useless = nb * nb_useless;
            power = power -1;
        }
        return(nb_useless);
}
