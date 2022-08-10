#include<iostream>

using namespace std;
// int main(){
//     int a[5];
//     for(int i=0;i<=5;i++){
//         cin>>a[i];
//     }
    
//     for(int i=0;i<=5;i++)
//         cout<<a[i];
    
// }

// int main(){
//     int n;
//     cout<<"How many Elements?";
//     cin>>n;

//     int a[n],count=0,key;
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }


//     cout<<"Enter an elements to find its frequency";
//     cin>>key;

//     for(int i=0;i<n;i++){
//         if(a[i]==key)
//             count++;
//     }
//     cout<<"frequency of "<<key<<"is"<<count;

// }

int main ()
{
  // an array with 5 rows and 2 columns.
  int a[5][2]; 
  for ( int i = 0; i < 5; i++ )//iterate rows
   for ( int j = 0; j < 2; j++ ) //iterate columns
   {
       cin>>a[i][j];
   }
  for ( int i = 0; i < 5; i++ )//iterate rows
   for ( int j = 0; j < 2; j++ ) //iterate columns
   {
     cout << "a[" << i << "][" << j << "]: ";
     cout << a[i][j]<< endl;
   }
}
