#ifndef MATRIX_RENENGINE_SFW
#define MATRIX_RENENGINE_SFW

#include "vector.h"

typedef struct
{
  float m[4][4];
} mat4_t;

mat4_t mat4_identity(void);
mat4_t mat4_make_scale(float sx, float sy, float sz);
mat4_t inline mat4_make_scale_uniform(float s);
mat4_t mat4_matmul_mat4(mat4_t a, mat4_t b);
vec4_t mat4_matmul_vec(mat4_t m, vec4_t v);
mat4_t mat4_make_translation(float tx, float ty, float tz);
mat4_t mat4_make_rotation_x(float angle);
mat4_t mat4_make_rotation_y(float angle);
mat4_t mat4_make_rotation_z(float angle);
mat4_t mat4_look_at(vec3_t eye, vec3_t target, vec3_t up);

// Projection Matrices
mat4_t mat4_make_perspective(float fov, float aspect, float z_near, float z_far);

// Projection Functions
vec4_t mat4_matmul_vec_project(mat4_t mat_proj, vec4_t v);

#endif