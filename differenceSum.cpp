#include <iostream>

using namespace std;


int main()
{
    int sum_squares {0};
    int square_sum {0};
    
    cout << "6. Difference between sum of the squares of 1 to 100" << endl;
    cout << "===================================================" << endl;
    
   
        int tmp {0};
        
        for(int i = 1; i < 101; i++){
           sum_squares += (i * i);
            tmp += i;
        }
        
       square_sum = tmp * tmp;
    
    
   cout << "\n\nThe sum of the squares is " << sum_squares << endl;
   cout << "The square of the sum is " << square_sum << endl;
   
   cout << "\n\nThe difference between the sum of the squares and " << endl;
   cout << "the the square of the sum is  " << square_sum - sum_squares << endl;
   return 0;
}
