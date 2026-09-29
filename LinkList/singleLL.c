#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

struct Node  //node structure is ready
{
    int data;
    struct Node *next;
}*first = NULL, *second = NULL, *third = NULL; //global pointer

void create(int A[], int n) 
{
    int i;
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last=first;

    for(i=1; i<n; i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

void create2(int A[], int n) 
{
    int i;
    struct Node *t, *last;
    second = (struct Node *)malloc(sizeof(struct Node));
    second->data = A[0];
    second->next = NULL;
    last=second;

    for(i=1; i<n; i++)
    {
        t=(struct Node*)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}


void Display(struct Node *p)
{
    while(p != NULL)
    {
        printf("%d ", p->data);
        p=p->next;
    }
}

int main() 
{
    int A[] = {3, 5, 7, 10, 15};

    create(A, 5); 
    Display(first);

    return 0;
}

//recursive display of linked list

void RDisplay(struct Node *p)
{
    if(p != NULL)
    {
        // printf("%d ", p->data);
        RDisplay(p->next);
        printf("%d ", p->data);
    }
}

//counting nodes in a linked list
int count(struct Node *p) //iterative count
{
    int l=0;
    while(p)
    {
        l++;
        p=p->next;
    }
    return l;
}

int Rcount(struct Node *p)  //recursive function 
{
    if(p != NULL)
    {
        return Rcount(p->next) + 1;
    }
    else {
        return 0;
    }
}

int sum(struct Node *p){  //iterative sum
    int s=0;
    while(p != NULL){
        s += p->data;
        p = p->next;
    }
    return s;
}
 
int Rsum(struct Node *p) //recursive sum
{
    if(p==NULL){
        return 0;
    } else{
        return Rsum(p->next) + p->data;
    }
}
int main() 
{
    int A[] = {3, 5, 7, 10, 15};

    create(A, 5); 
    // RDisplay(first);
    printf("Length is %d ", Rcount(first));
    printf("Length is %d ", count(first));
    printf("Sum is %d ", sum(first));
    printf("Sum is %d ", Rsum(first));

    return 0;
}


// //Maximum element in a linked list
int Max(struct Node *p)
{
    int max = INT_MIN;
    while(p) {
        if(p->data > max) {
            max=p->data;
        } 
        p=p->next;
    }
    return max; 
}

int Rmax(struct Node *p) {
    int x=0;

    if(p==0){
        return INT_MIN;
    }
    x=Rmax(p->next);
    if(x>p->data){
        return x;
    }else{
        return p->data;
    }
}

int main () {
    int A[] = {3, 5, 7, 9, 10, 151, 17, 91};
    create(A,8);

    printf("max is %d\n", Max(first));
    printf("max is %d\n", Rmax(first));

    return 0;
}

//searching in a linked list
struct Node* LSearch(struct Node *p, int key) { //iterative funx
    while(p != NULL) {
        if(key==p->data){
            return p;
        }
        p=p->next;
    }
    return NULL;
}

struct Node *RSearch(struct Node *p, int key)//recursive version
{
    if(p==NULL) {
        return NULL;
    }
    if(key == p->data){
        return p;
    }
    return RSearch(p->next, key);
}

struct Node* LSearch(struct Node *p, int key) { 
    struct Node *q; 
    while(p != NULL) {
        if(key==p->data){ 
            q->next = p->next;
            p->next = first;
            first=p;
            return p;
        }
        q=p;
        p=p->next;
    }
    return NULL;
}

int main() {
    struct Node * temp;
    int A[] = {3, 5, 7, 9, 10, 151, 17, 91};
    create(A, 8);

    // temp = LSearch(first, 127);
    temp = LSearch(first, 103);

    if(temp){
        printf("key is found %d\n", temp->data);
    } else {
        printf("key not found -+><\n");
    }
    Display(first);
    return 0;
}

//Inserting in a linked list
void Insert(struct Node *p, int index, int x) 
{
    struct Node *t;
    int i;

    if(index < 0 || index > count(p)){
        return;
    }

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if(index == 0) {
        t->next = first;
        first = t;
    }
    else{
        for(i=0; i<index-1; i++) {
            p=p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

int main() {
    int A[] = {3, 5, 7};
    create(A, 3);

    Insert(first, 3 , 10);
    Insert(first, 0 , 20);
    Insert(first, 1 , 30);

    Display(first);
    return 0;
}

// //Inserting in a sorted linked list (-> <-)
void SortedInsert(struct Node *p, int x) {
    struct Node *t, *q=NULL;

    t=(struct Node *)malloc(sizeof(struct Node));
    t->data=x;
    t->next=NULL;

    if(first == NULL) {
        first=t;
    }
    else{
        while(p && p->data < x) {
            q=p;
            p=p->next;
        }
        if(p == first) {
            t->next=first;
            first=t;
        }
        else
        {
            t->next = q->next;
            q->next = t;
        }
    }
}
int main() {
    // int A[] = {10,20,30,40,50};
    // create(A, 5);

    SortedInsert(first, 25);
    SortedInsert(first, 35);
    SortedInsert(first, 5);
    SortedInsert(first, 55);

    Display(first);
    return 0;
}

//Deleting from linked list
int Delete(struct Node *p, int index)
{
    struct Node *q=NULL;
    int x = -1, i;

    if(index < 1 || index > count(p)) {
        return -1;
    }

    if(index == 1) {
        q=first;
        x=first->data;
        first=first->next;
        free (q);
        return x; 
    }
    else
    {
        for(i=0; i<index-1; i++) {
            q=p;
            p=p->next;
        }
        q->next = p->next;
        x = p->data;
        free (p);
        return x;
    }
}
int main() {
    int A[] = {10,20,30,40,50};
    create(A, 5);

    printf("Deleted element is %d  ", Delete(first ,3));

    Display(first);
    return 0;
}

//check if a linked list is sorted
int isSorted(struct Node *p) {
    int x = INT_MIN;
    
    while(p != NULL) {
        if(p->data < x) {
            return 0;
        }
        x = p->data;
        p = p->next;
    }
    return 1;
}

int main() {
    int A[] = {10,20,30,4,50};
    create(A, 5);
    
    if(isSorted(first)) {
        printf("Sorted");
    }
    else{
        printf("Not Sorted");
    }
    // Display(first);
    return 0;
}

//Remove duplicates from sorted linked list
void RemoveDuplicate(struct Node *p) {
    struct Node *q = p->next;

    while(q != NULL) {
        if(p->data != q->data) {
            p=q;
            q=q->next;
        }
        else 
        {
            p->next = q->next;
            free (q);
            q=p->next;
        }
    }
}

int main() {
    int A[] = {10,20,20,30,30,40,50};
    create(A, 7);
    
    RemoveDuplicate(first);

    Display(first);
    return 0;
}

//reversing a linked list
void Reverse1(struct Node *p) {
    int *A, i=0;
    struct Node *q=p;

    A = (int *)malloc(sizeof(int)* count(p));

    while(q != NULL)
    {
        A[i] = q->data;
        q=q->next;
        i++;
    }
    q=p;
    i--;
    while(q != NULL) 
    {
        q->data = A[i];
        q=q->next;
        i--;
    }
}                           

void Reverse2(struct Node *p) {
    struct Node *q=NULL, *r=NULL;
    
    while(p != NULL) {
        r=q;
        q=p;
        p=p->next;
        q->next = r;
    }
    first=q;
}

void Reverse3(struct Node *q, struct Node *p) 
{
    if(p) {
        Reverse3(p,p->next);
        p->next=q;
    }
    else {
        first = q;
    }
}
// int main() {
//     int A[] = {10,20,30,40,50};
//     create(A, 5);
    
//     // Reverse1(first);
//     // Reverse2(first);
//     Reverse3(NULL, first);

//     Display(first);
//     return 0;
// }



/* Concatenate list q to the end of list p. Result head is 'third'. O(m) */
void Concat(struct Node *p, struct Node *q)
{
    if (p == NULL) { third = q; return; }

    third = p;
    while (p->next != NULL)
        p = p->next;
    p->next = q;
}

/* Merge two SORTED lists into one sorted list. Result head is 'third'. O(m+n) */
void Merge(struct Node *p, struct Node *q)
{
    struct Node *last;

    /* Handle empty lists */
    if (p == NULL) { third = q; return; }
    if (q == NULL) { third = p; return; }

    /* Step 1: pick the head of the merged list */
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }

    /* Step 2: while both lists have nodes, append the smaller one */
    while (p && q)
    {
        if (p->data < q->data)
        {
            last->next = p;
            last = p;
            p = p->next;
            last->next = NULL;
        }
        else
        {
            last->next = q;
            last = q;
            q = q->next;
            last->next = NULL;
        }
    }

    /* Step 3: attach whichever list still has nodes */
    if (p != NULL) last->next = p;
    if (q != NULL) last->next = q;
}

/* Free a list */
void FreeList(struct Node *p)
{
    struct Node *t;
    while (p != NULL)
    {
        t = p;
        p = p->next;
        free(t);
    }
}

int main()
{
    int A[] = {10, 20, 30, 40, 50};
    int B[] = {5, 15, 25, 35, 45};

    /* ---- Merge demo ---- */
    create(A, 5);
    create2(B, 5);

    printf("List 1: ");
    Display(first);
    printf("List 2: ");
    Display(second);

    Merge(first, second);

    printf("Merged: ");
    Display(third);
    printf("\n");

    FreeList(third);   /* after Merge, all nodes belong to 'third' */
    first = second = third = NULL;

    /* ---- Concat demo (fresh lists, since Merge consumed the old ones) ---- */
    create(A, 5);
    create2(B, 5);

    Concat(second, first);

    printf("Concatenation: ");
    Display(third);

    FreeList(third);
    return 0;
}