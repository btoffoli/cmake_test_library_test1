#include <animals.hpp>

 const char* Animal::who_am_i() {
    return typeid(this).name();
 }