#include <stdio.h>
int main(){
    
    int count=0;
    int i=0,j=0;
    int sum=0;
    int n=0;
    int a[255];

    printf("Enter the size of array: ");
    scanf("%d",&n);
    printf("\nEnter the Sum to be searched: ");
    scanf("%d",&sum);
    printf("\nEnter the elements of the array of size %d: ",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(a[i]+a[j]==sum){
                printf("[%d,%d]\n",a[i],a[j]);
                count++;
            }
        }
    }
    printf("Count: %d",count);
    return 0;
}

// won against mohan because of genralization
