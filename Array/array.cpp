// #include<iostream>
// using namespace std;

// class Array 
// {
// private:
//     int *A;
//     int size;
//     int length;
//     void swap(int *x, int *y);
// public:
//     Array()
//     {
//         size=10;
//         length=0;
//         A=new int[size];
//     }   
//     Array(int sz)  //constructor
//     {
//         size=sz;
//         length=0;
//         A=new int[size];
//     }
//     ~Array()//desturctor
//     {
//         delete []A;
//     }

// void Display();
// void Append(int x);
// void Insert(int index, int x);
// // int delete(struct Array *arr, int index);
// void swap(int *x, int *y);
// int LinearSearch(int key);
// int BinarySearch(int key);
// // int RBinSearch(int a[], int l, int h, int key);
// int Get(int index);
// void Set(int index, int x);
// int Max();
// int Min();
// int Sum();
// float Avg();
// void Reverse();
// void Reverse2();
// void InsertSort(int x);
// int isShorted();
// void Rearrange();
// Array* Merge(Array *arr2);
// Array* Union(Array *arr2);
// Array* Intersection(Array *arr2);
// Array* Difference(Array *arr2);

// };

// void Array::Display(struct Array arr) {
//     int i;
//     printf("\nElement are \n");
//     for(int i=0; i<arr.length; i++) {
//         printf("%d ", arr.A[i]);
//     }
// }

// void Array::Append(int x) {
//     if(length < size) { 
//         A[length++]=x;
//     }
// }

// void Array::Insert(int index, int x) {
//     int i;
//     if(index >= 0 && index <= length) {
//         for(i=length; i>index; i--) {
//             A[i]=A[i-1];
//         }
//         A[index]=x;
//         length++;
//     }
// }

// int Delete(int index) {
//     int x = 0;
//     int i;
    
//     if(index >=0 && index < length) {
//         x=A[index];
//         for(i=index; i<length-1; i++) {
//             A[i] = A[i+1];
//         }
//         length--;
//         return x;
//     }
//     return 0;
// }

// void swap(int *x, int *y) {
//     int temp;
//     temp=*x;
//     *x=*y;
//     *y=temp;
// }
// int LinearSearch(int key) {
//     int i;
//     for(i=0; i<length; i++) {
//         if(key==A[i]) { 
//             swap(&A[i], &A[0]); //move to front
//             return i;
//         }
//     }
//     return -1;
// }

// int BinarySearch(int key) {
//     int l,mid, h;
//     l=0;
//     h=length-1;

//     while(l <= h) {
//         mid=(l+h)/2;
//         if(key == A[mid]) {
//             return mid;
//         }
//         else if(key < A[mid]) {
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

// int Get(int index) {
//     if(index >= 0 && index < length){
//         return A[index];
//     }
//     return -1;
// }

// void Set(int index, int x) {
//     if(index >=0 && index < length) { 
//         A[index]=x;
//     }
// }

// int Max(struct Array arr) {

//     int max = A[0];
//     int i;
//     for(i=1; i<length; i++) {
//         if(A[i]>max) {
//             max=A[i];
//         }
//     }
//     return max;
// }

// int Min() {

//     int min = A[0];
//     int i;
//     for(i=1; i<length; i++) {
//         if(A[i]<min) {
//             min=A[i];
//         }
//     }
//     return min;
// }

// int Sum() { 
//     int s=0;
//     int i;
//     for(i=0; i<length; i++) {
//         s+=A[i];
//     }
//     return s;
// }

// float Avg() {
//     return (float)Sum(arr)/arr.length;
// }


// void Reverse() {

//     int *B;
//     int i, j;

//     B=(int *)malloc(length*sizeof(int));
//     for(i=length-1, j=0; i>=0; i--, j++) {
//         B[j] = A[i];
//     }
//     for(i=0; i<length; i++) {
//         A[i]=B[i];
//     }
// }

// void Reverse2() {
//     int i, j;
//     for(i=0, j=length-1; i<j; i++, j--) {
//         swap(&A[i], &A[j]);
//     }
// }

// void InsertSort(int x) {
//     int i=length-1;
//     if(length==size){
//         return;
//     }
//     while(i>=0 && A[i]>x) {

//         A[i+1] = A[i];
//         i--;
//     }
//     A[i+1] = x;
//     length++;
// }

// int isShorted() {
//     int i;
//     for(i=0; i<length-1; i++) {
//         if(A[i] > A[i+1]){
//             return 0;
//         }
//     }
//     return 1;
// }

// void Rearrange() {
//     int i,j;
//     i=0;
//     j=length-1;

//     while(i < j) {

