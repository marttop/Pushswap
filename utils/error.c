/*
** EPITECH PROJECT, 2019
** error
** File description:
** error function
*/

#include "my.h"

int my_strlen(char const *str)
{
    int i = 0;
    if (!str)
        return (0);
    for (; *str++; i++);
    return (i);
}

int error(char const *msg)
{
    int len_msg = my_strlen(msg);
    write(2, msg, len_msg);
    return (84);
}