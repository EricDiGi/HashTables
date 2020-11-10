#include <iostream>
#include "DoubleLinked.hpp"
#include "Hash.hpp"

using namespace std;

int main(){
    int a[] = {15, 11, 27, 8, 12};
    int n = 5;

    Hash table = Hash(8);

    for(int i = 0; i < n; i++){
        //cout << "boo";
        table.insert(a[i]);
    }

    table.del(15);

    cout << table;
}