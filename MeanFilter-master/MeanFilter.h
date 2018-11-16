// проверка, что библиотека еще не подключена
#ifndef MeanFilter_h // если библиотека не подключена
#define MeanFilter_h // тогда подключаем ее
#include "Arduino.h"

// класс обработки сигналов
class MeanFilter {
  public:
    MeanFilter(float k);
    float filterAVG(float newValue);
    void setLast(float lastValue);
  private:
  	float _k;
  	float _newValue;
  	float _lastValue;
};

#endif