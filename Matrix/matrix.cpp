//c++ class for diagonal matrix
#include<iostream>
using namespace std;

// class Diagonal
// {
// private:
//     int *A;
//     int n;
// public:
//     Diagonal() 
//     {
//         n=2;
//         A=new int[2];
//     }

//     Diagonal(int n)
//     {
//         this->n=n;
//         A=new int [n];
//     }
//     ~Diagonal()
//     {
//         delete []A;
//     }
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
// };

// void Diagonal:: Set(int i,int j,int x) {
//     if(i == j) {
//         A[i-1]=x;
//     }
// }

// int Diagonal::Get(int i, int j) {
//     if(i == j) {
//         return A[i-1];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void Diagonal::Display(){
//     for(int i=0; i<n; i++) {
//         for(int j=0; j<n; j++) {
//             if(i == j) {
//                 cout << A[i] << " ";
//             }
//             else {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     Diagonal d(4); // d of dimension four

//     d.Set(1,1,5);
//     d.Set(2,2,8);
//     d.Set(3,3,9);
//     d.Set(4,4,12);

//     d.Display();
//     return 0;
// }


//Lowr triangular matrix-> row  representation
// class LowerTri
// {
// private:
//     int *A;
//     int n;
// public:
//     LowerTri() 
//     {
//         n=2;
//         A=new int[2*(2+1)/2];
//     }

//     LowerTri(int n)
//     {
//         this->n=n;
//         A=new int [n*(n+1)/2];
//     }
//     ~LowerTri()
//     {
//         delete []A;
//     }
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
//     int GetDimension() {return n;}
// };

// void LowerTri:: Set(int i,int j,int x) {
//     if(i >= j) {
//         A[i*(i-1)/2 + j-1]=x;
//     }
// }

// int LowerTri::Get(int i, int j) {
//     if(i >= j) {
//         return A[i*(i-1)/2 + j-1];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void LowerTri::Display(){
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//             if(i >= j) {
//                 cout << A[i*(i-1)/2 + j-1] << " ";
//             }
//             else {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n; // d of dimension four
//     cout << "Enter Dimensions : ";
//     cin >> n;

//     LowerTri lm(n); //parametarised constructor of this class

//     int x;

//     cout << "Enter all elements :\n ";

//     for(int i=1; i<=lm.GetDimension(); i++) {
//         for(int j=1; j<=lm.GetDimension(); j++) {
//             cin >> x;
//             lm.Set(i, j, x);
//         }
//     }
    
//     cout << "\nLower Triangular matrix\n";
//     lm.Display();
//     return 0;
// }


//Lowr triangular matrix-> column mJajor representation
// class LowerTri
// {
// private:
//     int *A;
//     int n;
// public:
//     LowerTri() 
//     {
//         n=2;
//         A=new int[2*(2+1)/2];
//     }

//     LowerTri(int n)
//     {
//         this->n=n;
//         A=new int [n*(n+1)/2];
//     }
//     ~LowerTri()
//     {
//         delete []A;
//     }
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
//     int GetDimension() {return n;}
// };

// void LowerTri:: Set(int i,int j,int x) {
//     if(i >= j) {
//         A[n*(j-1) - (j-2)*(j-1)/2+i-j]=x;
//     }
// }   

// int LowerTri::Get(int i, int j) {
//     if(i >= j) {
//         return A[n*(j-1) - (j-2)*(j-1)/2+i-j];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void LowerTri::Display(){
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//             if(i >= j) {
//                 cout << A[n*(j-1) - (j-2)*(j-1)/2+i-j] << " ";
//             }
//             else {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n; // d of dimension four
//     cout << "Enter Dimensions : ";
//     cin >> n;

//     LowerTri lm(n); //parametarised constructor of this class

//     int x;

//     cout << "Enter all elements :\n ";

//     for(int i=1; i<=lm.GetDimension(); i++) {
//         for(int j=1; j<=lm.GetDimension(); j++) {
//             cin >> x;
//             lm.Set(i, j, x);
//         }
//     }
    
//     cout << "\nLower Triangular matrix\n";
//     lm.Display();
//     return 0;
// }

