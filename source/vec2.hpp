#ifndef VEC2_HPP //This checks if the header is already declared some else.
#define VEC2_HPP //This then difines the header if not defined already.
#include <iostream>

class Vec2
{
	public:
		//Constructors
	    
	    Vec2(); //default
	    Vec2(float x, float y); //intialisation

		Vec2& operator +=(Vec2 const& v);
		Vec2& operator -=(Vec2 const& v);
		Vec2& operator *=(float v);
		Vec2& operator /=(float v);

		float x;
		float y;

};

Vec2 operator +( Vec2 const & u , Vec2 const & v );
Vec2 operator -( Vec2 const & u , Vec2 const & v );
Vec2 operator *( Vec2 const & v , float s );
Vec2 operator /( Vec2 const & v , float s );
Vec2 operator *( float s , Vec2 const & v );


#endif