#!/bin/bash

gcc -g -fPIC -Werror -Wextra -pedantic -Wall *.c -shared -o liball.so
