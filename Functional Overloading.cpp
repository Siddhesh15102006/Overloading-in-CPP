// Area of Triangle. 
#include <iostream>
using namespace std;

class area {
public:
    int calc(int base, int height) {
        return 0.5*base*height;
    }
};

int main() {
    area a;
    int base , height; 
    
    cout << "Enter Base of your Triangle :- ";
    cin >> base;
    
    cout << "Enter Height of your Triangle :- ";
    cin >> height;
    
    cout << endl;
    
    cout << "Area of your triangle is :- " << a.calc(base,height)<<endl; 
    
    return 0;
}

// Output :-
Enter Base of your Triangle :- 10
Enter Height of your Triangle :- 10

Area of your triangle is :- 50


=== Code Execution Successful ===
