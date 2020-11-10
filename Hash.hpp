#ifndef Hash_HPP
#define Hash_HPP

//using namespace std;

#include <iostream>
#include "DoubleLinked.hpp"

class Hash{
    private:
        int bucket;
        DoubleLinked *table;
    public:
        Hash(int val);
        ~Hash();
        void insert(int key);
        void del(int key);
        int hashF(int val);

        friend std::ostream &operator<<(std::ostream &out, const Hash &h){
            for(int i = 0; i < h.bucket; i++){
                out << i << ": " << h.table[i];
            }
            //out << "placeholder" << std::endl;
            return out;
        }
};



#endif