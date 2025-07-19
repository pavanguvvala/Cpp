// Bank Account System

#include <bits/stdc++.h>
using namespace std;

class bankacc {
    private :
        int balance,acc_num;
    public :
        string name;
    bankacc(string n,int b,int acc) {
        name=n;
        balance=b;
        acc_num=acc;
    }
    void deposit(int am) {
        balance+=am;
        cout << "Amount - " << am << " deposited" << endl;
    }
    void withdraw(int am) {
        if (am<=balance) {
            balance-=am;
            cout << "Amount - " << am << " withdrawed" << endl;
        } 
        else {
            cout << "Insufficient balance" << endl;
        }
    }
    void check_bal() {
        cout << "Account holder Name : " << name << endl << "Account Number : " << acc_num << endl << "Account Balance : " << balance << endl;
    }

};
int main() {
    bankacc user("Pavan",1000,1111111);
    user.deposit(100);
    user.check_bal();
    user.withdraw(100);
    user.check_bal();
}