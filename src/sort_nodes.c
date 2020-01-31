/*
** EPITECH PROJECT, 2019
** sort_nodes
** File description:
** sort_nodes
*/

#include "my.h"

int get_smallest(infos_t *infos)
{
    long smallest = 21474836470;
    node_t *temp_node = infos->begin1;
    for (; temp_node != NULL;) {
        if (temp_node->data < smallest)
            smallest = temp_node->data;
        temp_node = temp_node->next;
    }
    return (smallest);
}

void write_all(infos_t *infos)
{
    infos->str[infos->x] = '\0';
    write(1, infos->str, infos->x);
    free(infos->str);
    infos->x = 0;
    infos->str = malloc(100000000);
}

void write_end(infos_t *infos)
{
    infos->str[infos->x] = '\0';
    write(1, infos->str, infos->x);
}

void sort_nodes(infos_t *infos)
{
    int i = infos->len, smallest;
    for (; i > 0; i--) {
        smallest = get_smallest(infos);
        while (infos->begin1->data != smallest) {
            s_ra(infos);
            if (infos->x > 95000000) {
                write_all(infos);
            }
        }
        s_pb(infos);
    }
    for (; i < infos->len; i++) {
        s_pa(infos);
        if (infos->x > 95000000) {
            write_all(infos);
        }
    }
    write_end(infos);
}