#include<stdio.h>
#include<stdlib.h>
// int main() { 

// int A[5] = {2, 4 ,5 ,6, 7};
// for(int i=0; i<5; i++) {
//     printf("%d ", A[i]);
// }
//     printf("%d ", A[2]); //2[A] or *(A + 2)
// }

//stack and heap memory 
// int main() {
//     int A[5] = {2, 4, 6, 8, 10};
//     int *p;
//     int i;

//     p = (int *)malloc(5*(sizeof(int))); 
//     p[0]=3;
//     p[1]=4;
//     p[2]=5;
//     p[3]=6;
//     p[4]=7;

//     for(int i=0; i<5; i++) {
//         printf("%d ", A[i]);
//     }
//     printf("\n");

//     for(int i=0; i<5; i++) {
//         printf("%d ", p[i]);
//     }
//     return 0;
// }

//how to increase array size

// int main() {
//     int *p = (int *)malloc(5*(sizeof(int)));
//     //initialize p
//     for(int i=0; i<5; i++) {
//         p[i] = i+1;
//     }

//     int *q = (int *)malloc(10*(sizeof(int)));
//     //copy values
//     for(int i=0; i<5; i++) {
//         q[i]=p[i];
//     }
//     free(p);    
//     p=q;
//     q=NULL;

//     for(int i=0; i<5; i++) {
//         printf("%d  ", p[i]);
//     }
//     free(p);
//     return 0;   

//     // delete [] p;
// }

// int main() {
//     int *p, *q;
//     int i;

//     p = (int *)malloc(5*(sizeof(int)));
//     p[0]=3,p[1]=5,p[2]=7,p[3]=9,p[4]=11;
    
//     q = (int*)malloc(10*(sizeof(int)));
//     for(int i=0; i<5; i++) {
//         q[i] = p[i];
//     }
//     free(p);
//     p=q;
//     q=NULL;

//     for(int i=0; i<5; i++) {
//         printf("%d \n", p[i]);
//     }
//     return 0;
// }

// int main() {
//     int A[3][4] = {{1,2,3,4}, {2,4,6,8}, {2,5,7,9}};

//     int *B[3];
//     int **C;
//     int i,j;

//     for(int i=0; i<3; i++) {
//         for(int j=0; j<4; j++) {
//             printf("%d ", A[i][j]);
//         }
//         printf("\n");
//     }

//     B[0]=(int *)malloc(4*sizeof(int));
//     B[1]=(int *)malloc(4*sizeof(int));
//     B[2]=(int *)malloc(4*sizeof(int));

//     for(int i=0; i<3; i++) { //give garbage values
//         for(int j=0; j<4; j++) {
//             printf("%d ", B[i][j]);
//         }n  
//         printf("\n");
//     }

//     C = (int **)malloc(4*sizeof(int *));
//     C[0]=(int *)malloc(4*sizeof(int));
//     C[1]=(int *)malloc(4*sizeof(int));
//     C[2]=(int *)malloc(4*sizeof(int));

//     for(int i=0; i<3; i++) { //garbge values
//         for(int j=0; j<4; j++) {
//             printf("%d ", C[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
// }

//Array ADT
// struct Array
// {
//     int *A;
//     int size;
//     int length;
// };
// void Display(struct Array arr) {
//     int i;
//     printf("\nElements are\n");
//     for(i=0; i<arr.length; i++) {
//         printf("%d ", arr.A[i]);
//     }
// }
// int main() {
//     struct Array arr;
//     int n, i;
//     printf("Enter size of an array : ");
//     scanf("%d", &arr.size);

//     arr.A = (int *)malloc(arr.size*sizeof(int));
//     arr.length=0;

//     printf("Enter number of numbers : ");
//     scanf("%d", &n);

//     printf("Enter all element\n");
//     for(int i=0; i<n; i++) {
//         scanf("%d", &arr.A[i]);
//     }
//     arr.length=n;

//     Display(arr);
//     return 0;
// }

