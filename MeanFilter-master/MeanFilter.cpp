#include "Arduino.h"
#include "MeanFilter.h"

MeanFilter::MeanFilter(float k){
	_k = k;
	_lastValue = 0;
	_newValue = 0;
}

float MeanFilter::filterAVG(float newValue){
	return (1-_k)*_lastValue + _k*newValue;
}

void MeanFilter::setLast(float lastValue){
	_lastValue = lastValue;
}