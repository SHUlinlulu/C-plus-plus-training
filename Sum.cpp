#include<iostream>
#define MAX 5
using namespace std;
int main(){
    int a[5]={10,2,4,3,-9};
    int sum=0;
    for(int i=0;i<MAX;i++){
        sum+=a[i];
    }
    cout<<"The sum of 5 integer numbers is "<<sum<<endl;
}