#include<iostream>
#include<string>
using namespace std;
class uni {
    public:
    string uni="Symbiosis: ";
    void discipline(){
        cout<<"engineering";
    }
};
class Dep:public uni {
    public:
    string dept="electronics and telecommunication";

};
int main(){
    Dep u1;
    u1.discipline();
    cout<<u1.uni+" "+u1.dept;
}