//         while(A[i] < 0) {
//             i++;
//         }
//         while(A[j] >= 0) {
//             j--;
//         }
//         if(i < j) {
//             swap(&A[i], &A[j]);
//         }
//     }
// }

// Array * Merge(Array arr2) {
//     int i, j, k;
//     i=j=k=0;

//     Array *arr3 = new  Array(length+arr2.length);

//     while(i < length && j < arr2.length) {
//         if(A[i]<arr2.A[j]) {
//             arr3->A[k++]=A[i++];
//         }
//         else {
//             arr3->A[k++]=arr2.A[j++];
//         }
//     }
//     for( ; i<length; i++) {
//         arr3->A[k++]=A[i];
//     }
//     for( ; j<arr2.length; j++) {
//         arr3->A[k++]=arr2.A[j];
//     }
//     arr3->length = alength + arr2.length;

//     return arr3;

// }


// Array * Union(Array *arr2) {
//     int i, j, k;
//     i=j=k=0;

//     Array *arr3 = new Array(length+arr2.length);

//     while(i < length && j < arr2.length) {
//         if(A[i]<arr2.A[j]) {
//             arr3->A[k++]=A[i++];
//         }
//         else if(arr2.A[j] < A[i]){
//             arr3->A[k++]=arr2.A[j++];
//         }
//         else {
//             arr3->A[k++] = A[i++];
//             j++;
//         }
//     }
//     for( ; i<length; i++) {
//         arr3->A[k++]=A[i];
//     }
//     for( ; j<arr2.length; j++) {
//         arr3->A[k++]=arr2.A[j];
//     }
//     arr3->length = k;

//     return arr3;
// }
// //Intersection
// Array * Intersection(Array *arr2) {
//     int i, j, k;
//     i=j=k=0;

//     Array *arr3 = new Array(length+arr2.length);
//     while(i < length && j < arr2.length) {
//         if(A[i]<arr2.A[j]) {
//             i++;
//         }
//         else if(arr2.A[j] < A[i]){
//             j++;
//         }
//         else if(A[i] == arr2.A[j]){

//             arr3->A[k++] = A[i++];
//             j++;
//         }
//     }
    
//     arr3->length = k;
//     return arr3;
// }

// //Difference fxn
// Array* Difference(Array *arr2) {
//     int i, j, k;
//     i=j=k=0;

//     Array *arr3 = new Array(length + arr2.length);

//     while(i < length && j < arr2.length) {
//         if(A[i]<arr2.A[j]) {
//             arr3->A[k++]=A[i++];
//         }
//         else if(arr2.A[j] < A[i]){
//             j++;
//         }
//         else {
//             i++;
//             j++;
//         }
//     }
//     for( ; i<length; i++) {
//         arr3->A[k++]=A[i];
//     }
   
//     arr3->length = k;


//     return arr3;
// }

// int main() {
//     Array *arr1;
//     int ch, sz;  
//     int x, index;

//     printf("Enter size of an array : ");
//     scanf("%d", &sz);
    
//     arr1 = new Array(sz);


//     do { 
//     printf("Menu\n");
//     printf("1. Insert\n");
//     printf("2. Delete\n");
//     printf("3. Search\n");
//     printf("4. Sum\n");
//     printf("5. Display\n");
//     printf("6. Exit\n");

//     printf("Enter your choice ");
//     scanf("%d", &ch);

//     switch(ch) {
//         case 1: 
//             printf("Enter an element and index : ");
//             scanf("%d%d", &x, &index);
//             arr1.(index, x);
//             break;

//         case 2:
//             printf("Enter index : ");
//             scanf("%d",&index);
//             x=arr1.Delete(index);
//             printf("Deleted element is %d\n", x);
//             break;

//         case 3:
//             printf("Enter an element to search : ");
//             scanf("%d", &x);
//             x=arr1.LinearSearch(&arr1, x);
//             printf("element index %d", index);
//             break;

//         case 4:
//             printf("Sum is %d\n :", arr1.Sum());
//             break;

//         case 5: arr1.Display(arr1);
//         break;

//         default:
//             printf("Invalid choice\n");

//        }
//     }   while(ch < 6);  

//     return 0;
// }

#include <iostream>
#include <cstdlib>
using namespace std;

class Array {
private:
    int *A;
    int size;
    int length;

    void swap(int *x, int *y) {
        int temp = *x;
        *x = *y;
        *y = temp;
    }

public:
    // Default constructor
    Array() {
        size = 10;
        length = 0;
        A = new int[size];
    }

    // Parameterized constructor
    Array(int sz) {
        size = sz;
        length = 0;
        A = new int[size];
    }

    // Destructor
    ~Array() {
        delete[] A;
    }

