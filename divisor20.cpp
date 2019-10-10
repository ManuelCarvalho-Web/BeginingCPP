#include <iostream>

using namespace std;

// smallest positive number that can be devided by all numbers
// from 1 to 20
int main()
{
    int notFound {true};
    int test_number = 20;
    int score = 0;
    
    cout << "5. Smallest number divisible by 1 to 20. " << endl;
    cout << "===================================================" << endl;
    
    while(notFound){
        
        test_number++;
        
        for(int i = 1; i < 21; i++){
            if(test_number % i == 0){
                score++;
            } 
        }
        
        if (score == 20){
            notFound = false;
        } else {
            score =0;
        }
    }
    
   cout << "\n\nThe number is " << test_number << endl;
    return 0;
}