struct Array{
    int A[10]; 
    int size;
    int length;
};
void display(struct Array arr) {
    int i;
    printf("\nElement are \n");
    for(int i=0; i<arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}

void Append(struct Array *arr, int x) {
    if(arr->length < arr->size) { 
        arr->A[arr->length++]=x;
    }
}

void Insert(struct Array *arr, int index, int x) {
    int i;
    if(index >= 0 && index<= arr->length) {
        for(i=arr->length; i>index; i--) {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

// int main() { 
//     struct Array arr = {{2,3,4,5,6}, 10,5};

//     Insert(&arr, 3, 10);
//     // Append(&arr ,10);
//     display(arr);
//     return 0;
// }

// delete an element
int delete(struct Array *arr, int index) {
    int x = 0;
    int i;
    
    if(index >=0 && index < arr->length) {
        x=arr->A[index];
        for(i=index; i<arr->length-1; i++) {
            arr->A[i] = arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

// int main() { 
//     struct Array arr = {{2,3,4,5,6}, 10,5};

//     printf("%d\n", delete(&arr, 4));
//     display(arr);
//     return 0;
// }

// //Linear search 
void swap(int *x, int *y) {
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
int LinearSearch(struct Array *arr, int key) {
    int i;
    for(i=0; i<arr->length; i++) {
        if(key==arr->A[i]) { 
            swap(&arr->A[i], &arr->A[0]); //move to front
            return i;
        }
    }
    return -1;
}

// int main() {
//     struct Array arr = {{2,3,4,5,6}, 10,5};

//     printf("%d\n", LinearSearch(&arr, 5));
//     display(arr);
//     return 0;
// }


// //Binary search 
// int BinarySearch(struct Array arr, int key) {
//     int l,mid, h;
//     l=0;
//     h=arr.length-1;

//     while(l <= h) {
//         mid=(l+h)/2;
//         if(key == arr.A[mid]) {
//             return mid;
//         }
//         else if(key < arr.A[mid]) {
//             h=mid-1;
//         }
//         else {
//             l=mid+1;
//         }
//     }
//     return -1;
// }

// int RBinSearch(int a[], int l, int h, int key) {
//     int mid;
//     if(l <= h) {

//         mid = (l+h)/2;
//         if(key == a[mid]) {
//             return mid;
//         }
//         else if(key < a[mid]) {
//             return RBinSearch(a, l, mid-1,  key);
//         }
//         else {
//             return RBinSearch(a, mid+1, h , key);
//         }
//     }
//     return -1;
// }

// int main() {
//     struct Array arr = {{2,3,4,5,6},10, 5};
//     // printf("%d\n", BinarySearch(arr, 5));
//     printf("%d\n", RBinSearch(arr.A, 0, arr.length, 3));

//     display(arr);
//     return 0;
// }

//Get, Set ->
// int Get(struct Array arr, int index) {
//     if(index >= 0 && index < arr.length){
//         return arr.A[index];
//     }
//     return -1;
// }

// void Set(struct Array *arr, int index, int x) {
//     if(index >=0 && index < arr->length) { 
//         arr->A[index]=x;
//     }
// }

// int Max(struct Array arr) {

//     int max = arr.A[0];
//     int i;
//     for(i=1; i<arr.length; i++) {
//         if(arr.A[i]>max) {
//             max=arr.A[i];
//         }
//     }
//     return max;
// }

// int Min(struct Array arr) {

//     int min = arr.A[0];
//     int i;
//     for(i=1; i<arr.length; i++) {
//         if(arr.A[i]<min) {
//             min=arr.A[i];
//         }
//     }
//     return min;
// }

int Sum(struct Array arr) { 
    int s=0;
    int i;
    for(i=0; i<arr.length; i++) {
        s+=arr.A[i];
    }
    return s;
}

// float Avg(struct Array arr) {
//     return (float)Sum(arr)/arr.length;
// }

// int main() {
//     struct Array arr = {{2,3,4,5,6},10, 5};
//     printf("%d\n", Get(arr, 0));
//     Set(&arr, 0, 25);
//     printf("%d\n", Max(arr));
//     printf("%d\n", Min(arr));
//     printf("%d", Sum(arr));
//     printf("%f", Avg(arr));

//     display(arr);
//     return 0;
// }

//reverse an array
// void Reverse(struct Array *arr) {

//     int *B;
//     int i, j;

//     B=(int *)malloc(arr->length*sizeof(int));
//     for(i=arr->length-1, j=0; i>=0; i--, j++) {
//         B[j] = arr->A[i];
//     }
//     for(i=0; i<arr->length; i++) {
//         arr->A[i]=B[i];
//     }
// }

// void Reverse2(struct Array *arr) {
//     int i, j;
//     for(i=0, j=arr->length-1; i<j; i++, j--) {
//         swap(&arr->A[i], &arr->A[j]);
//     }
// }

// int main() {
//     struct Array arr = {{2,3,4,5,6},10, 5};
//     // Reverse(&arr);
//     Reverse2(&arr);
  
//     display(arr);
//     return 0;
// }

// //Check if array is shorted
// void InsertSort(struct Array *arr, int x) {
//     int i=arr->length-1;
//     if(arr->length==arr->size){
//         return;
//     }
//     while(i>=0 && arr->A[i]>x) {

//         arr->A[i+1] = arr->A[i];
//         i--;
//     }
//     arr->A[i+1] = x;
//     arr->length++;
// }

// int isShorted(struct Array arr) {
//     int i;
//     for(i=0; i<arr.length-1; i++) {
//         if(arr.A[i] > arr.A[i+1]){
//             return 0;
//         }
//     }
//     return 1;
// }

// void Rearrange(struct Array *arr) {
//     int i,j;
//     i=0;
//     j=arr->length-1;

//     while(i < j) {

//         while(arr->A[i] < 0) {
//             i++;
//         }
//         while(arr->A[j] >= 0) {
//             j--;
//         }
//         if(i < j) {
//             swap(&arr->A[i], &arr->A[j]);
//         }
//     }
// }

// int main() {
//     struct Array arr = {{2,-3, 25,14,-10,-15, -7},10, 5};
    
//     // InsertSort(&arr, 12 );
//     // printf("%d\n", isShorted(arr));
//     Rearrange(&arr);
  
//     display(arr);
//     return 0;
// }

// //Merging Array
// struct Array * Merge(struct Array *arr1, struct Array *arr2) {
//     int i, j, k;
//     i=j=k=0;

//     struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

//     while(i < arr1->length && j < arr2->length) {
//         if(arr1->A[i]<arr2->A[j]) {
//             arr3->A[k++]=arr1->A[i++];
//         }
//         else {
//             arr3->A[k++]=arr2->A[j++];
//         }
//     }
//     for( ; i<arr1->length; i++) {
//         arr3->A[k++]=arr1->A[i];
//     }
//     for( ; j<arr2->length; j++) {
//         arr3->A[k++]=arr2->A[j];
//     }
//     arr3->length = arr1->length + arr2->length;
//     arr3->size = 10;

//     return arr3;

// }

// int main() {
//     struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
//     struct Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};
//     struct Array *arr3;

//     arr3 = Merge(&arr1, &arr2);
//     display(*arr3);

//     return 0;
// }

// //set operations on the Array ->Union
// struct Array * Union(struct Array *arr1, struct Array *arr2) {
//     int i, j, k;
//     i=j=k=0;

//     struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

//     while(i < arr1->length && j < arr2->length) {
//         if(arr1->A[i]<arr2->A[j]) {
//             arr3->A[k++]=arr1->A[i++];
//         }
//         else if(arr2->A[j] < arr1->A[i]){
//             arr3->A[k++]=arr2->A[j++];
//         }
//         else {
//             arr3->A[k++] = arr1->A[i++];
//             j++;
//         }
//     }
//     for( ; i<arr1->length; i++) {
//         arr3->A[k++]=arr1->A[i];
//     }
//     for( ; j<arr2->length; j++) {
//         arr3->A[k++]=arr2->A[j];
//     }
//     arr3->length = k;
//     arr3->size = 10;

//     return arr3;
// }
// //Intersection
// struct Array * Intersection(struct Array *arr1, struct Array *arr2) {
//     int i, j, k;
//     i=j=k=0;

//     struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

//     while(i < arr1->length && j < arr2->length) {
//         if(arr1->A[i]<arr2->A[j]) {
//             i++;
//         }
//         else if(arr2->A[j] < arr1->A[i]){
//             j++;
//         }
//         else if(arr1->A[i] == arr2->A[j]){

//             arr3->A[k++] = arr1->A[i++];
//             j++;
//         }
//     }
    
//     arr3->length = k;
//     arr3->size = 10;

//     return arr3;
// }
// //Difference fxn
// struct Array* Difference(struct Array *arr1, struct Array *arr2) {
//     int i, j, k;
//     i=j=k=0;

//     struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

//     while(i < arr1->length && j < arr2->length) {
//         if(arr1->A[i]<arr2->A[j]) {
//             arr3->A[k++]=arr1->A[i++];
//         }
//         else if(arr2->A[j] < arr1->A[i]){
//             j++;
//         }
//         else {
//             i++;
//             j++;
//         }
//     }
//     for( ; i<arr1->length; i++) {
//         arr3->A[k++]=arr1->A[i];
//     }
   
//     arr3->length = k;
//     arr3->size = 10;

//     return arr3;
// }
// int main() {
//     struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
//     struct Array arr2 = {{3, 6, 7, 15, 20}, 10, 5};
//     struct Array *arr3;

//     arr3 = Difference (&arr1, &arr2);
//     display(*arr3);

//     return 0;
// }

int main() {
    struct Array arr1;
    int ch, x, index;

    printf("Enter size of an array : ");
    scanf("%d", &arr1.size);

    arr1.A =  (int *)malloc(arr1.size*sizeof(int));
    arr1.length=0;

    do { 
    printf("Menu\n");
    printf("1. Insert\n");
    printf("2. Delete\n");
    printf("3. Search\n");
    printf("4. Sum\n");
    printf("5. Display\n");
    printf("6. Exit\n");

    printf("Enter your choice ");
    scanf("%d", &ch);

    switch(ch) {
        case 1: 
            printf("Enter an element and index : ");
            scanf("%d%d", &x, &index);
            Insert(&arr1, index, x);
            break;

        case 2:
            printf("Enter index : ");
            scanf("%d",&index);
            x=delete(&arr1, index);
            printf("Deleted element is %d\n", x);
            break;

        case 3:
            printf("Enter an element to search : ");
            scanf("%d", &x);
            x=LinearSearch(&arr1, x);
            printf("element index %d", index);
            break;

        case 4:
            printf("Sum is %d\n :", Sum (arr1));
            break;

        case 5: display(arr1);
        break;

        default:
            printf("Invalid choice\n");

       }
    }   while(ch < 6);  

    return 0;
}