#include<iostream>
#include<conio.h>
int main(){
int n ;
std::cout<<"Enter number of elements in an array";
std::cin>>n;

int a[n];

for(int i=0; i<=n; i++){
    cin>>a[i];

}
for(int i=0; i<=n; i++){
    cout<<a[i];
    
}
    return 0;
}