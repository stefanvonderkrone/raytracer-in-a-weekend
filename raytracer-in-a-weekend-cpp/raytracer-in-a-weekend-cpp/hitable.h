//
//  hitable.h
//  raytracer-in-a-weekend-cpp
//
//  Created by Stefan von der Krone on 07.09.18.
//  Copyright © 2018 Stefan von der Krone. All rights reserved.
//

#ifndef hitable_h
#define hitable_h

#include "ray.h"
#include "vec3.h"

struct hit_record {
    float t;
    vec3 p;
    vec3 normal;
};

class hitable {
public:
    virtual bool hit(const ray& r, float t_min, float t_max, hit_record& rec) const = 0;
};


#endif /* hitable_h */
