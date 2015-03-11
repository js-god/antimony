#ifndef TRIANGULATE_H
#define TRIANGULATE_H

#include "util/region.h"

#ifdef __cplusplus
extern "C" {
#endif

struct MathTree_;

void triangulate(struct MathTree_* tree, Region r,
                 float** const verts, unsigned* const count);

#ifdef __cplusplus
}
#endif

#endif
