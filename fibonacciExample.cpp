#include <iostream>

using namespace std;

int main()
{
    int fibonacci_even {0};
    int num1 {1}; //Initial 1st Fibonacci term
    int num2 {1}; //Initial 2st Fibonacci term
    int test_num {0};
    
    cout << "Sum of even Fibonacci numbers up to 4,000,000." << endl;
    cout << "===================================================" << endl;
    
    //Generate the Fibonacci sequence and sum the even terms
    do {
        if (test_num % 2 == 0){
            fibonacci_even += test_num;
        }
        test_num = num1 + num2;
        num1 = num2;
        num2 = test_num;
    } while(test_num < 4000000);
    
    cout << "\n\nThe sum of the even terms is " << fibonacci_even << endl;
    
	return 0;
}
