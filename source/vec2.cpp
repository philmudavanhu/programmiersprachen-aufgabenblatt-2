#include <iostream>
#include <utility>
#include <cmath>
#include "vec2.hpp"
#include <string>


Vec2::Vec2() : x(0), y(0)
{
}

Vec2::Vec2(float x, float y) : x(x), y(y)
{
}

Vec2 operator*(float v, const Vec2 & vec)
{
  Vec2 result(vec);
  result.x *= v;
  result.y *= v;
  return result;
}
int main(int argc, char const *argv[])
{
  /* code */
  return 0;
}