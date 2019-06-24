#include "SimpleModule.h"

String SimpleModule::CutInHalf(String s) {
	return s.substring(0, (s.length() / 2));
}

String SimpleModule::DoubleIt(String s) {
	return s + s;
}