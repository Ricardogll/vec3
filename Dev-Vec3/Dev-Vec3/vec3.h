#ifndef _VEC_3_
#define _VEC_3_


template<class Type>

class vec3
{
public:
	Type x, y, z;

	
public:

	//Constructors

	vec3() {}

	vec3(const vec3 &vec) : x(vec.x), y(vec.y), z(vec.z) {}

	vec3(const Type x, const Type y, const Type z) : x(x),y(y),z(z){}

	//Operators

	bool operator == (const vec3 &vec) const {

		return vec.x == x && vec.y == y && vec.z == z;
	}

	vec3<Type> operator + (const vec3 &vec) const {

		return vec3<Type>(x + vec.x, y + vec.y, z + vec.z);
	}

	vec3<Type> operator - (const vec3 &vec) const {

		return vec3<Type>(x - vec.x, y - vec.y, z - vec.z);
	}

	void operator += (const vec3 &vec) {

		x = x + vec.x;
		y = y + vec.y;
		z = z + vec.z;
	}

	void operator -= (const vec3 &vec) {

		x = x - vec.x;
		y = y - vec.y;
		z = z - vec.z;
	}

	void operator = (const vec3 &vec) {

		x = vec.x;
		y = vec.y;
		z = vec.z;
	}

	//Methods

	float normalize() const {

		return sqrt(x*x + y*y + z*z);
	}

	void zero() {

		x = y = z = 0.0f;
	}

	bool is_zero() const {
		
		return (x == 0.0f && y == 0.0f && z == 0.0f);
	}

	float distance_to(const vec3 &vec) const {

		return sqrt((vec.x - x)*(vec.x - x) + (vec.y - y)*(vec.y - y) + (vec.z - z)*(vec.z - z));
	}

	float distance_to_squared(const vec3 &vec) const {

		return (vec.x - x)*(vec.x - x) + (vec.y - y)*(vec.y - y) + (vec.z - z)*(vec.z - z);
	}

	//Utilities

	void PrintVec3() {

		cout << "(" << x << ", " << y << ", " << z << ") " << std::endl;
	}


};



#endif // !_VEC_3_
