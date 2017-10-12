/* 
 * File:   Object.cpp
 * Author: aaugustyniak
 * 
 * Created on 16 listopad 2014, 11:10
 */
//#include <stdlib.h>
#include "Object.h"

Object::Object(const std::string& id) : ident(id), refcount(1){
    std::cout << "Creating Object: " << *this << std::endl;
}

Object::Object(const Object& orig) {
}

Object::~Object() {
    std::cout << "Destroying Object: " << *this << std::endl;
}

void Object::retain(){
    refcount++;
}

void Object::release(){
    refcount--;
    if(0 == refcount){
        delete this;
    }
}