    // ─── Display ────────────────────────────────────────────────────────────────
    // BUG FIX: removed wrong "struct Array arr" parameter; use member data directly
    void Display() {
        cout << "\nElements are: ";
        for (int i = 0; i < length; i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }

    // ─── Append ─────────────────────────────────────────────────────────────────
    void Append(int x) {
        if (length < size) {
            A[length++] = x;
        }
    }

    // ─── Insert ─────────────────────────────────────────────────────────────────
    void Insert(int index, int x) {
        if (index >= 0 && index <= length && length < size) {
            for (int i = length; i > index; i--) {
                A[i] = A[i - 1];
            }
            A[index] = x;
            length++;
        }
    }

    // ─── Delete ─────────────────────────────────────────────────────────────────
    // BUG FIX: was a free function; moved inside class as member function
    int Delete(int index) {
        if (index >= 0 && index < length) {
            int x = A[index];
            for (int i = index; i < length - 1; i++) {
                A[i] = A[i + 1];
            }
            length--;
            return x;
        }
        return -1;
    }

    // ─── Linear Search ──────────────────────────────────────────────────────────
    // BUG FIX: was a free function; moved inside class; swap call now valid
    int LinearSearch(int key) {
        for (int i = 0; i < length; i++) {
            if (key == A[i]) {
                swap(&A[i], &A[0]); // move to front
                return i;
            }
        }
        return -1;
    }

    // ─── Binary Search ──────────────────────────────────────────────────────────
    // BUG FIX: was a free function; moved inside class
    int BinarySearch(int key) {
        int l = 0, h = length - 1;
        while (l <= h) {
            int mid = (l + h) / 2;
            if (key == A[mid])      return mid;
            else if (key < A[mid])  h = mid - 1;
            else                    l = mid + 1;
        }
        return -1;
    }

    // ─── Recursive Binary Search (static helper) ─────────────────────────────
    static int RBinSearch(int a[], int l, int h, int key) {
        if (l <= h) {
            int mid = (l + h) / 2;
            if (key == a[mid])      return mid;
            else if (key < a[mid])  return RBinSearch(a, l, mid - 1, key);
            else                    return RBinSearch(a, mid + 1, h, key);
        }
        return -1;
    }

    // ─── Get ────────────────────────────────────────────────────────────────────
    // BUG FIX: was a free function; moved inside class
    int Get(int index) {
        if (index >= 0 && index < length)
            return A[index];
        return -1;
    }

    // ─── Set ────────────────────────────────────────────────────────────────────
    // BUG FIX: was a free function; moved inside class
    void Set(int index, int x) {
        if (index >= 0 && index < length)
            A[index] = x;
    }

    // ─── Max ────────────────────────────────────────────────────────────────────
    // BUG FIX: removed wrong "struct Array arr" parameter
    int Max() {
        int max = A[0];
        for (int i = 1; i < length; i++) {
            if (A[i] > max) max = A[i];
        }
        return max;
    }

    // ─── Min ────────────────────────────────────────────────────────────────────
    // BUG FIX: was a free function; moved inside class
    int Min() {
        int min = A[0];
        for (int i = 1; i < length; i++) {
            if (A[i] < min) min = A[i];
        }
        return min;
    }

    // ─── Sum ────────────────────────────────────────────────────────────────────
    // BUG FIX: was a free function; moved inside class
    int Sum() {
        int s = 0;
        for (int i = 0; i < length; i++) s += A[i];
        return s;
    }

    // ─── Average ────────────────────────────────────────────────────────────────
    // BUG FIX: was a free function; "arr.length" replaced with "length"
    float Avg() {
        return (float)Sum() / length;
    }

    // ─── Reverse (using auxiliary array) ────────────────────────────────────────
    // BUG FIX: replaced malloc with new; was a free function
    void Reverse() {
        int *B = new int[length];
        for (int i = length - 1, j = 0; i >= 0; i--, j++) {
            B[j] = A[i];
        }
        for (int i = 0; i < length; i++) {
            A[i] = B[i];
        }
        delete[] B;
    }

    // ─── Reverse (in-place) ─────────────────────────────────────────────────────
    // BUG FIX: was a free function; moved inside class
    void Reverse2() {
        for (int i = 0, j = length - 1; i < j; i++, j--) {
            swap(&A[i], &A[j]);
        }
    }

    // ─── Insert into Sorted Array ───────────────────────────────────────────────
    void InsertSort(int x) {
        if (length == size) return;
        int i = length - 1;
        while (i >= 0 && A[i] > x) {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = x;
        length++;
    }

    // ─── Is Sorted ──────────────────────────────────────────────────────────────
    // BUG FIX: renamed isSorted (was "isShorted" — typo)
    int isSorted() {
        for (int i = 0; i < length - 1; i++) {
            if (A[i] > A[i + 1]) return 0;
        }
        return 1;
    }

    // ─── Rearrange (negatives left, positives right) ─────────────────────────
    void Rearrange() {
        int i = 0, j = length - 1;
        while (i < j) {
            while (A[i] < 0) i++;
            while (A[j] >= 0) j--;
            if (i < j) swap(&A[i], &A[j]);
        }
    }

    // ─── Merge (two sorted arrays) ──────────────────────────────────────────────
    // BUG FIX: parameter changed to pointer; "alength" typo fixed to "length"
    Array* Merge(Array *arr2) {
        int i = 0, j = 0, k = 0;
        Array *arr3 = new Array(length + arr2->length);

        while (i < length && j < arr2->length) {
            if (A[i] < arr2->A[j])
                arr3->A[k++] = A[i++];
            else
                arr3->A[k++] = arr2->A[j++];
        }
        while (i < length)       arr3->A[k++] = A[i++];
        while (j < arr2->length) arr3->A[k++] = arr2->A[j++];

        arr3->length = k;  // BUG FIX: was "alength + arr2.length"
        return arr3;
    }

    // ─── Union ──────────────────────────────────────────────────────────────────
    // BUG FIX: "arr2.A[j]" → "arr2->A[j]" throughout (arr2 is a pointer)
    Array* Union(Array *arr2) {
        int i = 0, j = 0, k = 0;
        Array *arr3 = new Array(length + arr2->length);

        while (i < length && j < arr2->length) {
            if (A[i] < arr2->A[j])
                arr3->A[k++] = A[i++];
            else if (arr2->A[j] < A[i])
                arr3->A[k++] = arr2->A[j++];
            else {
                arr3->A[k++] = A[i++];
                j++;
            }
        }
        while (i < length)       arr3->A[k++] = A[i++];
        while (j < arr2->length) arr3->A[k++] = arr2->A[j++];

        arr3->length = k;
        return arr3;
    }

    // ─── Intersection ───────────────────────────────────────────────────────────
    // BUG FIX: "arr2.A[j]" → "arr2->A[j]" throughout
    Array* Intersection(Array *arr2) {
        int i = 0, j = 0, k = 0;
        Array *arr3 = new Array(length + arr2->length);

        while (i < length && j < arr2->length) {
            if (A[i] < arr2->A[j])       i++;
            else if (arr2->A[j] < A[i])  j++;
            else {
                arr3->A[k++] = A[i++];
                j++;
            }
        }
        arr3->length = k;
        return arr3;
    }

    // ─── Difference ─────────────────────────────────────────────────────────────
    // BUG FIX: "arr2.A[j]" → "arr2->A[j]" throughout
    Array* Difference(Array *arr2) {
        int i = 0, j = 0, k = 0;
        Array *arr3 = new Array(length + arr2->length);

        while (i < length && j < arr2->length) {
            if (A[i] < arr2->A[j])
                arr3->A[k++] = A[i++];
            else if (arr2->A[j] < A[i])
                j++;
            else {
                i++;
                j++;
            }
        }
        while (i < length) arr3->A[k++] = A[i++];

        arr3->length = k;
        return arr3;
    }
};

// ═══════════════════════════════════════════════════════════════════════════════
// MAIN
// ═══════════════════════════════════════════════════════════════════════════════
int main() {
    Array *arr1;
    int ch, sz;
    int x, index;

    cout << "Enter size of an array: ";
    cin >> sz;

    arr1 = new Array(sz);

    do {
        cout << "\nMenu\n";
        cout << "1. Insert\n";
        cout << "2. Delete\n";
        cout << "3. Search\n";
        cout << "4. Sum\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter an element and index: ";
                cin >> x >> index;
                arr1->Insert(index, x);   // BUG FIX: was "arr1.(index, x)" — missing method name & wrong operator
                break;

            case 2:
                cout << "Enter index: ";
                cin >> index;
                x = arr1->Delete(index);  // BUG FIX: was "arr1.Delete" — arr1 is a pointer, use ->
                cout << "Deleted element is " << x << endl;
                break;

            case 3:
                cout << "Enter an element to search: ";
                cin >> x;
                index = arr1->LinearSearch(x);  // BUG FIX: was passing &arr1 as extra arg; use ->
                cout << "Element found at index: " << index << endl;
                break;

            case 4:
                cout << "Sum is: " << arr1->Sum() << endl;  // BUG FIX: use ->
                break;

            case 5:
                arr1->Display();  // BUG FIX: no argument needed; use ->
                break;

            default:
                cout << "Invalid choice\n";
        }
    } while (ch != 6);  // BUG FIX: was "ch < 6" which exits on invalid input >= 6

    delete arr1;
    return 0;
}