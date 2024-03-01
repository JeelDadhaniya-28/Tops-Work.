//Write a program of to sort the array using templates

#include<iostream>
using namespace std;
template <class T>
void temp(T arr[5]);
template <class T>
void temp(T arr[5]) {
    int i, j;
    T tp;
    for (j=0; j<4; j++) {
        for (i=0; i<4; i++) {
            if (arr[i]>arr[i + 1]){
                tp=arr[i];
                arr[i]=arr[i + 1];
                arr[i+1]=tp;
            }
        }
    }
    for (i=0;i<5; i++) {
        cout <<"  "<<arr[i];
    }
    cout<<endl;
}

int main() {
    int a[5]={6, 2, 8, 3, 4};
    float b[5]={5.5, 7.2, 2.1, 4.3, 6.4};
    temp(a);
    temp(b);
}