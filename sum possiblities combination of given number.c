#include<stdio.h>


int main () {
    int i,j,k,l,m, n, count;
    printf("Enter the number : ");
    scanf("%d" , &n);

    
        
    
    for(i=0;i<=n; i++) {
        for(j=0;j<=n; j++) {
            for(k=0; k<=n; k++) {
            if( i + j + k == n) {
            if(i != 0 && j != 0 && k != 0) {
            printf("\n%d + %d + %d = %d\n" , i, j, k, n);
            count++;
                }
            
            }
            }
        }
    
}
}