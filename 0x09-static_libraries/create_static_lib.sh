#!/bin/bash
gcc -c *.c
ar -rcs liball.a *.o #option s replaced ranlib
