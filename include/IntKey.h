#ifndef INTKEY_H
#define INTKEY_H

#include <BaseKey.h>


class IntKey : public BaseKey
{
    public:
        IntKey();
        IntKey(NullKey nullKey):BaseKey(nullKey) {}
        IntKey(int pValue){ lValue = pValue;}
        virtual ~IntKey();
        bool operator==(const IntKey& pIntKey) const;
        bool operator<(const IntKey& pIntKey) const;
        bool operator>(const IntKey& pIntKey) const;
    protected:
    private:
        int lValue;
};

#endif // INTKEY_H
