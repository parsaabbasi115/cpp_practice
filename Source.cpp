#include <iostream>
int main()
{
    //coin=100 & 200
    //cash=1000 & 2000 & 5000 & 10000
    //for get number
    long amount;// change "a" to amount 
    long s;
    //start the operation
    std::cout << "Please enter number" << "\n";
    std::cin >> amount;
    std::cout << "Please wait....";
    if
        (amount >= 10000)
    {
        s = amount / 10000;
        std::cout << "\n" << s << "*10000";
        amount = amount % 10000;//asign directly to "a"
    }
    if
        (amount >= 5000)
    {
        s = amount / 5000;
        std::cout << "\n" << s << "*5000";
        amount = amount % 5000;
    }
    if
        (amount >= 2000)
    {
        s = amount / 2000;
        std::cout << "\n" << s << "*2000";
        amount = amount % 2000;
    }
    if
        (amount >= 1000)
    {
        s = amount / 1000;
        std::cout << "\n" << s << "*1000";
        amount = amount % 1000;
    }
    if
        (amount >= 500)
    {
        s = amount / 500;
        std::cout << "\n" << s << "*500";
        amount = amount % 500;
    }
    if
        (amount >= 200)
    {
        s = amount / 200;
        std::cout << "\n" << s << "*200";
        amount = amount % 200;
    }
    if
        (amount >= 100)
    {
        s = amount / 100;
        std::cout << "\n" << s << "*100";
        amount = amount % 100;
    }
    if
        (amount % 100 > 0)
    {
        std::cout << "\n" << amount << "*1";
        std::cout << "\n" << "Good bye";
    }
    else
            std::cout << "\n" << "its finish" << "\n";
}