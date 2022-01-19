#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
struct someNode {
    int data;
    struct someNode* next;
   };
typedef struct someNode node;
node* head = NULL;
void insAtBegin(int val) {
    node* newNode = (node*) malloc(sizeof(node)); 
    newNode -> data = val;
        if (head==NULL) {
            newNode -> next = NULL; 
            head = newNode;      
        }
        else {
            newNode -> next = head;
            head = newNode;
        }    
    printf("Inserted %d at begining\n", val);
}
void insAtpos(int pos, int val) {
    printf("here");
    int count;
    node* newNode = (node*) malloc(sizeof(node));
    newNode -> data = val;
    node* current = head;
    count = 0;
    if (pos==0) {
        newNode -> next = head;
        head = newNode;
        return;
        }
    while (current != NULL) {
            if (count==pos-1) {
                newNode -> next = current -> next;
                current -> next = newNode;
                printf("value %d: \n", current -> data);
                printf("here2");
                return;
            } 
            current = current -> next; 
            count++;
    }
 }
void display() {
    node* current = head;
    int i=0;
    while (current != NULL) {
        printf("value %d: %d \n", i++, current -> data);
        current = current -> next;
    }
}
int main() {
    
    int a, p, ch;
    //clrscr();
    while(1) {
    printf("Enter the value:\n");
    scanf("%d %d %d",&a, &p, &ch);
    insAtBegin(a);
        if (ch==1) {
        insAtpos(p, a);
        display();
        }
    } 
    return 0;      
}

