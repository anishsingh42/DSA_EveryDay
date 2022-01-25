#include<bits/stdc++.h>
using namespace std;

//merge
void Merge(int arr[] , int left, int right){
    //find the mid
    int mid = left  +((right-left)/2);

    //create temp array
    int *tempArr = new int[right-left+1];
}
void mergeSort(int arr[], int left, int right){
    if(left < right){
        //find the mid form where we will obtain the leftPart and rightPart
        int mid = left  +((right-left)/2);

        //keep dividing the leftPart till only one element is remained
        //that is left==right
        mergeSort(arr,left,mid);

        //same for rightPart
        mergeSort(arr,mid+1,right);


        //after obtaining the leftPart and rightPart which is remaining 
        //merge the remaining
        Merge(arr, left, right);
    }
}

int main()
{

return 0;
}