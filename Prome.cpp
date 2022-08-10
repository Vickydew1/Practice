// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     bool flags=0;

//     for(int i=2;i<n;i++)
//     {
//         if(n%i==0){
//             cout<<"Non-prime";
//             flags=1;
//             break;
//         }
//     }
//     if(flags==0){
//         cout<<"prime"<<endl;
//     }

//     return 0;
// }

// #include<iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int res=0;
//     while(n>0){
//         int last=n%10;
//         res= res*10 +last;
//         n=n/10;
//     cout<<res;
//     return 0;
// }

#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int n;
  cin>>n;

  int org = n;
  int sum=0;
  while(n>0){
      int last = n%10;
      sum+=pow(last,3);
      n=n/10;
  }
    if(sum==org){
        cout<<"This is Armstrong Number";
    }
    else{
        cout<<"Not Armstrong Number";
    }

    return 0;
}