#include "DoubleLinked.hpp"
#include "Hash.hpp"
#include <iostream>

using namespace std;

Hash::Hash(int val){
    this->bucket = val;
    cout << "make 0\n";
    this->table = new DoubleLinked[val];
    cout << "make 1\n";
}

Hash::~Hash(){
    delete[] table;
}

void Hash::insert(int key){
    int i = hashF(key);
    table[i].append(key);
    //cout << "insert\n";
}

void Hash::del(int key){
    int i = hashF(key);
    int loc = table[i].find(key);
    //cout << loc << endl;
    table[i].remove(loc);
}

int Hash::hashF(int val){
    return (val % this->bucket);
}