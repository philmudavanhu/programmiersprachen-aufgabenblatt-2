#ifndef MAT2_HPP //This checks if the header is already declared some else.
#define MAT2_HPP //This then difines the header if not defined already.
#include <iostream>

class Mat2
{
	public:
		//Constructors
	    
	    Mat2(); //default
	    //intialisation

		Mat2 & operator *=( Mat2 const & m);

};

	Mat2 operator *( Mat2 const & m1 , Mat2 const & m2 );


#endif//NAT2_HPP