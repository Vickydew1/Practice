// #include<iostream>
// #include<string.h>
// using namespace std;


// struct student
// {
//     char name[20];
//     int rollno;
//     float mark;
// };

// int main(){
//     struct student s1 ={"khushi",4,45.0};
//     struct student s2;

//     cout <<"Enter Student name"<<endl;
//     cin>>s2.name;

//     cout <<"Enter Student Rollno"<<endl;
//     cin>>s2.rollno;

//     cout <<"Enter Student mark"<<endl;
//     cin>>s2.mark;

//     return 0;
// }


//**************** 2 ***********//




// #include<iostream>
// using namespace std;

// struct student 
// {
//     int roll_no;
//     string name; 
//     int phone_number;
// };

// void display(struct student st)  //structure variable in function 
// {
//     cout << "Roll no : " << st.roll_no << endl; 
//     cout << "Name : " << st.name << endl; 
//     cout << "Phone no : " << st.phone_number << endl; 
// } 

// int main()
// { 
//     struct student s;  //memory allocated 
    
//     s.roll_no = 66; 
//     s.name = "Jim Halpert"; 
//     s.phone_number = 756888; 
    
//     display(s);  // function call with structure variable  
    
//     return 0;
// }