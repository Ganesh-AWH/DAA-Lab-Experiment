#include<stdio.h>
int main(){
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    int search;
    scanf("%d",&search);
    int index=-1;
    for(int i=0;i<size;i++){
        if(arr[i]==search){
            index=i;
        }
    }
    if(index==-1){
        printf("the element %d is not found",search);
    }else{
        printf("the element %d is found in the index %d",search,index);
    }
}