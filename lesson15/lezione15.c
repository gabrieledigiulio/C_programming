#include <stdio.h>
#include <stdlib.h>

/*
Binary tree

every node register his value and in the left we got value with a minor value and on the right with major value
*/

struct node {
    int val;
    struct node *left, *right;
};

/*
* Add a new node if root is NULL returns the new root 
* (the first inserted node) otehrwise it just returns
* the root passed by the user in input
* 
*/
struct node *add(struct node *root, int val) {
    struct node *saved_root = root;
    struct node *new = malloc(sizeof(*new)); //We dont check for malloc() failures this is a trivial exemple
    new->left = new->right= NULL;
    new->val = val;

    if(root == NULL) return new;

    while(1) {
        if (val > root->val) {
            if(root->right == NULL) {
                root->right = new;
                return saved_root;
            }
            root = root->right;
        }else{
            if (root->left == NULL) {
                root->left = new;
                return saved_root;
            }
            root = root->left;
        }
    }

};

void print_sorted(struct node *root) {
    if (root == NULL) return;
    print_sorted(root->left);
    printf("%d\n", root->val);
    print_sorted(root->right);
}

int main(void) {
    struct node *root = NULL;
    root = add(root, 10);
    root = add(root, 5);
    root = add(root, 20);
    root = add(root, 100);
    root = add(root, 40);
    root = add(root, 33);
    print_sorted(root);
    return 0;
}