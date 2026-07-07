#include <stdio.h>
#include <stdlib.h>
struct Node * First = NULL;

struct Node{
    int info;
    struct Node * link;
};
int inserlast(int x){
    struct Node * newnode = (struct Node *)malloc(sizeof(struct Node)); 
    struct Node * save;
    save = First;
    save ->info = x;
    save ->link = NULL;

    while(save->link != NULL){
        save = save ->link;
        save ->link;
    }
    
}
void copy(){
    //code baki chhe from here

}