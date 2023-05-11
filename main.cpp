#include <iostream>
#include <lista.h>

using namespace std;

template<class T>
void print(lista<T> &L)
{
    for(auto x: L)
    {
        cout << "\t" <<x;
    }
    cout << "\n";
}

int main()
{
    lista<double> L;

    L.push_back(3.5);
    L.push_back(7);
    L.push_back(10);
    L.push_back(15);
    L.push_back(4);

    print (L);
    auto x = L.begin();
    while(x != L.end())
        if((*x <= 8) && (*x >= 4))
            x = L.erase(x);
            else
            ++x;
    print(L);
}
