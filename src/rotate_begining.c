/*
** EPITECH PROJECT, 2019
** rr
** File description:
** rr
*/

#include "my.h"

void s_ra(infos_t *infos)
{
    node_t *temp_node;
    if (infos->begin1 != NULL && infos->begin1->next != NULL) {
        temp_node = infos->begin1->next;
        infos->begin1->next = infos->end1->next;
        infos->end1->next = infos->begin1;
        infos->end1 = infos->begin1;
        infos->begin1 = temp_node;
    }
    if (infos->space == 1) {
        infos->str[infos->x++] = 'r', infos->str[infos->x++] = 'a';
        infos->space = 0;
    }
    else {
        infos->str[infos->x++] = ' ', infos->str[infos->x++] = 'r';
        infos->str[infos->x++] = 'a';
    }
}