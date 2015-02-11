#ifndef STRINGKEY_H
#define STRINGKEY_H

#include <BaseKey.h>
#include<string>

using namespace std;

class StringKey : public BaseKey
{
    public:
        StringKey();
        StringKey(NullKey nullKey):BaseKey(nullKey) {}
        StringKey(string pValue) { lValue = pValue;}
        StringKey(const char *pValue) { lValue = pValue;}

        bool operator==(const StringKey& pStrKey) const;
        bool operator<(const StringKey& pStrKey) const;
        bool operator>(const StringKey& pStrKey) const;
        virtual ~StringKey();
    protected:
    private:
        string lValue;
};

#endif // STRINGKEY_H
