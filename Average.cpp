#include<iostream>
using namespace std;

int main(){
    int arr[5]={12,4,36,45,7};
    double ave=0.0;
    int sum=0;
    for(int i=0;i<5;i++){
        sum+=arr[i];
    }
    ave=(double)sum/5;//强制类型转换
    cout <<"The Bytes of int type are "<<sizeof(int)<<endl;
    cout <<"The Bytes of double type are "<<sizeof(double)<<endl;
    cout <<"The average of 5 integer number is "<<ave<<"\n";
    
    return 0;
}