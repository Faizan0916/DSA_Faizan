#include<stdio.h>
#include<stdlib.h>

// struct Element
// {
//     int i;
//     int j;
//     int x;
// };
// struct Sparse
// {
//     int m;
//     int n;
//     int num;
//     struct Element *ele;
// };

// void create(struct Sparse *s)
// {
//     int i;
//     printf("Enter dimensions : ");
//     scanf("%d%d", &s->m, &s->n);

//     printf("Number of non-Zero element : ");
//     scanf("%d", &s->num);

//     s->ele=(struct Element *)malloc(s->num*sizeof(struct Element));

//     printf("Enter non-zero element : ");
//     for(i=0; i<s->num; i++) {
//         scanf("%d%d%d", &s->ele[i].i, &s->ele[i].j, &s->ele[i].x);
//     }
// }

// void display(struct Sparse s)
// {
//     int i, j, k=0;
//     for(i=0; i<s.m; i++) 
//     {
//         for(j=0; j<s.n; j++) {
//             if(i==s.ele[k].i && j==s.ele[k].j){
//                 printf("%d ", s.ele[k++].x);
//             }
//             else
//             {
//                 printf("0 ");
//             }
//         }
//         printf("\n");
//     }
// }

// int main() {
//     struct Sparse s;
//     create(&s);
//     display(s);

//     return 0;
// }

//Program for adding two sparse matrix
// struct Sparse * add(struct Sparse *s1, struct Sparse *s2) 
// {
//     if(s1->m != s2->m || s1->n != s2->n) {
//         return NULL;
//     }

//     struct Sparse *sum;
//     int i, j, k;
//     i=j=k=0;

//     sum = (struct Sparse *)malloc(sizeof(struct Sparse));
//     sum->ele = (struct Element *)malloc((s1->num + s2->num)*sizeof(struct Element));

//     while(i<s1->num && j<s2->num)
//     {
//         if(s1->ele[i].i < s2->ele[j].i){
//             sum->ele[k++] = s1->ele[i++]; 
//         }
//         else if(s1->ele[i].i > s2->ele[j].i){
//             sum->ele[k++] = s2->ele[j++]; 
//         }
//         else
//         {
//             if(s1->ele[i].j < s2->ele[j].j){
//                 sum->ele[k++] = s1->ele[i++]; 
//             }
//             else if(s1->ele[i].j > s2->ele[j].j){
//                 sum->ele[k++] = s2->ele[j++]; 
//             }
//             else
//             {
//                 sum->ele[k] = s1->ele[i];
//                 sum->ele[k++].x = s1->ele[i++].x + s2->ele[j++].x;
//             }
//         }
//     }
 
//     for(; i<s1->num; i++){
//         sum->ele[k++] = s1->ele[i];
//     }
//     for(; j<s2->num; j++){
//         sum->ele[k++] = s2->ele[j];
//     }

//     sum->m = s1->m;
//     sum->n = s1->n;

//     sum->num =  k;

//     return sum;
// }

// // int main() {
//     struct Sparse s1, s2, *s3;

//     create(&s1);
//     create(&s2);

//     s3 = add(&s1, &s2);

//     if(s3 == NULL)
//     {
//         printf("Matrices cannot be added.\n");
//         return 0;
//     }


//     printf("First Matrix\n");
//     display(s1);

//     printf("Second Matrix\n");
//     display(s2);

//     printf("Sum Matrix\n");
//     display(*s3);

//     free(s3->ele);
//     free(s3);

//     return 0;
// }


//Code Polynomial
struct Term
{
    int coeff;
    int exp;
};
struct Poly
{
    int n; 
    struct Term *terms; // take * bwz i dont know how many term is there
};

void create(struct Poly *p)
{
    int i;
    printf("Number of terms ? ");
    scanf("%d", &p->n);
    p->terms = (struct Term *)malloc(p->n*sizeof(struct Term));

    printf("Enter terms\n");
    for(i=0; i<p->n; i++) {
        scanf("%d%d", &p->terms[i].coeff, &p->terms[i].exp);
    }
}

void display(struct Poly p) 
{
    int i;
    for(i=0; i<p.n; i++) {
        printf("%dx%d+", p.terms[i].coeff, p.terms[i].exp);
    }
    printf("\n");
} 

struct Poly *add(struct Poly *p1, struct Poly *p2) 
{
    int i, j, k;
    struct Poly *sum;
    sum = (struct Poly *)malloc(sizeof(struct Poly));
    sum->terms = (struct Term *)malloc((p1->n + p2->n)* sizeof(struct Term));
    i=j=k=0;

    while(i<p1->n && j<p2->n)
    {
        if(p1->terms[i].exp > p2->terms[j].exp) {
            sum->terms[k++] = p1->terms[i++];
        }
        else if(p1->terms[i].exp < p2->terms[j].exp) {
            sum->terms[k++] = p2->terms[j++];
        }
        else {
            sum->terms[k].exp = p1->terms[i].exp;
            sum->terms[k++].coeff = p1->terms[i++].coeff + p2->terms[j++].coeff;
        }
    }
    for(;i < p1->n; i++) sum->terms[k++]=p1->terms[i];
    for(;j < p2->n; j++) sum->terms[k++]=p2->terms[j];

    sum->n = k;
    return sum;

}

int main() 
{
    struct Poly p1, p2, *p3;

    create(&p1);
    create(&p2);
    
    p3 = add(&p1, &p2);

    printf("\n");
    display(p1);

    printf("\n");
    display(p2);

    printf("\n");
    display(*p3);

    return 0;
}   