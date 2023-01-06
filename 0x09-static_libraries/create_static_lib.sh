#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c
ar -rc liball.a *.o
ranlib liball.a
