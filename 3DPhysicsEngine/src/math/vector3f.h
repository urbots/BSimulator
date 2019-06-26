/**
 *      Author: Oussama El Azizi 
 */
#ifndef VECTOR3F_INCLUDE_H
#define VECTOR3F_INCLUDE_H
#include <stdexcept>

class Vector3f
{
public:
    Vector3f();
    
    Vector3f(float val []);

    Vector3f operator+(Vector3f vect);
    Vector3f operator-(Vector3f vect);
    Vector3f operator*(Vector3f vect);


    Vector3f operator*(float cnt);
    Vector3f operator+(float cnt);
    Vector3f operator-(float cnt);
    Vector3f operator/(float cnt);
private:
    float coord [3];
};
#endif