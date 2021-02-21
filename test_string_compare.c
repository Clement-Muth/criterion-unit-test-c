/*
** EPITECH PROJECT, 2021
** B-PSU-400-STG-4-1-malloc-clement.muth [WSL: Ubuntu]
** File description:
** test
*/

#include <criterion/criterion.h>
#include "../includes/my_malloc.h"

Test(test_string_compare, test_string)
{
    char test[] = "test string";

    cr_assert_str_eq(test, "test string");
}