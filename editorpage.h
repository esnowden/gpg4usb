/*
 *      textpage.h
 *
 *      Copyright 2008 gpg4usb-team <gpg4usb@cpunk.de>
 *
 *      This program is free software; you can redistribute it and/or modify
 *      it under the terms of the GNU General Public License as published by
 *      the Free Software Foundation; either version 2 of the License, or
 *      (at your option) any later version.
 *
 *      This program is distributed in the hope that it will be useful,
 *      but WITHOUT ANY WARRANTY; without even the implied warranty of
 *      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *      GNU General Public License for more details.
 *
 *      You should have received a copy of the GNU General Public License
 *      along with this program; if not, write to the Free Software
 *      Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 *      MA 02110-1301, USA.
 */

#ifndef EDITORPAGE_H
#define EDITORPAGE_H
#include <QPlainTextEdit>

class QVBoxLayout;
class QHBoxLayout;
class QString;
class QLabel;

class EditorPage : public QWidget
{
    Q_OBJECT

public:
    EditorPage(const QString &filePath = "", QWidget *parent = 0);
    const QString& getFilePath() const;
    void setFilePath(const QString &filePath);
    QPlainTextEdit *getTextPage();
    void showVerifyLabel(bool showLabel);
    void showNotificationWidget(QWidget *widget);

private:
    QPlainTextEdit *textPage;
    QVBoxLayout *mainLayout;
    QHBoxLayout *notificationWidgetLayout;
    QWidget *notificationWidget;
    QMenu *verifyMenu;
    QString fullFilePath;
    QLabel *verifyLabel;
    void setSaveState();

};

#endif // TEXTPAGE_H
