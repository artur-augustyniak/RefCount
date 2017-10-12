/* 
 * File:   Object.h
 * Author: aaugustyniak
 *
 * Created on 16 listopad 2014, 11:10
 */

#ifndef OBJECT_H
#define	OBJECT_H
#include <string>
#include <iostream>

class Object {
public:
    std::string ident;
    int refcount;
    
    void retain();
    void release();
    
    Object(const std::string& id);
    Object(const Object& orig);
    

    /**
     * toString 
     */
    friend std::ostream&
    operator<<(std::ostream& os, const Object& o) {
        return os << "[" << o.ident << "], rc = "
                << o.refcount;
    }
private:
    ~Object();
    //Object& operator=(const Object& rv);
};

#endif	/* OBJECT_H */

