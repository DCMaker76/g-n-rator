/*
** EPITECH PROJECT, 2019
** generator
** File description:
** generator dante
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "my.h"

void test1line4(int x)
{
    for (int u = 0; u != x; u++)
            write(1, "-", 1);
    write(1, "\n", 1);
}

void test2line4(int x, int i)
{
    for (int u = 0; u != x; u++) {
        if (u == 0 || u == x - 1)
            write(1, "-", 1);
        if (u > 0 && u < x - 1) {
            if (i % 5 == 0 && u % 10 == 0) {
                if (i % 10 == 0 && u % 10 == 0)
                    write(1, "-", 1);
                else
                    write(1, "2", 1);
            } else if (i % 10 == 0 && u % 5 == 0)
                write(1, "2", 1);
            else if (i % 10 == 0 || u % 10 == 0)
                write(1, "-", 1);
            else
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}

void testx4(int x, int y)
{
    int i = 0;

    while (i != y) {
        if (i == 0 || i == (y - 1)) {
            test1line4(x);
            i++;
        } else {
            test2line4(x, i);
            i++;
        }
    }
}

void rush4(int x, int y)
{
    if (x <= 1 || y <= 1) {
        write(2, "Invalid size\n", 13);
    }
    testx4(x, y);
}
