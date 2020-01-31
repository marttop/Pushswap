/*
** EPITECH PROJECT, 2019
** get_end
** File description:
** get end
*/

#include "my.h"

void get_end1(infos_t *infos)
{
    node_t *temp_node = infos->begin1;
    for (; temp_node->next != NULL;)
        temp_node = temp_node->next;
    infos->end1 = temp_node;
}

void get_end2(infos_t *infos)
{
    node_t *temp_node = infos->begin2;
    for (; temp_node->next != NULL;)
        temp_node = temp_node->next;
    infos->end2 = temp_node;
}