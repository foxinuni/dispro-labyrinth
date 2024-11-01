#include <stdio.h>

typedef enum { DIR_UP, DIR_DOWN, DIR_LEFT, DIR_RIGHT } direction_t;

typedef enum { CELL_EMPTY, CELL_WALL, CELL_END } cell_t;

typedef struct node {
    cell_t cell;

    union {
        struct {
            struct node* up;
            struct node* down;
            struct node* left;
            struct node* right;
        };

        struct node* directions[4];
    };
} node_t;

int main() {

}