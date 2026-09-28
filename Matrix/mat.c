#include<stdio.h>
#include<stdlib.h>

// struct Matrix{
//     int *A;
//     int n;
// };

// void Set(struct Matrix *m, int i, int j, int x) {
//     if(i >= j) {
//         m->A[i*(i-1)/2 + j-1] = x;  //for pointer we use -> arrow operator insted of dot . ;

//     }
// }

// int Get(struct Matrix m, int i, int j)
// {
//     if(i >= j) {
//         return m.A[i*(i-1)/2 + j-1];
//     }
//     else{
//         return 0;
//     }
// }

// void Display(struct Matrix m) {
//     int i,j;
//     for(i=1; i<=m.n; i++) {
//         for(j=1; j<=m.n; j++) {
//             if(i >= j) {
//                 printf("%d ", m.A[i*(i-1)/2 + j-1]);
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }
// int main() { 
//     struct Matrix m;
//     int i, j, x;

//     printf("Enter Dimension : ");
//     scanf("%d", &m.n);  

//     m.A = (int *)malloc(m.n*(m.n+1)/2*sizeof(int));

//     printf("Enter all elements : \n");
//     for(i=1; i<=m.n; i++) 
//     {
//         for(j=1; j<=m.n; j++)
//         {
//             scanf("%d", &x);
//             Set(&m, i, j, x);
//         }
//     }
//     printf("\nLower Triangular Matrix:\n");
//     Display(m);
//     free(m.A);

//     return 0;
// }

//Column major representatiom
// void Set(struct Matrix *m, int i, int j, int x) {
//     if(i >= j) {
//         m->A[m->n*(j-1) + (j-2)*(j-1)/2 + (i-j)] = x;  //for pointer we use -> arrow operator insted of dot . ;

//     }
// }

// int Get(struct Matrix m, int i, int j)
// {
//     if(i >= j) {
//         return m.A[m.n*(j-1) + (j-2)*(j-1)/2 + (i-j)];
//     }
//     else{
//         return 0;
//     }
// }

// void Display(struct Matrix m) {
//     int i,j;
//     for(i=1; i<=m.n; i++) {
//         for(j=1; j<=m.n; j++) {
//             if(i >= j) {
//                 printf("%d ", m.A[m.n*(j-1) + (j-2)*(j-1)/2 + (i-j)]);
//             }
//             else {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }
// int main() { 
//     struct Matrix m;
//     int i, j, x;

//     printf("Enter Dimension : ");
//     scanf("%d", &m.n);  

//     m.A = (int *)malloc(m.n*(m.n+1)/2*sizeof(int));

//     printf("Enter all elements : \n");
//     for(i=1; i<=m.n; i++) 
//     {
//         for(j=1; j<=m.n; j++)
//         {
//             scanf("%d", &x);
//             Set(&m, i, j, x);
//         }
//     }
//     printf("\nLower Triangular Matrix:\n");
//     Display(m);
//     free(m.A);

//     return 0;
// }

//menu driven program
// int main() {
//     int *A;
//     int n, ch, x;
//     int i, j;

//     printf("Enter dimentions : ");
//     scanf("%d ", &n);

//     A = (int *)malloc(n * sizeof(int));

//     do {

//         printf("\n");
//         printf("1. Create\n");
//         printf("2. Get\n");
//         printf("3. Set\n");
//         printf("4. Display\n");
//         printf("5. Exit\n");

//         printf("Enter choices : ");
//         scanf("%d ", &ch);

//         switch (ch)
//         {
//         case 1:
//             printf("Enter diagonal element : ");
//             for(i=1; i<=n; i++) {
//                 scanf("%d", &A[i-1]);
//             }
//             break;
        
//         case 2:
//             printf("Enter row and column : ");
//             scanf("%d%d", &i, &j);
//             if(i == j) {
//                 printf("%d\n", A[i-1]);
//             }
//             else{
//                 printf("0\n");
//             }
//             break;

//         case 3:
//             printf("Enter row, column and element : ");
//             scanf("%d%d%d", &i, &j, &x);

//             if(i==j) {
//                 A[i-1] = x;
//             }
//             break;
        
//         case 4:
//             for(i=1; i<=n; i++) {
//                 for(j=1; j<=n; j++) {
//                     if(i==j) {
//                         printf("%d ", A[i-1]);
//                     }
//                     else {
//                         printf("0 ");
//                     }
//                 }
//                 printf("\n");
//             }
//             break;
//        }
//     }
//     while(ch != 5);
//     free(A);

//     return 0;
// // }
// #include <stdio.h>   (GPT version)
// #include <stdlib.h>

// int main()
// {
//     int *A;
//     int n, ch, x;
//     int i, j;

//     printf("Enter dimension: ");
//     scanf("%d", &n);

//     A = (int *)malloc(n * sizeof(int));

//     do
//     {
//         printf("\n");
//         printf("1. Create\n");
//         printf("2. Get\n");
//         printf("3. Set\n");
//         printf("4. Display\n");
//         printf("5. Exit\n");

//         printf("Enter choice: ");
//         scanf("%d", &ch);

//         switch (ch)
//         {
//         case 1:
//             printf("Enter diagonal elements:\n");
//             for (i = 1; i <= n; i++)
//             {
//                 scanf("%d", &A[i - 1]);
//             }
//             break;

//         case 2:
//             printf("Enter row and column: ");
//             scanf("%d%d", &i, &j);

//             if (i >= 1 && i <= n && j >= 1 && j <= n)
//             {
//                 if (i == j)
//                     printf("%d\n", A[i - 1]);
//                 else
//                     printf("0\n");
//             }
//             else
//             {
//                 printf("Invalid index\n");
//             }
//             break;

//         case 3:
//             printf("Enter row, column and element: ");
//             scanf("%d%d%d", &i, &j, &x);

//             if (i >= 1 && i <= n && j >= 1 && j <= n)
//             {
//                 if (i == j)
//                     A[i - 1] = x;
//                 else
//                     printf("Cannot set a non-diagonal element in a diagonal matrix.\n");
//             }
//             else
//             {
//                 printf("Invalid index\n");
//             }
//             break;

//         case 4:
//             for (i = 1; i <= n; i++)
//             {
//                 for (j = 1; j <= n; j++)
//                 {
//                     if (i == j)
//                         printf("%d ", A[i - 1]);
//                     else
//                         printf("0 ");
//                 }
//                 printf("\n");
//             }
//             break;

//         case 5:
//             printf("Exiting...\n");
//             break;

//         default:
//             printf("Invalid choice\n");
//         }

//     } while (ch != 5);

//     free(A);

//     return 0;
// }