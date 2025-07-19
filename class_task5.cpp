// Employee Salary Teacher

#include <bits/stdc++.h>
using namespace std;

class emp {
    int salary, empid;
    public :
        string name,dept;
    emp(int emp,string n,string dep) {
        empid=emp;
        name=n;
        dept=dep;
    }
    void setsal(int val) {
        salary=val;
    }
    void getsal() {
        cout << "Salary is : " << salary << endl;
    }
    void display() {
        cout << "Employee Details\n" << "Name : " << name << endl << "Employee ID : " << empid << endl << "Department : " << dept << endl;
    }
};
int main() {
    emp e1(1,"Pavan","AIML");
    e1.setsal(500000);
    e1.getsal();
    e1.display();
}