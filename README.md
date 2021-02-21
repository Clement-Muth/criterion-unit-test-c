# criterion_unit_test_c
Some example of criterion unit tests

# Summary

- Installation
- Example
	- Rules for Makefile
	- Some example of unit test with criterion

# Installation

Use this [file](https://github.com/Clement-Muth/criterion_unit_test_c/blob/master/install_criterion.sh) to install criterion

```bash
chmod 777 install_criterion.sh
./install_criterion.sh
```

# Example

## Rules for Makefile

```Make
tests_run:
	gcc $(SRCS) tests/*.c -o unit_tests --coverage -lcriterion -Iincludes/
	- ./unit_tests
```

## Some example of unit test with criterion

[Unit test](https://github.com/Clement-Muth/criterion_unit_test_c/blob/master/test_output.c) which test output of a program

```c
#include <criterion/criterion.h>
#include <criterion/redirect.h>

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
```

[Unit test](https://github.com/Clement-Muth/criterion_unit_test_c/blob/master/test_string_compare.c) which test string output of a function

```c
#include <criterion/criterion.h>

Test(test_string_compare, test_string)
{
    char test[] = "test string";

    cr_assert_str_eq(test, "test string");
}
```
