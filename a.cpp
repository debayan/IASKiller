#include "saveData.h"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    Save save;
    QShortcut shortcutSave(&save);
    shortcutSave.setKey(QKeySequence("Ctrl+s"));
    QShortcut shortcutUnderline(&save);
    shortcutUnderline.setKey(QKeySequence("Ctrl+n"));
    QObject::connect(&shortcutSave, SIGNAL(activated()), &save, SLOT(addEntry()));
    QObject::connect(&shortcutUnderline, SIGNAL(activated()), &save, SLOT(underline()));
    save.load(QUrl("http://beta.thehindu.com"));
    save.show();
    app.exec();
}
