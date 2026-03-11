#include <stdio.h>

int main(){

    int x[]={9,16,27,34,49,52,63,78,91};

    int size = sizeof(x)/sizeof (int);

    int s,e,m,k,i;

    for (i=0;i<size;i++)
    printf("%d ",x[i]);

    printf("\n\n Enter a search key: ");
    scanf("%d",&k);

    s=0;
    e=size-1;

    while(s<=e){
        m=(s+e)/2;

        if(k==x[m])
            break;
        else if(k<x[m]) 
            e=m-1;
        else 
            s=m+1;
        
        
    }

    printf("\n the search key:%d is not found ......",k,s>e?"not " :"");
    return 0;
}

