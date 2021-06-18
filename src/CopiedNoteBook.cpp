#include "CopiedNoteBook.h"

CopiedNoteBook::CopiedNoteBook()
{
    m_pCopyingListener = new CopyingListener(this);
    m_pNotebookWriting = new NotebookWriting();
}

CopiedNoteBook::~CopiedNoteBook()
{
    delete(m_pCopyingListener);
    delete(m_pNotebookWriting);
}

void CopiedNoteBook::onNewCopying(std::string text)
{
    m_pNotebookWriting->writeToNotebook(text);
}
