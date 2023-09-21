#include<iostream>
using namespace std;
int prod(int &x,int &y,int &product){
    product = x*y;
    return 0;
}
int main(){
    int n;
    int m;
    cout<<"Enter the value of two numbers :  ";
    cin>>n>>m;
    int produc = 1;
    prod(n,m,produc);
    cout<<"The product of the two numbers is: "<<produc;

}