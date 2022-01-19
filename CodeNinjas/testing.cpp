#include <iostream>
struct someNode {
    int data;
    struct someNode* next;
   };
#define node struct someNode
node* head = NULL;
void insAtBegin(int val) {
    someNode* newNode = (someNode*) malloc(sizeof(someNode)); 
    newNode -> data = val;
        if (head==NULL) 
            newNode -> next = NULL;       
        else {
            newNode -> next = head;
            head = newNode;
        }    
    std::cout<<"Inserted" << val << "at begining"<<std::endl;
}
int main() {

    int a=1; 
    while(a!=0) {
    std::cout<<"Enter the value:"<<std::endl;
    std::cin>>a;
    insAtBegin(a);
    }
   // display();
} 

