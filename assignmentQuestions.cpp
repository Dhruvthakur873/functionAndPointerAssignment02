// //Question- 1 : Write a program to find out the product of two numbers using pointers.
// //Solution : This is given solution 

// #include <bits/stdc++.h>
// int main() {

//  int x, y;
//  cin >> x >> y;

//  int *ptrX, *ptrY;
//  ptrX = &x;
//  ptrY = &y;

//  int ans;
//  int *ptrAns = &ans;
//  *ptrAns = (*ptrX) * (*ptrY);

//  cout << *ptrAns << endl;

//  return 0;
// } 




// // This is my solution ...



// #include<iostream>
// using namespace std;
// int prod(int &x,int &y,int &product){
//     product = x*y;
//     return 0;
// }
// int main(){
//     int n;
//     int m;
//     cout<<"Enter the value of two numbers :  ";
//     cin>>n>>m;
//     int produc = 1;
//     prod(n,m,produc);
//     cout<<"The product of the two numbers is: "<<produc;
// }



//Quetion- 2 : int *p, q; What does both of these terms signify?

// Solution : in this *p is a pointer of int datatype and q is a int datatype;

// Question-3 : Predict the output of the following code snippet.

// int a = 10, b = 20;
// int *ptr = &a;
// b = *ptr + 1;
// ptr = &b;
// cout << *ptr << ‘ ‘ << a << ‘ ‘ << b;

// solution  : 11 10 11
// ptr points to a, b = a + 1 , so ptr points to b;

//Question -4: Predict the output of the following code snippet.
// int a = 15, b = 20;
// int *ptr = &a;
// int *ptr2 = &b;
// *ptr = *ptr2;

//solution:  (a) gets the value of b -> a = 20 

// Question - 5: 
//Predict the output of the following code snippet.
// int a = 10, b = 20;
// int *ptr;
// *ptr = 5;

//Solution : In this the pointer ptr not stores any address instead it stores the value 5;given  by  me ;

// Solution :
/* The program is correct and will compile but might result in runtime error.This is
because ptr will have a garbage address which might even point to a location which
does not belong to our program and hence might result in Segmentation Fault when we
are trying to access it.*/