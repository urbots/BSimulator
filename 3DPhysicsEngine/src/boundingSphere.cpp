#include "boundingSphere.h"

IntersectData BoundingSphere::IntersectBoundingSphere(const BoundingSphere& other)
{
    float radiusDst = r + other.r;
    float centDst = (other.GetCenter - m_center).length();

    return IntersectData(centDst < radiusDst, centDst-radiusDst);
}