#include <QWebView>
#include <QApplication>
#include <QShortcut>
#include <QKeySequence>
#include <QObject>
#include <QtCore>

class Save : public QWebView
{
Q_OBJECT
public:
    Save() { }
public slots:
    void addEntry();
    void underline();
private:
    struct Entry {
        QDate date;
        QStringList underLines;
        QString pageTitle;
        QUrl webLink;
        QWebPage *webPage;
        QStringList tags;
    };
    QList<Entry> storage;
};

