#include <stdio.h>
#include <stdlib.h>

typedef struct mylist
{
    int data;
    struct mylist *next;
} node;

int main()
{
    node *first=(node*)malloc(sizeof(node));
    node *second=(node*)malloc(sizeof(node));
    node *third=(node*)malloc(sizeof(node));
    node *fourth=(node*)malloc(sizeof(node));

    first->data=12;
    second->data=9;
    third->data=7;
    fourth->data=3;

    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=NULL;

    return 0;
}
