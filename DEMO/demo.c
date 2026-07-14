#include<stdio.h>
#include<stdlib.h>
struct Node{
    int info;
    struct Node* next;
};
int printlist(struct Node* head){
    while(head->next!=NULL){
        printf("element : %d",head->info);
        head=head->next;
    }        printf("element : %d",head->info);

}
void main(){
    struct Node* n2 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n1 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* n3 = (struct Node*)malloc(sizeof(struct Node));
    struct Node* head = n1;
    n1->info=12;
    n2->info=34;
    n3->info=56;
    n1->next=n2;
    n2->next=n3;
    n3->next=NULL;
    printlist(head);
} 