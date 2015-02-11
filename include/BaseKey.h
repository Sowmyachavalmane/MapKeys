#ifndef BASEKEY_H
#define BASEKEY_H

#include<NullKey.h>
class BaseKey
{
    public:
        BaseKey();
        BaseKey(NullKey);
        bool IsNull() const { return lIsNull; }
        virtual ~BaseKey();
    protected:
    private:
        bool lIsNull;
};

#endif // BASEKEY_H
