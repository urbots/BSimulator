#ifndef BOUDNING_SPHERE_INCLUDED_H
#define BOUDNIGN_SPHERE_INCLUDED_H

#include "math/math3d.h"
#include "intersectData.h"
class BoundingSphere
{
public:
    BoundingSphere(const Vector3f& center, float radius):
        m_center(center),
        r(radius){}
    
    IntersectData IntersectBoundingSphere(const BoundingSphere& other);

    inline const Vector3f& GetCenter()   const { return m_center; }
    inline const float GetRadius()      const { return r; }
private:
    const Vector3f m_center;
    const float r;

};
#endif