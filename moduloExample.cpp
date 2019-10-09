#include <iostream>

using namespace std;

int main()
{
    int total = 0;
    cout << "Sum of numbers below 1000 that are multiples of 3 or 5." << endl;
    cout << "===================================================" << endl;
    
    for(int i = 1; i < 1000; i++){
        if( (i % 3 == 0) || (i % 5 == 0)){ //is i divisible by 3 or 5
            total = total + i;
        }
    }
    
	cout << "\nSum = " << total << endl;
	return 0;
}
