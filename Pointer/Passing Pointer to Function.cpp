#include<iostream>
using namespace std;
int funct();
int main(){
    int a=5, b=10;
    int total = funct(a,b);
    cout<<total;
}
int funct(int *pa, int *pb){
    int total = *pa + *pb;
    cout << total;
}