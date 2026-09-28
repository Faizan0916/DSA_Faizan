#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int row;
    int col;
    int value;
    struct Node* next;
}*first=NULL;

//crate sparse matirx using linked list
void create(){
    int m,n,num;
    int i;
    struct Node *t, *last;

    printf("Enter number of row and columns : ");
    scanf("%d %d", &m, &n);

    printf("Enter number of non-zero element : ");
    scanf("%D", &num);

    printf("Enter row column value\n");

    for(i=0; i<num; i++) {
        t=(struct Node *)malloc(sizeof(struct Node));

        scanf("%d %d %d", &t->row, &t->col, &t->value);
        t->next=NULL;

        if(first == NULL) {
            first = last = t;
        } 
        else
        {
            last->next=t;
            last=t;
        }
    }
}

//Display linked list
void DisplayList() {
    struct Node *p=first;

    printf("\nSparse matrix\n");
    while(p)
    {
        printf("(%d %d) = %d\n", p->row, p->col, p->value);
        p=p->next;
    }
}

//display originl matrix

void DisplayMatrix(int m, int n) 
{
    struct Node *p= first;
    int i, j;

    printf("\nOriginal Matrix\n");

    for(i=0; i<m; i++) {
        for(j=0; j<n; j++) {
            if(p != NULL && p->row == i && p->col == j)
            {
                printf("%3d",   p->value);
                p=p->next;
            }
            else
            {
                printf("3d", 0);
            }
        }
        printf("\n");
    }
}

int main()
{
    int m, n;
    printf("Enter rows and columns again for display : ");
    scanf("%d %d", &m, &n);

    create();

    DisplayList();

    DisplayMatrix(m, n);

    return 0;
}