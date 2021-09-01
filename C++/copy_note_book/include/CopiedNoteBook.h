#ifndef COPIEDNOTEBOOK_H
#define COPIEDNOTEBOOK_H

#include "CopyingListener.h"
#include "NotebookWriting.h"
#include "../interface/IOnCopyingListener.h"
#include <string>

class CopiedNoteBook : public IOnCopyingListener
{
    public:
        CopiedNoteBook();
        virtual ~CopiedNoteBook();

    protected:
        void onNewCopying(std::string text) override;

    private:
        CopyingListener* m_pCopyingListener;
        NotebookWriting* m_pNotebookWriting;
};

#endif // COPIEDNOTEBOOK_H
