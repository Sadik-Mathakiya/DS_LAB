    #include<stdio.h>
    #include<stdlib.h>
    struct Node{
        int info;
        struct Node* next;
    };
    int swapPair(struct Node* head){
        struct Node* current=head;
        struct Node* prev=NULL;
        struct Node* preprev=NULL;
        struct Node* Next=current->next;
        prev=current;
        preprev=prev;
        current=Next;
            Next=current->next;
            prev->next=current->next;
            current->next=preprev->next;
            head=current;
            current=Next->next;
            prev=Next;
            Next=current->next;
            
        while(current->next!=NULL){
            prev=current;
                preprev=prev;

            current=Next;
            Next=current->next;
            prev->next=current->next;
            current->next=preprev->next;
            current=Next->next;
            prev=Next;
            Next=current->next;
        
        }
        prev->next=current->next;
            current->next=preprev->next;
        while(head->next!=NULL){
            printf("element : %d",head->info);
            head=head->next;
        }        printf("element : %d",head->info);


    }
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
        struct Node* n4 = (struct Node*)malloc(sizeof(struct Node));
        struct Node* head = n1;
        n1->info=1;
        n2->info=2;
        n3->info=3;
        n4->info=4;
        n1->next=n2;
        n2->next=n3;
        n3->next=n4;
        n4->next=NULL;
        swapPair(head);
    } 