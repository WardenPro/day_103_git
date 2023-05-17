/*
 * E89 Pedagogical & Technical Lab
 * project:     forge_to_git/day_103_git/
 * created on:  Wed May 17 19:01:21 2023
 * 1st author:  user
 * description: capitalise.c
*/


char stu_capitalise(char letter)
{
    if(letter >=97 && letter <= 122)
        {
            return (letter -32);
        }
    return letter;
}
