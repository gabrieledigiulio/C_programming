#include <stdio.h>
#include <stdlib.h>

/*
Binary tree

every node register his value and in the left we got value with a minor value and on the right with major value
*/

struct node {
    int val;
    struct node *left, *right;
}

/*
* Add a new node if root is NULL returns the new root 
* (the first inserted node) otehrwise it just returns
* the root passed by the user in input
* 
*/
struct node *add(struct node *root, int val) {
    struct node *new = malloc(sizeof(*new)); //

}

int main(void) {
    struct node *root = NULL;
    root = add(root, 10);
    return 0;
}