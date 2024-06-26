#pragma once
#include "event.h"

using namespace std;

class Object{
public:
	Object();
	virtual ~Object();

	virtual void Show() = 0;
	virtual void Input() = 0;
	virtual int HandleEvent(const TEvent& e) = 0;
};