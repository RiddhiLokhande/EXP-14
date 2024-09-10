# Experiment---14 

### Aim 

### Software 

### Theory 

### Code 
(A) <br> 
```cpp
// NAME - RIDDHI LOKHANDE
// PRN - 23070123107
// EXPERIMENT - 14(A)  

# include <iostream>
# include <string>
using namespace std;

class Uni
{
    public:
    string uni= "Symbiosis";
    void discipline()
    {
        cout << "Engineering" <<endl;
    }
};
class Dep : public Uni
{
    public:
    string dept= " Electronics & Telecommunication";
};
int main()
{
    Dep u1;
    u1.discipline();
    cout<<u1.uni + " "+u1.dept ;
} 

```

(B) <br> 
```cpp
// NAME - RIDDHI LOKHANDE 
// PRN - 23070123107
// EXPERIMENT - 14(B) 

#include<iostream> 
#include<string> 
using namespace std; 

// Parent CLass1 
class Vehicle {
    public:
    string company=" Ford";
    void type(){
        cout << "Mustang"<< endl;
    }
};
// Parent Class 2
class Specs{
    public:
    string mileage="8 kmpl";
    void colour(){
        cout<<"Grey"<<endl;
    }
};
// Child Class-1 (derived from parent- 1&2)
class Car: public Vehicle,public Specs{
    public:
    string seater = " 4 seater";
};
int main(){
    //multiple inheritance
    Car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE:"<<f2.mileage<<endl;
} 

```

(C) <br> 
```cpp
// NAME - RIDDHI LOKHANDE
// PRN - 23070123107
// EXPERIMENT - 14(C) 

#include<iostream> 
#include<string>
using namespace std; 

// single base class
class Student {
public:
    string stud;
    void get_Student_data()
    {
        cout << "Enter the name of the student: ";
        cin >>  stud;
    }
};
 
// derived class from base class
class PRN : public Student {
public:
    int prn;
    void get_PRN_data()
    {
        cout << "Enter the PRN: ";
        cin >> prn;
    }
};
 
// derived from class derive1
class Branch : public PRN {
private:
   string branch;
 
public:
    void get_Branch_data()
    {
        cout << "Enter the branch: ";
        cin >> branch;
    }
 
    // function to print sum
    void details()
    {
        cout << "Name: "<<stud<<"  PRN: "<< prn<<"  Branch: "<<branch << endl;
    }
};
int main()
{
    // object of sub class
    Branch obj;
 
    obj.get_Student_data();
    obj.get_PRN_data();
    obj.get_Branch_data();
    obj.details();
    return 0;
}                                     
```

(D) <br> 
```
```

### Output 
(A) <br>  
![](https://github.com/Shloka-Patel/Experiment---14/blob/main/Output_14A.png) 

(B) <br> 
![](https://github.com/Shloka-Patel/Experiment---14/blob/main/Output_14B.png) 

(C) <br> 
![](https://github.com/Shloka-Patel/Experiment---14/blob/main/Output_14C.png) 

(D) <br> 
![]() 

### Conclusion 
