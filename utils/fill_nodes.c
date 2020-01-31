/*
** EPITECH PROJECT, 2019
** fill_nodes
** File description:
** fille nodes
*/

#include "my.h"

int check_order(infos_t *infos)
{
    int compare;
    node_t *temp_node = infos->begin1;
    int index = 0;
    while (temp_node->next != NULL) {
        compare = temp_node->data;
        if (compare < temp_node->next->data) {
            index++;
        }
        temp_node = temp_node->next;
    }
    if (index != infos->len - 1)
        return (0);
    return (1);
}

node_t *my_put_in_node(node_t *my_node, char *av)
{
    node_t *next_node;

    next_node = malloc(sizeof(node_t));
    next_node->data = get_int(av);
    next_node->next = my_node;
    return (next_node);
}

void fill_nodes(int ac, char **av)
{
    node_t *node1 = NULL;
    node_t *node2 = NULL;
    infos_t infos;
    int i = ac - 2;
    infos.str = malloc(100000000);
    infos.len = ac - 1, infos.space = 1, infos.x = 0;
    for (; i >= 0; i--) {
        node1 = my_put_in_node(node1, av[i]);
    }
    infos.begin1 = node1, infos.begin2 = node2;
    get_end1(&infos);
    if (!check_order(&infos)) {
        sort_nodes(&infos);
        write(1, "\n", 1);
    }
    else
        write(1, "\n", 1);
    free(infos.str);
}