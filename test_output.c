/*
** EPITECH PROJECT, 2021
** B-PSU-400-STG-4-1-malloc-clement.muth [WSL: Ubuntu]
** File description:
** test
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include "../includes/my_malloc.h"

static void redirect_all_stdout(void)
{
    cr_redirect_stdout();
    cr_redirect_stderr();
}

Test(test_output, test_output_string, .init=redirect_all_stdout)
{
    write(1, "test output\n", 13);
    cr_assert_stdout_eq_str("test output\n");
}