#include<stdio.h>

// //find length of a string
// int main() {
//     char s[] = "welcome";
//     int i;

//     for(i=0; s[i] != '\0'; i++) {
//     }
//     printf("Length is %d ", i);
//     return 0;
// }

// //Changing case of a string
// int main() {
//     char A[] = "welcome";
//     int i;

//     for(i=0; A[i] != '\0'; i++){
//         A[i] = A[i] - 32;
//     }
//     printf("%s", A);
//     return 0;
// }


//2nd method
// int main() {
//     char A[] = "WeLcOmE";
//     int i;

//     for(i=0; A[i] != '\0'; i++) {
//         if(A[i] >= 65 && A[i] <= 90) {
//             A[i] += 32;
//         }
//         else if(A[i] >= 'a' && A[i] <= 122) {
//             A[i] -= 32;
//         }
//     }
//     printf("%s", A);
// }

//counting vowels and consonents in a string
// int main() {
//     char A[] = "How are you";
//     int i;
//     int Vcount = 0, Ccount=0; 

//     for(i=0; A[i] != '\0'; i++) {
//         if(A[i]=='a'||A[i]=='e'||A[i]=='i'||A[i]=='o'||A[i]=='u'||A[i]=='A'||A[i]=='E'||A[i]=='I'||A[i]=='O'||A[i]=='U'){
//             Vcount++;
//         }
//         else if(A[i]>=65 && A[i]<=90 || A[i]>=97 && A[i]<=122){
//             Ccount++;
//         }
//     }
//     printf("Vowels = %d\nConsonents = %d" , Vcount, Ccount);
//     return 0;
// }

// //find word in a string
// int main() {
//     char A[] = "How are you babe and what are you doing";
//     int i , word=1;

//     for(i=0; A[i] != '\0'; i++) {
//         if(A[i] == ' ' && A[i-1] != ' ') {
//             word++;
//         }
//     }
//     printf("%d", word);
// }

//Validation a string 
// int valid(char *name) {
//     int i;
//     for(i=0; name[i] != '\0'; i++) {
//         if(!(name[i] >=65 && name[i] <=90) && !(name[i] >=97 && name[i] <= 122) && !(name[i]>=48 && name[i] <= 57))
//         {
//             return 0;
//         }
//     }
//     return 1;
// }

// int main() {
//     char *name = "Ani123";
//     if (valid(name)) {
//         printf("valid string\n");
//     }
//     else {
//         printf("Invalid string\n");
//     }
//     return 0;
// }

// //Reversing a string
// int main() {
//     char A[] = "python";
//     char B[7];
//     int i, j;

//     for(i=0; A[i] != '\0'; i++) 
//     {     
//      }
//     i = i-1;
//     for(j=0; i>=0; i--, j++) {
//         B[j] = A[i];
//     }
//     B[j] = '\0';
//     printf("%s ", B);
// } 

//2nd method-- not required extra array
// int main() {
//     char A[] = "python";
//     char B[7], t;
//     int i,j;

//     for(i=0; A[i]!='\0'; i++) {
//     }
//     j=i-1;

//     for(i=0; i<j; i++, j--) {
//         t = A[i];
//         A[i] = A[j];
//         A[j] = t;
//     }
//     printf("%s", A); 
// } 

// // Comparing string and checking palindrome
// int main() {
//     char A[] = "paintingz";
//     char B[] = "painting";
//     int i, j;

//     for(i=0,j=0; A[i]!='\0', B[i]!='\0'; i++, j++){
//         if(A[i] != B[j]) {
//             break;
//         }
//     }
//     if(A[i] == B[j]) {
//         printf("Equal ");
//     }
//     else if(A[i] < B[j]) {
//         printf("smaller ");
//     }
//     else {
//         printf("Greater ");
//     }
// }

// // //Palindrome
// int main() {
//     char A[] = "mawedam";
//     char B[10];
//     int i,j;

//     for(i=0; A[i]!='\0'; i++) {
//     }
//     i=i-1;

//     for(j=0; i>=0; i--, j++) {
//         B[j] = A[i];
//     }

//     B[j]='\0';

//     for(i=0, j=0; A[i]!='\0'; i++,j++){
//         if(A[i] != B[j])
//         {
//             printf("Not Palindrome");
//             return 0;
//         }
//     }
//     printf("Palindrome");
//     return 0;
// } 

// // //two pointer technique
// int main() {
//     char A[] = "vermax";
//     int i, j;

//     for(i=0; A[i]!='\0'; i++){

//     }
//     j=i-1;

//     for(i=0; i<j; i++, j--) {
//         if(A[i] != A[j]) {
//             printf("Not palindrome");
//             return 0;
//         }
//     }
//     printf("palindrome");
//     return 0;
// }

// //find duplicate in a string using hashing
// int main() {
//     char A[] = "finding";
//     int H[26] = {0};

//     for(int i=0; A[i]!='\0'; i++){
//         H[A[i]-'a']++;
//     }

//     for(int i=0; i<26; i++) {
//         if(H[i] > 1) 
//         {
//             printf("%c appears %d times\n", i + 'a', H[i]);
//         }
//     }
//     return 0;
// }

// //find duplicate in a string using bitwise operation
// int main() {
//     char A[] = "finding";
//     long int H=0, x=0;

//     for(int i=0; A[i]!='\0'; i++) {
//         x=1;

//         x = x << (A[i]-'a');

//         if((x & H) > 0){
//             printf("%c is duplicate\n", A[i]);
//         }
//         else {
//             H = x | H;
//         }
//     }
//     return 0;
// }

// //check for anagram -? Anagram ar two set of strings which are formed using same set of alphabets.
// // eg. decimal nd medical
// int main() {
//     char A[] = "decimal";
//     char B[] = "medical";
//     int i;
//     int H[26] ={0};

//     for(i=0; A[i]!='\0'; i++) {
//         H[A[i]-97] += 1;
//     }
    
//     for(i=0; B[i]!='\0'; i++) {
//         H[B[i]-97] -= 1;
//         if(H[B[i]-97] < 0) {
//             printf("Not Anagram");
//             break;
//         }
//     }
//     if(B[i]=='\0') {
//         printf("Its an Anagram");
//     }
// }

//Permutation of string -> state space tree (backtracking) (if u go back and take another root thats recursion)
void perm(char s[], int k) {
    static int A[10] = {0};
    static char Res[10];
    int i;

    if(s[k] == '\0') {
        Res[k] = '\0';
        printf("%s\n", Res);
    }
    else {
        for(i=0; s[i]!='\0'; i++) {
            if(A[i] == 0) {
                Res[k] = s[i];
                A[i] = 1;
                perm(s, k+1);
                A[i] = 0;
            }
        }
    }
}

int main() {
    char s[] = "ABC";

    perm(s, 0);
    return 0;
}