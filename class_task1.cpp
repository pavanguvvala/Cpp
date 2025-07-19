// Student Profile Manager

#include<bits/stdc++.h>
using namespace std;
class student {
    private :
        string roll_no;
        int marks;
    public :
        string name,branch;
    student (string n, string b,string roll) {
        name=n;
        branch=b;
        roll_no=roll;
    }
    void set_marks(int m) {
        marks=m;
    }
    void get_marks() {
        cout << "Marks are : " << marks << endl;
    }
    void complete_details() {
        cout << "Student name : " << name << endl << "branch : " << branch << endl << "Roll Number : " << roll_no << endl << "Marks : " << marks << endl;
    }
};
int main() {
    student s1("Pavan","AIML","24B11AI139");
    s1.set_marks(98);
    s1.get_marks();
    s1.complete_details();
}