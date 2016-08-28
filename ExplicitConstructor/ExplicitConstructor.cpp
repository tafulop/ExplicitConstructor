// ExplicitConstructor.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "iostream"

using namespace std;

class Foo {

private:
	int m_i;

public:
	 explicit Foo(int i) {
		m_i = i;
	}
};

void fn(Foo x) {}

int main()
{
	// would be fine without "explicit" keyword
	// fn(1); 

	// more approriate, no implicit conversion
	fn(Foo(1));

    return 0;
}

