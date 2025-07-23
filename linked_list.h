#ifndef linked_list_h
#define linked_list_h

#include "Node.h"
#include <stdio.h>
#include <stdbool.h>
#include <stdint.h>
#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

struct linked_list_int;

struct linked_list_int
{
    struct Node_int *head;
    int length;

    void (*insert)(int index, int data, struct linked_list_int *linked_list);
    void (*remove)(int index, struct linked_list_int *linked_list);
    int (*retrieve)(int index, struct linked_list_int *linked_list);
    
};

struct linked_list_int linked_list_constructor();

#endif