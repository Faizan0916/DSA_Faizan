() {
    int A[] = {8, 3, 6, 4, 6, 5, 6, 8, 2, 7};
    int n = sizeof(A) / sizeof(A[0]);

    int lastduplicate = 0;

    for(int i=0; i<n-1; i++) {
        if(A[i]==A[i+1] && A[i] != lastduplicate) {
            cout << "Duplicate element is : " << A[i] << endl;
            lastduplicate = A[i];
        }
    }
    return 0;
}