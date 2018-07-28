#include<stdio.h>

int main(){
    int t;                                      //to read the value of test cases
    scanf("%d", &t);
    while(t--){                                 //run until test cases ends
        int n, k;                               //to scan the value of N and K
        scanf("%d %d", &n, &k);
        int A[n];                               //to read the array
        int i;
        for(i=0; i<n; ++i){
            scanf("%d", &A[i]);                 //read the elements of the array
        }
        int j;
        for(j=0; j<k; ++j){
            int dummy, l;                       //dummy to save the first element
            dummy=A[0];
            for(l=0; l<n-1; ++l){
                A[l]=A[l+1];                    //swapping
            }
            A[n-1]=dummy;                       //swap last element with the first element
        }
        for(i=0; i<n; ++i){
            printf("%d ", A[i]);                //print the output
        }
        printf("\n\n");
    }

    return 0;
}
