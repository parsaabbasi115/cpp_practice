#include <iostream>
int main()
{
    //coin=$2 & $1 & $0.25 & $0.1 & $0.05 & $0.01  
    //for get number
    double amount;
    double s;
    int z;
    //start the operation
    std::cout << "Please enter number: ";
    std::cin >> amount;
    std::cout << "\nPlease wait....\n";
    //set the precision to 2
    std::cout.setf(std::ios::fixed);
    std::cout.precision(2);
    if
        (amount >= 2.0)
    {
        s = amount / 2.0;
        z = (int)s;
        amount = amount - (2.0 * z);
        std::cout << " $2.00 Toonies		X	" << z << "	(remaining: $" << amount << ")\n";
    }
    if
        (amount >= 1.0)
    {
        s = amount / 1.0;
        z = (int)s;
        amount = amount - (1.0 * z);
        std::cout << " $1.00 Loonies		X	" << z << "	(remaining: $" << amount << ")\n";
    }
    if
        (amount >= 0.25)
    {
        s = amount / 0.25;
        z = (int)s;
        amount = amount - (0.25 * z);
        std::cout << " $0.25 Quartes		X	" << z << "	(remaining: $" << amount << ")\n";
    }
    if
        (amount >= 0.1)
    {
        s = amount / 0.1;
        z = (int)s;
        amount = amount - (0.1 * z);
        std::cout << " $0.01 Dimes		X	" << z << "	(remaining: $" << amount << ")\n";
    }
    if
        (amount >= 0.05)
    {
        s = amount / 0.05;
        z = (int)s;
        amount = amount - (0.05 * z);
        std::cout << " $0.05 Nickels		X	" << z << "	(remaining: $" << amount << ")\n";
    }
    if
        (amount >= 0.01)
    {
        s = amount / 0.01;
        z = (int)s;
        amount = amount - (0.01 * z);
        if
            (amount >= 0.005)
        {
            amount = 0.0;
            z++;
        }
        std::cout << " $0.01 Pennies		X	" << z << "	(remaining: $" << amount << ")\n";
    }
}