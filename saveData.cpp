#include <QDialog>
#include <QLineEdit>
#include "saveData.h"

void Save::addEntry()
{
    qDebug()<<"hmm";
    Entry entry;
    entry.pageTitle = title();
    entry.webPage = page();
    entry.webLink = url();
    storage.append(entry);
    qDebug()<<"Stored "<<storage.last().pageTitle<<" and size is now "<<storage.size();
}

void Save::underline()
{
    if (!storage.isEmpty()) {
        if (url() == storage.last().webLink) {
            storage.last().underLines.append(selectedText());
            qDebug()<<"Added "<<selectedText()<<" to underlined passages in "<<storage.last().pageTitle;
        }
    }
    else {
        Entry entry;
        entry.pageTitle = title();
        entry.webPage = page();
        entry.webLink = url();
        entry.underLines.append(selectedText());
        storage.append(entry);
        qDebug()<<"Stored "<<storage.last().pageTitle<<" and size is now "<<storage.size();
    }
}
