#include<iostream>
using namespace std;

class Array
{
private:
    int *A;
    int size;
    int length;
public:
    Array()
    {
        size=10;
        length=0;
        A = new int[10];
    }

    Array(int sz) 
    {
        size=sz;
        length=0;
        A = new int[size];
    }

    ~Array() {
        delete []A;
    }
    void Display();
    void Insert(int index, int x);
    int Delete(int index);
};

void Array::Display() {
    for(int i=0; i<=length; i++) {
        cout << A[i] << " ";
    }
}

void Array::Insert(int index, int x) {
    if(index >= 0 && index <= length) {
        for(int i=length-1; i>index; i--) {
            A[i+1]=A[i];
        }
        A[index]=x;
        length++;
    }
}

int Array:: Delete(int index) {
    int x=0;
    if(index >= 0 && index < length) {
        x=A[index];
        for(int i=index; i < length-1; i++){
            A[i]= A[i-1];
        }
        length--;
    }
    return x;
}

// int main() {
//     Array arr(10);

    // arr.Insert(0,4);
    // arr.Insert(1,5);
    // arr.Insert(2,7);
    // // arr.Display();

    // cout << arr.Delete(1) << endl;
    // arr.Display();
    
//     return 0;
// }
 
//find missing element- difference technique best for sorted array
// int main( ) {
//     int A[] = {1, 2, 3, 5, 6, 7, 8};
//     int n= sizeof(A)/sizeof(A[0]);

//     int diff = A[0]-0;

//     for(int i=0; i<n; i++) {
//         if(A[i]-i != diff) {
//             cout << "Missing element : " << i+diff << endl;
//             break;
//         }
//     }
//     return 0;
// }


// //Multiple missing element
// int main() {
//     int A[] = {6, 7, 8, 10, 11, 14, 15};
//     int n = sizeof(A) / sizeof(A[0]);

//     int diff = A[0]-0;

//     for(int i=0; i<n; i++) {
//         while(A[i] - i > diff) {
//             cout << "Missing values : " << i + diff << endl;
//             diff++;
//         }
//     }
//     return 0;
// }

// //missing values in unsorted array 
// int main() {
//     int A[] = {3, 7, 4, 5 ,1, 6};
//     int n = 7;

//     int sum = 0;

//     for(int i=0; i<6; i++) {
//         sum+= A[i]; 
//     }
//     int total = n*(n+1)/2;
//     cout << "Missing values : " << total - sum << endl;
//     return 0;
// }

//using hashing -> multiple missing values
// int main() {
//     int A[] = {3, 7, 4, 9, 12, 6, 1, 11, 2, 10};
//     int n = 10;

//     int H[13] = {0}; //size = max size +1;

//     for(int i=0; i<n; i++) {
//         H[A[i]]++;
//     }

//     for(int i=0; i<n; i++) {
//         if(H[i] == 0) {
//             cout << "Missing values : "  << i << " " << endl;
//         }
//     }
//     return 0;
// }

//find duplicate
// int main() {
//     int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
//     int n = sizeof(A) / sizeof(A[0]);

//     for(int i=0; i<n-1; i++) {
//         if(A[i] == A[i+1]) {
//             cout << "Duplicate element : " << A[i] << endl;
//         }
//     }
//     return 0;
// }

// //print duplicate at once
// int main()
// {
//     int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
//     int n = sizeof(A) / sizeof(A[0]);

//     int lastduplicate = 0;

//     for(int i=0; i<n-1; i++) {
//         if(A[i]==A[i+1] && A[i] != lastduplicate) {
//             cout << "Duplicate element is : " << A[i] << endl;
//             lastduplicate = A[i];
//         }
//     }
//     return 0;
// }

// //count duplicate in unsorted array
// int main () {
//     int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
//     int n = sizeof(A) / sizeof(A[0]);

//     for(int i=0; i<n-1; i++) {
//         if(A[i] == A[i+1]) {
//             int j= i+1;
       
//         while(j < n && A[j] == A[i]) {
//             j++;
//         }
//         cout << A[i] << "Appears " << j-1 << " times" << endl; 
//         i=j-1;
//        }
//     }
//     return 0;
// }

// //Brute force
// int main () {
//     int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
//     int n = sizeof(A)/sizeof(A[0]);

//     for(int i=0; i<n-1; i++) {
//         int count =1;

//         if(A[i] != -1) {
//             for(int j=i+1; j<n; j++) {
//                 if(A[i] == A[i+1]) {
//                     count++;
//                     A[j] = -1;
//                 }
//             }
//             if(count > 1) {
//                 cout << A[i] << " appears" << count << " times" << endl;
//             }
//         }
//     }
//     return 0;
// }

// //usign hashtabel or bitset
// int main () {
//     int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
//     int n = sizeof(A)/sizeof(A[0]);

//     int H[11] = {0}; //total size + 1

//     for(int i=0; i<n-1; i++) {
//         H[A[i]]++;
//     }
    
//     for(int i=0; i<11; i++) {
//         if(H[i] > 1) {
//             cout << i << " appears " << H[i] << " times " << endl;
//         }
//     }
//    return 0;
// }

// ///find a pair with sum K (a+b = k)
// int main() {
//     int A[] = {6,3,8,10,16,7,5,2,9,14};
//     int n = sizeof(A)/sizeof(A[0]);
//     int k= 14;

//     for(int i=0; i<=n; i++) {
//         for(int j=i+1; j<n; j++) {
//             if(A[i] + A[j] == k) {
//                 cout << A[i] << " + " << A[j] << " = " << k << endl; 
//             }
//         }
//     }
//     return 0;
// }

// int main() {
//     int A[] = {6,3,8,10,16,7,5,2,9,14};
//     int n = sizeof(A)/sizeof(A[0]);

//     int H[16] = {0};
//     int k = 17;

//     for(int i=0; i<n-1; i++) {
//         if(H[k - A[i]] != 0) {
//             cout << A[i] <<  " + " << (k-A[i]) << " = " << k << endl;
//         }
//         H[A[i]]++;
//     }
//     return 0;
// }

// //for sorted array -> two pointer approach 
// int main() {
//     int A[] = {6,3,8,10,16,7,5,2,9,14};
//     int n = sizeof(A)/sizeof(A[0]);

//     int k = 15;
    
//     int i=0;
//     int j=n-1;

//     while(i < j) {
//         if(A[i] + A[j] == k) {
//             cout << A[i] << " + " << A[j] << " = " << k << endl;
//             i++;
//             j--;
//         }
//         else if(A[i] + A[j] < k) {
//             i++;
//         }
//         else {
//             j--;
//         }
//     }
//     return 0;
// }

//find max and min in a single scan
int main() {
    int A[] = {10, 9, 5, 3, 2 , 1 , -1 };
    int n = sizeof(A)/sizeof(A[0]);

    int max = A[0];
    int min = A[0];

    for(int i=1; i<n; i++) {
        if(A[i] > max) {
            max = A[i];
        }
        else if(A[i] < min) {
            min = A[i];
        }
    }
    cout << "Maximun number is : " << max << endl;
    cout << "Minimun number is : " << min << endl;

    return 0;
}