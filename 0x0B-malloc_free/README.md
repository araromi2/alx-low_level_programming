# C - malloc, free

## Learning Objectives
- WHat is the difference between automatic and dynamic allocation
- What is `malloc` and `free` and how to use them
- Why and when to use `malloc`
- How to use `valgrind` to check for memory leak
## Contents and Description
| File               | Description                                                                                                                       | Link                                                                                                                    |
|--------------------|-----------------------------------------------------------------------------------------------------------------------------------|-----------------------------------------------------------------------------------------------------------------|
| `0create_array.c` | A function that c---------reates an array of chars, and initializes it with a specific char.                                               | [Create Array](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0B-malloc_free/0-create_array.c)     |
| `1-strdup.c`       | A function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter. | [strdup](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0B-malloc_free/1-strdup.c)                 |
| `2-str_concat.c`   | A function that concatenates two strings.                                                                                         | [String concatenate](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0B-malloc_free/2-str_concat.c) |
| `3-alloc_grid`     | A function that returns a pointer to a 2 dimensional array of integers.                                                           | [Alloc grid](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0B-malloc_free/3-alloc_grid.c)         |
| `4-free_grid.c`    | A function that frees a 2 dimensional grid previously created by the `alloc_grid` function.                                       | [Free grid](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0B-malloc_free/4-free_grid.c)           |
| `100-argstostr.c`  | A function that concatenates all the arguments of your program.                                                                   | [Args to string](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0B-malloc_free/100-argstostr.c)    |
| `101-strtow.c`     | A function that splits a string into words.                                                                                       | [strtow](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0B-malloc_free/101-strtow.c)               |
| `main.h`           | Header file for all the functions in this file.                                                                                   | [Header file](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0B-malloc_free/main.h)                |
## Challenges
I had a challenge understanding the last project `101-strtow.c`. When I later
understand it and was able to write the code, it wasn't displaying the correct
result. Spending hours checking the code, I was able to figure out it was a
precedence problem. That is the fun of programming after all!
## Comment
All code working as expected.
