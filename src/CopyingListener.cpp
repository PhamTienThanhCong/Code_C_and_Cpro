#include "CopyingListener.h"
#include <iostream>

CopyingListener::CopyingListener(IOnCopyingListener* listener)
    :m_pListener(listener)
{
    //std::cout << "CopyingListener: " << GetClipboardText();
    //m_pListener->onNewCopying(GetClipboardText());
    startListener();
}

CopyingListener::~CopyingListener()
{
    //dtor
}

void CopyingListener::startListener()
{
    std::string lastString;
    while(1){
        std::string newString = GetClipboardText();
        if (lastString != newString && newString != ""){
            lastString = newString;
            m_pListener->onNewCopying(newString);
        }
    }
}

std::string CopyingListener::GetClipboardText()
{
    std::string text_fault = "";
    // Try opening the clipboard
    if (! OpenClipboard(nullptr))
    {
        return text_fault;
    }
    // Get handle of clipboard object for ANSI text
    HANDLE hData = GetClipboardData(CF_TEXT);
    if (hData == nullptr)
    {
        return text_fault;
    }
    // Lock the handle to get the actual text pointer
    char * pszText = static_cast<char*>( GlobalLock(hData) );
    if (pszText == nullptr)
    {
        return text_fault;
    }
    // Save text in a string class instance
    std::string text( pszText );
    // Release the lock
    GlobalUnlock( hData );
    // Release the clipboard
    CloseClipboard();
    return text;
}
