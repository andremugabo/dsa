#include<stdio.h>
#include<stdlib.h>

// Create note

struct node{
    int st_id;
    struct node *link;
};

void count_of_node();




int main(){
    struct node *head= NULL;
    head = (struct node*)malloc(sizeof(struct node));
    head->st_id = 25337;
    head->link = NULL;

    struct node *current=NULL;
    current=(struct node *)malloc(sizeof(struct node)) ;
    current->st_id = 25339;
    current->link = NULL;
    head->link = current;

    current = (struct node *)malloc(sizeof(struct node));
    current->st_id = 25340;
    current->link = NULL;

    head->link->link = current;


    // OUT PUT THE NUMBER OF NODES

    count_of_node(head);
}

// COUNTING NODES IN A LINK LINKED LIST
void count_of_node(struct node *head){
    int count = 0;
    if(head==NULL)
        printf("The list is empty");
    struct node *ptr=NULL;
    ptr = head;
    while(ptr!=NULL){
        count++;
        ptr=ptr->link; 
           }    
    printf("The number of nodes is: %d",count);
}