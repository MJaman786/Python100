#include<iostream>
using namespace std;
void input(int arr[],int size){
    for (int i = 0; i < size; i++)
    {
        cin>>arr[i];
    }
    
}
int main(){
    int size;
    cout<<"Enter number of Items : ";
    cin>>size;
    int arr[size];
    cout<<"Enter X-elements :";
    input(arr,size);
    return 0;
}