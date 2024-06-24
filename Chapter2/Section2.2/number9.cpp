// Use an inline function to rewrite the “halfway on” function from 
// Self- Test Exercise 8 on page 45.

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
    bool morethanhalf() const {return (flow() > 0.5);} // THIS IS THE ANSWER

    private:
    int position;
};

