#include<string>
#include<cstring>
#include<iostream>

class Account {
private:
    double m_balance;
    std::string m_name;

public:
    Account();
    Account(double balance, std::string name);
    ~Account();

    void deposit(double amount);
    void withdraw(double amount);
};

Account::Account(){
    std::cout << "No-args constructor called: " << std::endl;
}

Account::Account(double balance, std::string name)
    : m_balance {balance}, m_name {name} {
        std::cout << "Overloaded constructor called: " << std::endl;

}

Account::~Account(){
    std::cout << "destructor called: " << std::endl;

}

void Account::deposit(double amount){
    std::cout << "amount to be deposited is: " << amount << " for: " << m_name << std::endl;

}

void Account::withdraw(double amount){
      std::cout << "amount to be withdrawd is: " << amount << " for: " << m_name << std::endl;
}


class Savings_account: public Account {
public:
    double int_rate;
    Savings_account();
    ~Savings_account();
    void deposit(double amount);
    void withdraw(double amount);
};

Savings_account::Savings_account()
    : int_rate {5.0} {
}

Savings_account::~Savings_account() {
    std::cout << "destructor for savings account called: " << std::endl;

}

void Savings_account::deposit(double amount){
    std::cout << "Savings Account deposit called with " << amount << std::endl;
}

void Savings_account::withdraw(double amount) {
    std::cout << "Savings Account withdraw called with " << amount << std::endl;
}



int main() {

    Account account {150.50, "Golam"};
    account.deposit(200.50);
    account.withdraw(150.50);

    Account *p_acc {nullptr};
    p_acc = new Account();
    p_acc->deposit(1000.0);
    p_acc->withdraw(500.0);
    delete p_acc;

    Savings_account sav_acc {};
    sav_acc.deposit(200);
    sav_acc.withdraw(220);

    Savings_account *p_sav_acc {nullptr};
    p_sav_acc = new Savings_account();
    p_sav_acc->deposit(1000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;
    
    return 0;
}