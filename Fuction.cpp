// #include<iostream>
// using namespace std;
// int demo()//fun definition
// {
// cout<<"control acquired from main\n";
// // return 1;
// return 0;
// //error:multiple return types not allowed

// }
// main()
// {
// cout<<"before call control under main\n";
// cout<<"controltranmsferreed from main to demo\n"<<demo();
// cout<<"control return back from demo to main()\n";

// }

// #include<iostream>
// using namespace std;
// int demo()//fun definition
// {
// cout<<"control acquired from main\n";
// return 1;
// //return0;error:multiple return types not allowed

// }
// main()
// {
// cout<<"before call control under main\n";
// cout<<"controltranmsferreed from main to demo\n"<<demo();
// cout<<"control return back from demo to main()\n";

// }
// # include<iostream>
// using namespace std;
// void prime();//func_protoytype
// int main()
// {
// // No argument is passed to prime()
// prime();//func_call
// return 0;
// }
// // Return type of function is void because value is not returned.
// void prime()
// {
// int num, i, flag = 0;
// cout << "Enter a positive integer enter to check: ";
// cin >> num;
// for(i = 2; i <= num/2; ++i)
// {
// if(num % i == 0)
// {
// flag = 1; 
// break;
// }
// }
// if (flag == 1)
// cout << num << " is not a prime number.";
// else
// cout << num << " is a prime number.";

// }

#include<iostream>
using namespace std;
void fact();
main()
{
    fact();
    fact();

}
void fact(){
    int n;
    cout<<"Enter N value";
    cin>>n;
    long f=1;
    while(n==1)
    {
        f=f*n;
        n--;

    }
    cout<<"Factorial:"<<f;
}