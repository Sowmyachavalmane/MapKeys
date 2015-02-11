#include "IntKey.h"

IntKey::IntKey()
{
    //ctor
}

IntKey::~IntKey()
{
    //dtor
}


bool IntKey::operator==(const IntKey& pIntKey) const
{
    return lValue == pIntKey.lValue;
}
bool IntKey::operator<(const IntKey& pIntKey) const
{
    return  lValue < pIntKey.lValue;
}
 bool IntKey::operator>(const IntKey& pIntKey) const
 {
     return  lValue < pIntKey.lValue;
 }
