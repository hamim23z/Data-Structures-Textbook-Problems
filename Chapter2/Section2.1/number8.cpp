// Add a new throttle member function that will return true if the current
// flow is more than half. The body of your implementation should activate 
// flow and use the guidelines for boolean values listed above.

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
    bool morethanhalf() const;

    private:
    int position;
};


/*
Below is the implementation file and the answer to number 8

// HERE I AM IMPLEMENTING THE MEMBER FUNCTION CALLED MORETHANHALF()
bool throttle::morethanhalf() const {
    return ((flow) > 0.5);
}

*/