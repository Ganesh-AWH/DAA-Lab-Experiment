#include<stdio.h>
void swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partitionFunc(int arr[],int low,int high){
    int i = low;
    int j = high;
    int pivot = arr[low];
    while(1){
        while(arr[i]<pivot && i<=high){i++;}
        while(arr[j]>pivot && j>=low){j--;}
        if(i>=j){
            // swap(&pivot,&arr[j]);
            printf("return - %d \n",arr[j]);
            return j;
        }
        printf("%d %d ",arr[i],arr[j]);
        swap(arr+i,arr+j);
    }
}
void quickSort(int arr[],int low,int high){
    if(low>high){
        return ;
    }
    int partition = partitionFunc(arr,low,high);
    quickSort(arr,low,partition-1);
    quickSort(arr,partition+1,high);
}
int main(){
    int size;
    printf("Enter the size of an array: ");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the array elements: ");
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,size-1);
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
}