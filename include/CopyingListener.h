#ifndef COPYINGLISTENER_H
#define COPYINGLISTENER_H

#include "../interface/IOnCopyingListener.h"
#include <windows.h>
#include <string>

class CopyingListener
{
    public:
        CopyingListener(IOnCopyingListener* listener);
        virtual ~CopyingListener();

    protected:

    private:
        IOnCopyingListener* m_pListener;

        std::string GetClipboardText();
        void startListener();
};

#endif // COPYINGLISTENER_H
