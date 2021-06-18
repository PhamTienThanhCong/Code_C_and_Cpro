#ifndef IONCOPYINGLISTENER_H_INCLUDED
#define IONCOPYINGLISTENER_H_INCLUDED

#include <string>

class IOnCopyingListener
{
    public:
        virtual void onNewCopying(std::string text) = 0;
};


#endif // IONCOPYINGLISTENER_H_INCLUDED
