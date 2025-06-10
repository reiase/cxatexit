#include <cstdio>

class GlobalTest{
public:
    ~GlobalTest() {
        printf("GlobalTest destructor called\n");
    }
};

GlobalTest globalTest;