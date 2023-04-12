#include<stdio.h>
#include<stdlib.h>


struct node{
	int data;
	struct node *next;
}*head;




void createList(int n);
void displayList(struct node* head);


int main(){

	int n;
	printf("\n \n  CREATE A LINKEDLIST AND DISPLAY THE LIST \n ");
	printf(" Enter the number of Element you wish in the List:");
	scanf("%d",&n);

	createList(n);

	printf("\n The created list contain the following Data \n");

	displayList(head);

	return 0;

}

void createList(int n){
	struct node *fnNode,*tmp;
	int value,i;
    head = (struct node *)malloc(sizeof(struct node));
	if(head == NULL){
		printf("\n Memory can not be allocated !!");
	}else{
		printf("\n Enter The value for the 1 Node :");
		scanf("%d",&value);
		head->data = value;
		head->next = NULL;
		tmp = head;

		for(i = 2;i <= n; i++){

			fnNode = (struct node *)malloc(sizeof(struct node));

			if(fnNode == NULL){
				printf("\n The Second memory can not be allocated \n");
			}else{
				printf("\n Enter the Value for the %d Node :",i);
				scanf("%d",&value);

				fnNode->data = value;
				fnNode->next = NULL;
				tmp->next = fnNode;
				tmp = tmp->next;
			}
		}
	}
}


void displayList(struct node *head){
	if(head == NULL){
		printf("\n Memory can not be allocated !!!");
	}else{
		while(head!= NULL){
			printf("Data = %d \n",head->data);
			head = head->next;
		}
	}
}
