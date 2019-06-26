#ifndef INTERSECT_DATA_INCLUDED_H
#define INTERSECT_DATA_INCLUDED_H

class IntersectData
{
public:
    IntersectData(const bool intersect, const float dist):
        m_intersect(intersect),
        distance(dist) {}
    inline bool IsIntersect() const { return m_intersect; }
    inline float GetDistance() const { return distance; }
private:
    const bool m_intersect;
    const float distance;
};
#endif