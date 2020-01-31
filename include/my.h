/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H
#define MY_H
#include <stdlib.h>
#include <unistd.h>

typedef struct node {
    int data;
    struct node *next;
} node_t;

typedef struct infos {
    int len;
    int space;
    int index;
    int x;
    char *str;
    node_t *begin1;
    node_t *begin2;
    node_t *end1;
    node_t *end2;
} infos_t;

int error(char const *msg);
int my_strlen(char const *str);
int get_int(char *av);
node_t *my_put_in_node(node_t *my_node, char *av);
void fill_nodes(int ac, char **av);
void sort_nodes(infos_t *infos);
int check_order(infos_t *infos);
int get_smallest(infos_t *infos);
void get_end1(infos_t *infos);
void get_end2(infos_t *infos);
void s_sa(infos_t *infos);
void s_sb(infos_t *infos);
void s_pb(infos_t *infos);
void s_pa(infos_t *infos);
void s_sc(infos_t *infos);
void s_rrb(infos_t *infos);
void s_rra(infos_t *infos);
void s_rrr(infos_t *infos);
void s_ra(infos_t *infos);
void s_rb(infos_t *infos);
void s_rr(infos_t *infos);

#endif