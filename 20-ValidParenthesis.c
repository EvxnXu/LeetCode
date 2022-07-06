#include <stdbool.h>
#include <stdlib.h>

typedef struct node Node;
struct node{
    char value;
    Node* next;
    Node* prev;
};

//stack (FIFO)


bool isValid(char * s){
    int n = 0;
    Node* current = NULL;
    while(s[n] != '\0')
    {
        Node* temp = malloc(sizeof(Node));
        temp->prev = current;
        temp->value = s[n];
        temp->next = NULL;
    }
}