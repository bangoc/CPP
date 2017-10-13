#ifndef FOO_H_
#define FOO_H_

#include "shared_exports.h"

SHARED_EXPORTS int Sum(int a, int b);

class SHARED_EXPORTS C {
public:
	void SaySmth();
};

#endif
