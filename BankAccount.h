//
// Created by PC8 on 2024-05-01.
//

#ifndef BANKACCOUNT_BANKACCOUNT_H
#define BANKACCOUNT_BANKACCOUNT_H


class BankAccount {
private:
    std::string ownerName;
    int accountNumber;
    double balance;

public:

    BankAccount(std::string name, int number, double initialBalance) {
        ownerName = name;
        accountNumber = number;
        balance = initialBalance;


    }

    void printMenu() {

        std::cout << "**************************************" << std::endl;
        std::cout << "1. 금액 입금" << std::endl;
        std::cout << "2. 금액 출금" << std::endl;
        std::cout << "3. 잔액 조회" << std::endl;
        std::cout << "4. 종료" << std::endl;
        std::cout << "***************************************" << std::endl << std::endl;




    }

    // 임금 기능
    void deposit(double amount) {
        balance += amount;
        std::cout << amount << "원이 임금되었습니다." << std::endl << "현재 잔액: " << balance << "원" << std::endl;

    }


// 출금 기능
    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            std::cout << amount << "원이 출금되었습니다." << std::endl << "현재 잔액: " << balance << "원" << std::endl;
        } else {
            std::cout << "잔액이 부족합니다." << std::endl;
        }

    }

// 잔액 조회 기능
    void displayBalance() {
        std::cout << "현재 잔액: " << balance << "원" << std::endl;
    }


};

#endif //BANKACCOUNT_BANKACCOUNT_H
