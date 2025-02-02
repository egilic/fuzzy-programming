#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct Node {
    int key;
    int value;
    struct Node *prev, *next;
} Node;

typedef struct LRU_Cache {
    int capacity;
    int size;
    Node **hashtable;
    Node *head, *tail;
} LRU_Cache;