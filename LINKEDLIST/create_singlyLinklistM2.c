#include<stdio.h>
#include<stdlib.h>

//METHOD 2 OF CREATING SINGLY LINKED LIST

struct node
{
    int st_id;
    struct node *link;
};

void print_data(struct node *head);
void count_of_node(struct node *head);
void add_at_end(struct node *head,int st_id);

int main(){
    // FIRST NODE
    struct node *head = NULL;
    head = (struct node *)malloc(sizeof(struct node));
    head->st_id = 25337;
    head->link = NULL;

    //SECOND NODE
    struct node *current = NULL;
    current = (struct node *)malloc(sizeof(struct node));
    current->st_id=25339;
    current->link = NULL;
    head->link = current;

    // CREATING THE THIRD NODE
    current = (struct node *)malloc(sizeof(struct node));
    current->st_id=25342;
    current->link = NULL;

    head->link->link=current;

    // OUTPUT NODE 

    count_of_node(head);
    printf("\n");
    printf("Before we have :\n");
    print_data(head);
    printf("\n");
    printf("After we have :\n");
    add_at_end(head,25345);
    count_of_node(head);
    print_data(head);
   


}

//TRAVESING A LINKED LIST 

void count_of_node(struct node *head){
    int count = 0;
    if(head == NULL)
        printf("The list is empty");
    struct node *ptr;
    ptr = head;

    while(ptr!=NULL){
        count++;
        ptr=ptr->link;
    }    
    printf("The Number Node :%d\n",count);
}

// PRINTING LINKED LIST 

void print_data(struct node *head){
    if(head==NULL)
        printf("The list is empty");
    struct node *ptr = NULL;
    ptr = head;
    while(ptr != NULL){
            printf("%d\t",ptr->st_id);
            ptr = ptr->link;
            }
}


//ADD AT THE END OF A LIST 

void add_at_end(struct node *head,int st_id){
    struct node *ptr,*temp;
    ptr = head;
    temp = (struct node *)malloc(sizeof(struct node));

    temp->st_id = st_id;
    temp->link = NULL;

    while(ptr->link!=NULL){
        ptr= ptr->link;
    }
    ptr->link = temp;
}