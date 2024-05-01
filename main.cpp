#include <iostream>
#include <string>

#include "BankAccount.h"

int main() {

    // 은행 계좌 생성
    BankAccount myAccount("John Doe", 123456, 1000.0);



    int number;
    double deposit;
    double withdraw;
    bool noEnd = true;
    int count;

    while(noEnd) {
        myAccount.printMenu();

        std::cout << "원하시는 번호를 선택해주세요: ";
        std::cin >> number;

        switch (number) {
            case 1:
                std::cout << "임금하실 금액을 입력해주세요: ";
                std::cin >> deposit;
                myAccount.deposit(deposit);
                break;
            case 2:
                std::cout << "출금하실 금액을 입력해주세요: ";
                std::cin >> withdraw;
                myAccount.withdraw(withdraw);
                break;
            case 3:
                myAccount.displayBalance();
                break;
            case 4:
                std::cout << "시스템을 종료합니다." << std::endl;
                noEnd = false;
                break;
            default:
                std::cout << "잘못된 번호입니다." << std::endl;
        }

    }




    return 0;
}

