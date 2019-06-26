#include "boundingSphere.h"
#include <iostream>



int main()
{
    BoundingSphere sphere1(Vector3f(0.0f, 0.0f,0.0f) , 1.0f);
    BoundingSphere sphere2(Vector3f(0.0f, 3.0f,0.0f) , 1.0f);
    BoundingSphere sphere3(Vector3f(0.0f, 0.0f,2.0f) , 1.0f);
    BoundingSphere sphere4(Vector3f(1.0f, 0.0f,0.0f) , 1.0f);

    IntersectData intersect1 = sphere1.IntersectBoundingSphere(sphere2);
    IntersectData intersect2 = sphere1.IntersectBoundingSphere(sphere3);
    IntersectData intersect3 = sphere1.IntersectBoundingSphere(sphere4);

    std::cout << " Intersect Sphere 1 and 2: " << intersect1.IsIntersect()
              << ", Distance : "               << intersect1.GetDistance() << std::endl;
    std::cout << " Intersect Sphere 1 and 3: " << intersect2.IsIntersect()
              << ", Distance : "               << intersect2.GetDistance() << std::endl;
    std::cout << " Intersect Sphere 1 and 4: " << intersect3.IsIntersect()
              << ", Distance : "               << intersect3.GetDistance() << std::endl;
    return 0;
}