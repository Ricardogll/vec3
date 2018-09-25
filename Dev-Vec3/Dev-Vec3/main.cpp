#include <iostream>
//#include <stdio.h>
#include "vec3.h"

using namespace std;

int main() {

	vec3<int> v1;
	//v1.PrintVec3();

	v1.x = v1.y = v1.z = 2;
	vec3<int> v2(v1);
	v2.PrintVec3();
	
	vec3<float> v3(1.1, 2.2, 3.3);
	v3.PrintVec3();

	v1 = v1 + v2;
	v1.PrintVec3();

	v1 = v1 - v2;
	v1.PrintVec3();

	v1 -= v2;
	v1.PrintVec3();

	float f1=v2.normalize();
	cout << f1 << endl;

	if (v2.is_zero() == false)
	{
		v2.zero();
		if (v2.is_zero())
			cout << "is_zero and zero working alrigth\n";
	}

	v3.zero();
	vec3<float> v4;
	v4 = vec3<float>(2.2, 1.1, -4.4);
	float dist = 0;
	dist = v3.distance_to(v4);
	
	system("pause");
	return 0;
}