#include "StringKey.h"

StringKey::StringKey()
{
    //ctor
}

StringKey::~StringKey()
{
    //dtor
}


bool StringKey::operator==(const StringKey& pIntKey) const
{
    return lValue == pIntKey.lValue;
}
bool StringKey::operator<(const StringKey& pIntKey) const
{
    return  lValue < pIntKey.lValue;
}
 bool StringKey::operator>(const StringKey& pIntKey) const
 {
     return  lValue < pIntKey.lValue;
 }
