#ifndef RAY_HPP
#define RAY_HPP


#include "vec3.hpp"


class Ray {
    public:
        Ray() {}
        Ray(const Point3& origin, const Vec3& direction)
            : orig(origin), dir(direction), tm(0)
        {}

        Ray(const Point3& origin, const Vec3& direction, double time)
            : orig(origin), dir(direction), tm(time)
        {}

        Point3 origin() const  { return orig; }
        Vec3 direction() const { return dir; }
        double time() const    { return tm; }

        Point3 at(double t) const {
            return orig + t*dir;
        }
    
    public:
        Point3 orig;
        Vec3 dir;
        double tm;
};


#endif  // RAY_HPP