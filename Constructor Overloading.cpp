// Constructor Overloading
#include <iostream>
using namespace std;

class Sum {
public:
    Sum(int x, int y) {
        cout << "Integer Sum = " << (x + y) << endl;
    }
    Sum(float x, float y) {
        cout << "Float Sum = " << (x + y) << endl;
    }
};

int main() {
    int a, b;
    float c, d;
    
    cout << "Enter 1st integer for sum: ";
    cin >> a;
    cout << "Enter 2nd integer for sum: ";
    cin >> b;
    cout << endl;
    
    cout << "Enter 1st float for sum: ";
    cin >> c ;
    cout << "Enter 2nd float for sum: ";
    cin >> d;
    cout << endl;
    
    cout << "Results:" << endl;
    Sum s2(a, b);  
    Sum s3(c, d);  

    return 0;
}

// Output :-
Enter 1st integer for sum: 2
Enter 2nd integer for sum: 2

Enter 1st float for sum: 2.2
Enter 2nd float for sum: 2.2

Results:
Integer Sum = 4
Float Sum = 4.4


=== Code Execution Successful ===
