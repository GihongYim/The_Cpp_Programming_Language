#include <iostream>
#include <memory>
using namespace std;

void leaks()
{
    system("leaks a.out");
}

int main(void) {
    atexit(leaks);
    unique_ptr<int> sp {new int};
    int *ptr = new int;
    return 0;
}