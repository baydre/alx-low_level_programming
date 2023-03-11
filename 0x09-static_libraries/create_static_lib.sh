#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar rc libmy.a *.o
