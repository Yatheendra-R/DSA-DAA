#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next_ptr;
};

int main() {
    struct node *ptr = (struct node*)malloc(sizeof(struct node));
    struct node *head = NULL;
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    head = ptr;
    printf("Enter a number: ");
    scanf("%d", &ptr->data);

    ptr->next_ptr = NULL;

     struct node *prvnode =ptr;

    for(int i=0;i<3;i++)
    {
        struct node *ptr1 = (struct node*)malloc(sizeof(struct node));
        printf("Enter a number: ");
        scanf("%d", &ptr1->data);  // Use & because scanf needs address

        prvnode->next_ptr=ptr1;
        prvnode=ptr1;

        ptr1->next_ptr = NULL;


    }
     struct node *runptr =NULL;
     runptr=head;

    while(runptr!=NULL)
    {
        printf("%d\n",runptr->data);
        runptr=runptr->next_ptr;
    }


    free(ptr);// Free memory after use
    return 0;
}
