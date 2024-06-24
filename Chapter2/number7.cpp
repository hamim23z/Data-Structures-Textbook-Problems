// Write a C++ program that declares a throttle, shifts the throttle halfway up 
// (to the third position), and prints the current flow.

#include <iostream>
using namespace std;

class throttle {
    public:

    // MODIFICATION MEMBER FUNCTIONS
    void shutoff();
    void shift();

    // CONSTANT MEMBER FUNCTIONS
    double flow() const;
    bool ison() const;

    private:
    int position;
};

int main()
{
    throttle number7;
    number7.shutoff();
    number7.shift(3);
    cout << number7.flow() << endl;
}