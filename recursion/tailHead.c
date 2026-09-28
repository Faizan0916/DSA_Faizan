#include<stdio.h>

// void fun(int n) {

//     if(n > 0) {
//         fun(n-1);
//         printf("%d\n", n);
//         // fun(n-1);
//     }
// }
// int main() {
//     int x=3;
//     fun(x);
//     return 0;
// }

//static varibale in recursion
// int fun(int n) {
//     if(n > 0) {
//         return fun(n -1) + n; 
//     }
//     return 0;
// }
// int main() {
//     int x;
//     x=fun(5);
//     printf("%d", x);
// }

// int x=0; // global varibale
// int fun(int n) {
//     // static int x = 0; //static var
//     if(n > 0) {
//         x++;
//         return fun(n -1) + x; 
//     }
//     return 0;
// }
// int main() {
//     int x;
//     x=fun(5);
//     printf("%d", x);
// }

// tree recursion?
// int fun (int n) {
//     if (n > 0) {
//         printf("%d ", n);
//         fun(n-1);
//         fun(n-1);
//     }
// }
// int main() {
//     fun(3);
//     return 0;
// }

//Indirect recursion 
// void funB(int n);

// void funA(int n) {
//     if(n > 0) {
//         printf("%d ", n);
//         funB(n-1);
//     }
// }

// void funB(int n) {
//     if(n > 0) {
//         printf("%d ",n);
//             funA(n/2);
//     }
// }

// int main() {
//     funA(20);
//     return 0;
// }

// //Nested recursion
// int fun(int n) {
//     if(n > 100) {
//         return n-10;
//     }
//     else {
//         return fun(fun(n+11));
//     }
// }

// int main() {
//     int r;
//     r = fun(95);
//     printf("%d ", r);
//     return 0;
// }

//sum of N natural numbers
// int sum(int n) {
//     if(n == 0) {
//         return 0;
//     }
//     else {
//         return sum(n-1) + n;
//     }
// }
// //by loop
// int Isum(int n) {
//     int s=0;
//     int i;
//     for(i=1; i<=n; i++) {
//         s = s+i;
//     }
//     return s;
// }
// int main(){
//     int r;
//     r = Isum(7);
//     // r = sum(10); 
//     printf("%d", r);
//     return 0;
// }

// //factorial of a number
// int fact(int n) {
//     if(n==0){
//         return 1;
//     }
//     else {
//         return fact(n-1)*n;
//     }
// }
// int Ifact(int n) {
//     int f=1;
//     int i;
//     for(i=1; i<=n; i++) {
//         f=f*i;
//     }
//     return f;
// }
// int main() {
//     int r;
//     r = Ifact(7);
//     r = fact(5);
//     printf("%d", r);
//     return 0;
// }

// // #Power using recursion
// int power(int m, int n) {
//     if(n == 0) {
//         return 1;
//     } 
//     else {
//         return power(m, n-1)*m;
//     }
// }

// int power1(int m, int n) {
//     if(n == 0) {
//         return 1;
//     }
//     if(n % 2 == 0) {
//         return power1(m*m, n/2);
//     }
//     else {
//         return m*power1(m*m, (n-1)/2);
//     }
// }
// int main(){
//     int r = power1(2,7);
//     printf("%d", r);
//     return 0;
//}

// #taylor series using recursion
// double e(int x, int n) {
//     static double p=1, f=1;
//     double r;
//     if(n == 0) {
//         return 1;
//     }
//     else {
//         r = e(x, n-1);
//         p=p*x;
//         f=f*x;
//         return r+p/f;
//     } 
// }

// int main() {
//     printf("%lf \n", e(4,10) );
//     return 0;
// }


//#Taylor series using hornor
// double e(int x, int n) {
//     static double s;
//     if(n == 0) {
//         return s;
//     }
//     else {
//         s = 1 + x*s/n;
//         return e(x, n-1);
//     }
// }
// int main() {
//     printf("%lf \n", e(2, 10));
//     return 0; 
// }

//Taylor series iterative
// double e(int x, int n) {
//     int i;
//     double s=1;
//     double num = 1;
//     double den = 1;
//      for(i=1; i<=n; i++) {
//         num *=x;
//         den *= i;
//         s += num/den;
//      }
//      return s;
// }
// int main() {
//     printf("%lf \n", e(1,10));
//     return 0;   
// }

// //nCr using recursion
// int fact(int n) {
//     if(n == 0)  return 1;
//     return fact(n-1) * n;
// }

// int nCr(int n, int r) {
//     int num, den;
//     num = fact(n);
//     den = fact(r)*fact(n-r);

//     return num/den;
// }
// int main() { //print the result
//     printf("%d \n", nCr(5, 3));
//     return 0;
// }

// int NCR(int n, int r) {
//     if(n==r || r==0) 
//         return 1;
//     return NCR(n-1, r-1) + NCR(n-1, r);
// }
// int main() { //print the result
//     printf("%d \n", NCR(5, 5));
//     return 0;
// }

// Tower of Hamoi
void TOH(int n, int A, int B, int C) {
    if(n > 0){
        TOH(n-1, A, C, B);
        printf("(%d, %d)\n", A, C);
        TOH(n-1, B, A, C);
    }
}
int main() {
    TOH(3, 1, 2, 3);
    return 0;
}