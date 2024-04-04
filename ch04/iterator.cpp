#include <vector>
#include <iostream>
#include <string>

using namespace std;

vector<string::iterator> find_all(string& s, char c) 
{
    vector<string::iterator> res;
    for (auto p = s.begin(); p!=s.end(); ++p)
        if (*p == c)
            res.push_back(p);
    return res;
}

template<typename C, typename V>
vector<typename C::iterator> find_all(C& c, V v)
{
    vector<typename C::iterator> res;
    for (auto p = c.begin(); p!=c.end(); ++p)
        if (*p == v)
            res.push_back(p);
    return res;
}

template<typename T>
using Iterator = typename T::iterator;

template<typename C, typename V>
vector<Iterator<C>> find_all(C& c, V v)
{
    vector<iterator<C>> res;
    for (auto p = c.begin(); p != c.end(); ++p) {
        if (*p == v)
            res.push_back(p);
    }
    return res;
}