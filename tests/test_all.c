/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** test_all
*/

#include <criterion/criterion.h>
#include "my.h"

Test(test_error, test1)
{
    int len = my_strlen("TEST");
    int nul = my_strlen(NULL);
    cr_assert_eq(len, 4);
    cr_assert_eq(nul, 0);
}

Test(node_test, test2)
{
    int i;
    node_t *test2 = NULL;
    infos_t s_infos;
    test2 = my_put_in_node(test2, "3"), test2 = my_put_in_node(test2, "-3");
    test2 = my_put_in_node(test2, "500");
    s_infos.len = 3;
    s_infos.begin1 = test2, i = check_order(&s_infos);
    cr_assert_eq(i, 0);
    cr_assert_eq(test2->data, 500);
    cr_assert_eq(test2->next->data, -3);
    cr_assert_eq(test2->next->next->next, NULL);
}

Test(rotate_test, test3)
{
    infos_t s_infos;
    node_t *test = NULL;
    char *str[] = {"1", "17", "-98", "-3"};
    s_infos.str = malloc(40);
    test = my_put_in_node(test, "-3"), test = my_put_in_node(test, "-98");
    test = my_put_in_node(test, "17"), test = my_put_in_node(test, "1");
    s_infos.len = 4, s_infos.x = 0, s_infos.space = 1;
    s_infos.begin2 = NULL;
    s_infos.begin1 = test;
    get_end1(&s_infos);
    sort_nodes(&s_infos);
    cr_assert_str_eq(s_infos.str, "ra ra pb pb pb pb pa pa pa pa");
    fill_nodes(4, str);
}

Test(max_cover, test4)
{
    infos_t s_infos;
    node_t *test = NULL;
    s_infos.str = malloc(40);
    test = my_put_in_node(test, "-3"), test = my_put_in_node(test, "-98");
    test = my_put_in_node(test, "17"), test = my_put_in_node(test, "1");
    s_infos.len = 4, s_infos.x = 0, s_infos.space = 1;
    s_infos.begin2 = NULL;
    s_infos.begin1 = test;
    s_pb(&s_infos), s_pb(&s_infos);
    get_end2(&s_infos), get_end1(&s_infos);
    cr_assert_eq(s_infos.end2->data, 1);
    cr_assert_eq(s_infos.end1->data, -3);
    s_pb(&s_infos), s_ra(&s_infos);
    s_infos.space = 1, s_pa(&s_infos);
}

Test(error_handling_null, test5)
{
    infos_t s_infos;
    int i = 0;
    char *str[] = {"2", "3", "4", "5"};
    node_t *test = NULL;
    s_infos.begin1 = NULL;
    s_infos.begin2 = NULL;
    s_pa(&s_infos), s_pb(&s_infos);
    cr_assert_eq(s_infos.begin1, s_infos.begin2);
    s_infos.str = malloc(40);
    test = my_put_in_node(test, "5"), test = my_put_in_node(test, "4");
    test = my_put_in_node(test, "3"), test = my_put_in_node(test, "2");
    s_infos.len = 4, s_infos.x = 0, s_infos.space = 1, s_infos.begin1 = test;
    i = check_order(&s_infos);
    fill_nodes(s_infos.len, str);
    cr_assert_eq(i, 1);
}