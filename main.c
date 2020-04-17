/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    int heigth;
    int width;
    FILE *fichier = NULL;

    fichier = fopen("map.txt", "w");
    if (ac != 3)
        return (84);
    else {
        heigth = my_getnbr(av[1]);
        width = my_getnbr(av[2]);
        rush4(heigth, width, fichier);
    }


}