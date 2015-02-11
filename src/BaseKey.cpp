#include "BaseKey.h"

BaseKey::BaseKey()
{
    //ctor
    lIsNull = false;
}

BaseKey::BaseKey(NullKey pNullKey)
{
    //ctor
    lIsNull = true;
}

BaseKey::~BaseKey()
{
    //dtor
}
