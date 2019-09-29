#include <iostream>
#include <cstring>


struct infla
{
    std::string name;
    float volume;
    double price;
};

enum spec {red,orange};

int main()
{
    using namespace std;
    int updates = 6;
    int * p_updates = new int;
    // p_updates = &updates;
    delete p_updates;

    cout << "update address is " << &updates << " or " << p_updates;

    cout << "update value is " << updates << "or " << *p_updates << endl;

    return 0;
    
}

int add (int n, int m){
    return n + m;
}
