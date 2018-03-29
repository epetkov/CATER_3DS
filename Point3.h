//Point3.h: Point3 struct interface
#ifndef POINT3_H_INCLUDED
#define POINT3_H_INCLUDED

struct Point3 {
    float x, y, z;
    Point3();
    Point3( float xx, float yy, float zz );
    void set( float dx, float dy, float dz );
    void set( Point3& p );
};

#endif // POINT3_H_INCLUDED
