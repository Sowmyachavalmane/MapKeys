#ifndef MAPKEY_H
#define MAPKEY_H

template<class T1, class T2>
class MapKey
{
    public:
        MapKey();
         MapKey(T1 pPprimKey, T2 pSecKey );
         bool operator==(const MapKey& pMapKey) const;
        bool operator<( const MapKey& pMapKey) const;
        bool operator>(const MapKey& pMapKey) const;
        virtual ~MapKey();
    protected:
    private:
        T1 lPrimKey;
        T2 lSecKey;
};

template<class T1, class T2>
MapKey<T1,T2>::MapKey()
{

}

template<class T1, class T2>
MapKey<T1,T2>::~MapKey()
{

}
template<class T1, class T2>
MapKey<T1,T2>::MapKey(T1 pPrimKey, T2 pSecKey):lPrimKey(pPrimKey),lSecKey(pSecKey)
{

}

template<class T1, class T2>
bool MapKey<T1,T2>::operator==(const MapKey<T1,T2>& pMapKey) const
{
    if (!pMapKey.lPrimKey.isNull())
        return lPrimKey == pMapKey.lPrimKey;
    else
         return lSecKey == pMapKey.lSecKey;
}


template<class T1, class T2>
bool MapKey<T1,T2>::operator<(const MapKey& pMapKey) const
{
    if (!pMapKey.lPrimKey.IsNull())
        return lPrimKey < pMapKey.lPrimKey;
    else
         return lSecKey < pMapKey.lSecKey;
}

template<class T1, class T2>
bool MapKey<T1,T2>::operator>(const MapKey& pMapKey) const
{
    if (!pMapKey.lPrimKey.isNull())
        return lPrimKey > pMapKey.lPrimKey;
    else
         return lSecKey > pMapKey.lSecKey;
}




#endif // MAPKEY_H
