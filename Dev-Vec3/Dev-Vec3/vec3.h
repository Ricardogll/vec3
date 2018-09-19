#ifndef _VEC_3_
#define _VEC_3_


template<class Type>

class vec3
{
public:
	Type x, y, z;


public:

	//Constructors

	vec3() { 
		x = 0;
		y = 0;
		z = 0;
	}

	vec3(const vec3 &v) {
		x = v.x;
		y = v.y;
		z= v.z;

	}

	vec3(const Type x, const Type y, const Type z) : x(x),y(y),z(z){}

	//Operators

	bool operator == (const vec3 &v1) const {

		return v1.x == x && v1.y == y && v1.z == z;
	}

	vec3<Type> operator + (const vec3 &v1) const {
		return vec3<Type>(x + v1.x, y + v1.y, z + v1.z);
	}

	vec3<Type> operator - (const vec3 &v1) const {
		return vec3<Type>(x - v1.x, y - v1.y, z - v1.z);
	}

	void operator += (const vec3 &v1) {
		x = x + v1.x;
		y = y + v1.y;
		z = z + v1.z;
	}

	void operator -= (const vec3 &v1) {
		x = x - v1.x;
		y = y - v1.y;
		z = z - v1.z;
	}

	void operator = (const vec3 &v1) {
		x = v1.x;
		y = v1.y;
		z = v1.z;
	}

	//Methods

	float normalize() const {
		return sqrt(x*x + y*y + z*z);
	}

	void zero() {
		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero() const {
		
		return (x == 0 && y == 0 && z == 0);
	}

	float distance_to(const vec3 &v1) const{
		vec3<Type> aux;
		aux.x = v1.x - x;
		aux.y = v1.y - y;
		aux.z = v1.z - z;

		return sqrt(aux.x*aux.x + aux.y*aux.y + aux.z*aux.z);
	}


	//Utilities

	void PrintVec3() {
		cout << "(" << x << ", " << y << ", " << z << ") " << std::endl;
	}


};



#endif // !_VEC_3_