// //upper triangular mapping -> row major representation
// class LowerTri
// {
// private:
//     int *A;
//     int n;
// public:
//     LowerTri() 
//     {
//         n=2;
//         A=new int[2*(2+1)/2];
//     }

//     LowerTri(int n)
//     {
//         this->n=n;
//         A=new int [n*(n+1)/2];
//     }
//     ~LowerTri()
//     {
//         delete []A;
//     }
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
//     int GetDimension() {return n;}
// };

// void LowerTri:: Set(int i,int j,int x) {
//     if(i <= j) {
//         A[n*(i-1)-(i-2)*(i-1)/2 +(j-i)]=x;
//     }
// }   

// int LowerTri::Get(int i, int j) {
//     if(i <= j) {
//         return A[n*(i-1)-(i-2)*(i-1)/2+ (j-i)];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void LowerTri::Display(){
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//             if(i <= j) {
//                 cout << A[n*(i-1)-(i-2)*(i-1)/2 + (j-i)] << " ";
//             }
//             else {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n; // d of dimension four
//     cout << "Enter Dimensions : ";
//     cin >> n;

//     LowerTri lm(n); //parametarised constructor of this class

//     int x;

//     cout << "Enter all elements :\n ";

//     for(int i=1; i<=lm.GetDimension(); i++) {
//         for(int j=1; j<=lm.GetDimension(); j++) {
//             cin >> x;
//             lm.Set(i, j, x);
//         }
//     }
    
//     cout << "\nLower Triangular matrix\n";
//     lm.Display();
//     return 0;
// }


//column major representation
// class LowerTri
// {
// private:
//     int *A;
//     int n;
// public:
//     LowerTri() 
//     {
//         n=2;
//         A=new int[2*(2+1)/2];
//     }

//     LowerTri(int n)
//     {
//         this->n=n;
//         A=new int [n*(n+1)/2];
//     }
//     ~LowerTri()
//     {
//         delete []A;
//     }
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
//     int GetDimension() {return n;}
// };

// void LowerTri:: Set(int i,int j,int x) {
//     if(i <= j) {
//         A[j*(j-1)/2+(i-1)]=x;
//     }
// }   

// int LowerTri::Get(int i, int j) {
//     if(i <= j) {
//         return A[j*(j-1)/2+(i-1)];
//     }
//     else
//     {
//         return 0;
//     }
// }

// void LowerTri::Display(){
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//             if(i <= j) {
//                 cout << A[j*(j-1)/2+(i-1)] << " ";
//             }
//             else {
//                 cout << "0 ";
//             }
//         }
//         cout << endl;
//     }
// }

// int main() {
//     int n; // d of dimension four
//     cout << "Enter Dimensions : ";
//     cin >> n;

//     LowerTri lm(n); //parametarised constructor of this class

//     int x;

//     cout << "Enter all elements :\n ";

//     for(int i=1; i<=lm.GetDimension(); i++) {
//         for(int j=1; j<=lm.GetDimension(); j++) {
//             cin >> x;
//             lm.Set(i, j, x);
//         }
//     }
//     cout << "\nLower Triangular matrix\n";
//     lm.Display();
//     return 0;
// }


//Symmetric matrix -> Row major representation
//upper triangular mapping -> row major representation, M[i, j] = M[j, i]
// class Symmetric
// {
// private:
//     int *A;
//     int n;
// public:
//     Symmetric() 
//     {
//         n=2;
//         A=new int[2*(2+1)/2];
//     }

//     Symmetric(int n)
//     {
//         this->n=n;
//         A=new int [n*(n+1)/2];
//     }
//     ~Symmetric()
//     {
//         delete []A;
//     }
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
//     int GetDimension() {return n;}
// };

// void Symmetric:: Set(int i,int j,int x) {
//     if(i >= j) {
//         A[i*(i-1)/2+(j-1)]=x;
//     }
//     else{
//         A[j*(j-1)/2+(i-1)]=x;
//     }
// }   

