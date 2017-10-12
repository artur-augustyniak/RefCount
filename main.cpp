/* 
 * File:   main.cpp
 * Author: aaugustyniak
 *
 * Created on 16 listopad 2014, 11:10
 */

#include <cstdlib>

#include "Object.h"

using namespace std;


/*
 * 
 */
int main(int argc, char** argv) {
    Object* a = new Object("test");
    
    a->retain();
    //a->retain();
    a->release();
    
    a->release();
    return 0;
}

