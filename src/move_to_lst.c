/*
** EPITECH PROJECT, 2019
** pa
** File description:
** pa
*/

#include "my.h"

void s_pa(infos_t *infos)
{
    node_t *tmp_node = infos->begin2;
    if (infos->begin2 != NULL) {
        infos->begin2 = infos->begin2->next;
        tmp_node->next = infos->begin1;
        infos->begin1 = tmp_node;
    }
    if (infos->space == 1) {
        infos->str[infos->x++] = 'p', infos->str[infos->x++] = 'a';
        infos->space = 0;
    }
    else {
        infos->str[infos->x++] = ' ', infos->str[infos->x++] = 'p';
        infos->str[infos->x++] = 'a';
    }
}

void s_pb(infos_t *infos)
{
    node_t *tmp_node = infos->begin1;
    if (infos->begin1 != NULL) {
        infos->begin1 = infos->begin1->next;
        tmp_node->next = infos->begin2;
        infos->begin2 = tmp_node;
    }
    if (infos->space == 1) {
        infos->str[infos->x++] = 'p', infos->str[infos->x++] = 'b';
        infos->space = 0;
    }
    else {
        infos->str[infos->x++] = ' ', infos->str[infos->x++] = 'p';
        infos->str[infos->x++] = 'b';
    }
}