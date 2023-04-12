#include <stdio.h>
#include <stdlib.h>

// Creating a Node

struct node{
    int st_id;
    struct node *link;
};

int main(){

    // CREAT THE FIRST NODE
    struct node *head = NULL;// this is a head which will point to first node
    head = (struct node *) malloc(sizeof(struct node)); 
    head->st_id = 25337;
    head->link=NULL;

    // CREATE THE SECOND NODE

    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->st_id = 25339;
    current->link = NULL;
    head->link = current;

    // CREATE THE THIRD NODE

    struct node *current1 = NULL;
    current1 = (struct node *)malloc(sizeof(struct node));
    current1->st_id = 25345;
    current->link = current1;
    current1->link = NULL; 


    printf("The student ID is: %d\n",head->st_id);
    printf("The node link is: %d",head->link);




    return 0;
}
