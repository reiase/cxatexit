#include <cstdlib>
#include <cstdio>

void exitHandler() {
    printf("Exit handler called\n");
}

class GlobalTestC{
public:
    GlobalTestC() {
        atexit(exitHandler);
    }
};

GlobalTestC globalTest;