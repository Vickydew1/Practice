// #include<iostream>
// using namespace std;
// main()
// {
// int a=25;
// int *p=&a;//normal pointer
// int **p2=&p;//double pointer stores pointer address i.e p's addres
// int ***p3=&p2;//triple pointer stores address of double pointer i.e p3's address
// cout<<"a value is :"<<a<<endl;
// cout<<"a value using p:"<<*p<<endl;
// cout<<"a value using p2:"<<**p2<<endl;
// cout<<"a value using p3:"<<***p3<<endl;
// }

// #include<iostream>
// using namespace std;
// int main()
// {
// int arr[5]={1,2,3,4,5};
// int *ptr;
// cout << "Displaying address using arrays: " << endl;
// for (int i = 0; i < 5; ++i)
// {
// cout << "&arr[" << i << "] = " << &arr[i] << endl;
// }
// // ptr = &arr[0]
// ptr = arr;//assiing base address to pointer

// cout<<"\nDisplaying address using pointers: "<< endl;
// for (int i = 0; i < 5; ++i)
// {
// cout << "ptr + " << ptr + i << " = "<< *(ptr+i) << endl;//access by incerementing address
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// main(){
//     int a=24;
//     int *p=&a;
//     cout<<a<<*p;
//     a=45;//*p also changes 
// cout<<a<<*p;
// a=66;
// cout<<a<<*p; 

// }