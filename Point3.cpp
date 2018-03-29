//Point3.cpp: Point3 struct implementation
#include "Point3.h"

void Point3::set( Point3& p ){

    x = p.x;
    y = p.y;
    z = p.z;
}

void Point3::set( float dx, float dy, float dz ){
    x = dx;
    y = dy;
    z = dz;
}

Point3::Point3(){
    x = y = z = 0;
}

Point3::Point3( float xx, float yy, float zz ){
    x = xx;
    y = yy;
    z = zz;
}

