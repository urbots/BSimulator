#include "vector3f.h"

Vector3f::Vector3f()
{
    coord[0] = 0;
    coord[1] = 0;
    coord[2] = 0;
}

Vector3f::Vector3f(float val[])
{
    for (int i=0; i < 3; i ++)
    {
        coord[i] = val[i];
    }
}

Vector3f Vector3f::operator+(Vector3f vect)
{
    float result[3];
    for (int i=0; i < 3 ; i++){
        result[i] = coord[i]+ vect.coord[i];
    }

    return Vector3f(result);
}


Vector3f Vector3f::operator-(Vector3f vect)
{
    float result[3];
    for (int i=0; i < 3 ; i++){
        result[i] = coord[i] - vect.coord[i];
    }

    return Vector3f(result);
}

Vector3f Vector3f::operator*(Vector3f vect)
{
    float result[3];
    result[0] = coord[1]*vect.coord[2]-coord[2]*vect.coord[1];
    result[1] = coord[0]*vect.coord[2]-coord[2]*vect.coord[0];
    result[2] = coord[0]*vect.coord[1]-coord[1]*vect.coord[0];

    return Vector3f(result);
}

Vector3f Vector3f::operator+(float cnt)
{
    float result[3];
    for (int i=0; i < 3 ; i++){
        result[i] = coord[i]+cnt;
    }

    return Vector3f(result);
}

Vector3f Vector3f::operator-(float cnt)
{
    float result[3];
    for (int i=0; i < 3 ; i++){
        result[i] = coord[i]-cnt;
    }

    return Vector3f(result);
}

Vector3f Vector3f::operator*(float cnt)
{
    float result[3];
    for (int i=0; i < 3 ; i++){
        result[i] = coord[i]*cnt;
    }

    return Vector3f(result);
}

Vector3f Vector3f::operator/(float cnt)
{
    float result[3];
    
    if (cnt = 0.0)
    {
        throw std::overflow_error("Divide by zero exception");
    }else{
        
        for (int i=0; i < 3 ; i++){
            result[i] = coord[i]/cnt;
        }
    }

    return Vector3f(result);
}