// int Symmetric::Get(int i, int j) {
//     if(i >= j) {
//         return A[i*(i-1)/2+(j-1)];
//     }
//     else
//     {
//         return A[j*(j-1)/2+(i-1)];
//     }
// }

// void Symmetric::Display(){
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
           
//                 cout << Get(i, j) << " ";
//             }
//         cout << endl;
//     }
// }

// int main() {
//     int n, x; // d of dimension four
//     cout << "Enter Dimensions : ";
//     cin >> n;

//     Symmetric sm(n); //parametarised constructor of this class


//     cout << "Enter all elements :\n ";

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//             cin >> x;
//             sm.Set(i, j, x);
//         }
//     }
//     cout << "\n symmetric matrix\n";
//     sm.Display();
//     return 0;
// }

//Tri-Diagonal matrix 
// class TriDiagonal
// {
// private:
//     int *A;
//     int n;
// public:
//     TriDiagonal() 
//     {
//         n=2;
//         A=new int[3 * n - 2]; //3n -2 element will be stored insted of n*n
//     }

//     TriDiagonal(int n)
//     {
//         this->n=n;
//         A=new int [3 * n - 2];
//     }
//     ~TriDiagonal()
//     {
//         delete []A;
//     }
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
//     int GetDimension() {return n;}
// };

// void TriDiagonal:: Set(int i,int j,int x) {
//     if(i - j == 1) { //lower diagonal
//         A[i - 2] = x;
//     }
//     else if(i - j == 0) {
//         A[n-1+i-1] = x;
//     }
//     else if(i - j == -1) {
//         A[2*n -1 + i -1] = x;
//     }
// }   

// int TriDiagonal::Get(int i, int j) {
//     if(i - j == 1) { //lower diagonal
//         return A[i - 2];
//     }
//     else if(i == j) {
//         return A[n -1 + i -1];
//     }
//     else if(i - j == -1) {
//         return A[2*n -1 + i -1];
//     }
//     else{
//         return 0;
//     }
// }

// void TriDiagonal::Display(){
//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
           
//                 cout << Get(i, j) << " ";
//             } 
//         cout << endl;
//     }
// }

// int main() {
//     int n, x; // d of dimension four
//     cout << "Enter Dimensions : ";
//     cin >> n;

//     TriDiagonal td(n); //parametarised constructor of this class


//     cout << "Enter all elements :\n ";

//     for(int i=1; i<=n; i++) {
//         for(int j=1; j<=n; j++) {
//             cin >> x;
//             td.Set(i, j, x);
//         }
//     }
//     cout << "\n TriDiagonal matrix\n";
//     td.Display();
//     return 0;
// }

// //Toeplitz
// class Toeplitz
// {
// private:
//     int *A;
//     int n;
// public:
//     Toeplitz(int n)
//     {
//         this->n=n;
//         A=new int [2*n -1];
//     }
//     ~Toeplitz()
//     {
//         delete []A;
//     }
//     void Set(int i, int j, int x);
//     int Get(int i, int j);
//     void Display();
// };

// void Toeplitz:: Set(int i,int j,int x) {
//     if(i <= j) {
//         A[j-1] = x;
//     }
//     else {
//         A[n -1 + i - j] = x;
//     }
// }   

// int Toeplitz::Get(int i, int j) {
//     if(i <= j) {
//         return A[j-1];
//     }
//     else {
//         return A[n -1 + i - j];
//     }
// }

// void Toeplitz::Display(){
//     for(int i=1; i<=n; i++) 
//     {
//         for(int j=1; j<=n; j++)
//          {
//                 cout << Get(i, j) << " ";
//             } 
//         cout << endl;
//     }
// }

// int main() {
    
//     Toeplitz tm(4);

//     tm.Set(1,1,2);
//     tm.Set(1,2,3);
//     tm.Set(1,3,4);
//     tm.Set(1,4,5);

//     tm.Set(2,1,6);
//     tm.Set(3,1,7);
//     tm.Set(4,1,8);

//     tm.Display();

//     return 0;    
// }

//menu driven program
void main() {
    int *A, n, ch, x; //n-dimention, ch- choice, x-variable
}