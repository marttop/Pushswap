/*
** EPITECH PROJECT, 2019
** main
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    if (ac != 1) {
        av++;
        fill_nodes(ac, av);
    }
    else {
        error("Few arguments");
    }
    return (0);
}