#include<iostream>
using namespace std;
int partison(int *arr,int first,int last){
    int pi=arr[last];
   int i=first-1;
        for (int j=first;j<last;j++){
            if (arr[j]<pi){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[last]);
    return i+1;
    
}
void quick_sort(int *arr,int first,int last ){
    //base case...
    if (first>=last){
        return;
    }
    //Find the middle index using function
    int mi=partison(arr,first,last);//mi=Middle index
    //use a recersive function to create sort array before mi-1//
    quick_sort(arr,first,mi-1);
    //[use a recersive function to create sort array mi+1 to last]
    quick_sort(arr,mi+1,last);
}
int main (){
    int arr[]={5,1,5,3,5,7,9,1,6,1,588,41,6,1,7,2,6,1,80};
    int n=sizeof(arr)/sizeof(arr[0]);
    quick_sort(arr,0,n-1);
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
return 0;

}