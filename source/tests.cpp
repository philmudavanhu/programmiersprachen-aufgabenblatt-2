#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include "vec2.hpp"

TEST_CASE("Vec2","Vec2 test"){
	Vec2 v{0.0,1.0};
	// Vec2 v{3.0,4.0};
	// Vec2 v{8.8,1.0};
	// Vec2 v{7.0,10.0};
	// REQUIRE(v.x *= 0.0);
	// REQUIRE(v.x /= 0.0);
	// REQUIRE(v.x += 0.0)
	REQUIRE(v.x *= 0.0);;
}

int main(int argc, char *argv[])
{

	// Vec2 class definition
	/*class Vec2
	{
		public:

		Vec2 & operator +=( Vec2 const & v);
		Vec2 & operator -=( Vec2 const & v);
		Vec2 & operator *=( Vec2 const & v);
		Vec2 & operator /=( Vec2 const & v);
		Vec2 & operator *=( float v);
		Vec2 & operator /( float v);
		Vec2 & operator /=( float v);
		Vec2 & operator +=( float v);
		Vec2 & operator ==( float v);
	};*/

  return Catch::Session().run(argc, argv);
}
