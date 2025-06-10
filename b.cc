#include <cstdio>

class GlobalTestB{
public:
    ~GlobalTestB() {
        printf("GlobalTest B destructor called\n");
    }
};

GlobalTestB globalTest;