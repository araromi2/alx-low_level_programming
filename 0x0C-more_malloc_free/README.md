# C - More malloc, free

## Learning Objectives
- How to use the `exit` function
- What are the functions `calloc` and `realloc` from the standard library and
how to use them.
## Contents and Description
| File                 | Description                                                      | Link                                                                                                                           |
|----------------------|------------------------------------------------------------------|--------------------------------------------------------------------------------------------------------------------------------|
| `0-malloc_checked.c` | A function that allocates memory using malloc.                   | [malloc checked](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0C-more_malloc_free/0-malloc_checked.c)   |
| `1-string_nconcat.c` | A function that concatenates two strings.                        | [concat n strings](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0C-more_malloc_free/1-string_nconcat.c) |
| `2-calloc.c`         | A function that allocates memory for an array, using malloc.     | [calloc](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0C-more_malloc_free/2-calloc.c)                   |
| `3-array_range.c`    | A function that creates an array of integers.                   |[arrayrange](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0C-more_malloc_   free/3-array_range.c)         |
| `100-realloc.c`      | A function that reallocates a memory block using malloc and free | [realloc](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0C-more_malloc_free/100-realloc.c)               |
| `101-mul.c`          | A program that multiplies two positive numbers.                  | [mul](https://github.com/araromi2/alx-low_level_programming/blob/master/0x0C-more_malloc_free/101-mul.c)                       |
| `main.h`             | Header file containing all the functions                         | [header file](https://github.com/araromi2/alx-low_lvel_progrmming/blob/master/0x0Cea-more_malloc_free/main.h)                  |
## Challenges
I was trying to free an heap space created by malloc, however, I have been
moving a little bit up leaving some part of the array out of what I can free.
Using pointer addition but changing the entire pointer was the problem. Using
`s++` was changing where the pointer was pointing to. Trying to free it later
causes `free()` error. I later figured it out after some days. Valgrind was a
lot helpful. I had to save (s+1) in another created pointer afterall. 
## Comment
All working as expected. It was all fun
