#include<iostream>
using namespace std;

float findaverage(int arr[],int size) {

float sum = 0;
for (int i = 0; i< size; i++){
    sum += arr[i];
}
return sum / size;

}
int main () {
int n;

cout<< "enter number: ";
cin>>n;

int arr[n];

cout<< "enter "<< n << "elements: ";
for (int i = 0; i < n; i++ ){
    cin>>arr[i];
}
float average = findaverage (arr, n);
cout<< "the average value: "<<average<< endl;
return 0;
}
