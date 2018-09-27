#ifndef _VEC_3_
#define _VEC_3_


template<class TYPE>

class vec3
{
public:
	TYPE x, y, z;

	
public:

	//Constructors

	vec3() {}

	vec3(const vec3 &vec) : x(vec.x), y(vec.y), z(vec.z) {}

	vec3(const TYPE &x, const TYPE &y, const TYPE &z) : x(x),y(y),z(z){}

	//Operators

	bool operator == (const vec3 &vec) const {

		return vec.x == x && vec.y == y && vec.z == z;
	}

	vec3<TYPE> operator + (const vec3 &vec) const {

		return vec3<TYPE>(x + vec.x, y + vec.y, z + vec.z);
	}

	vec3<TYPE> operator - (const vec3 &vec) const {

		return vec3<TYPE>(x - vec.x, y - vec.y, z - vec.z);
	}

	vec3 operator += (const vec3 &vec) {

		x += vec.x;
		y += vec.y;
		z += vec.z;
		return *this;
	}

	vec3 operator -= (const vec3 &vec) {

		x -= vec.x;
		y -= vec.y;
		z -= vec.z;
		return *this;
	}

	vec3 operator = (const vec3 &vec) {

		x = vec.x;
		y = vec.y;
		z = vec.z;
		return *this;
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

		return sqrtf((vec.x - x)*(vec.x - x) + (vec.y - y)*(vec.y - y) + (vec.z - z)*(vec.z - z));
	}

	TYPE distance_to_squared(const vec3 &vec) const {

		return (vec.x - x)*(vec.x - x) + (vec.y - y)*(vec.y - y) + (vec.z - z)*(vec.z - z);
	}


};



#endif // !_VEC_3_
