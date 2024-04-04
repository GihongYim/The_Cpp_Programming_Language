#include <iostream>
#include <string>
#include <iterator>
using namespace std;

int main(void)
{
    ostream_iterator<string> oo (cout);
    *oo = "Hello, ";
    ++oo;
    *oo = "world!\n";
    return 0;
}