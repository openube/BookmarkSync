#ifndef SEARCHLISTVIEW_H
#define SEARCHLISTVIEW_H

#include <QFrame>
#include <QCompleter>

class QAbstractItemModel;

namespace Ui {
class SearchListView;
}

class SearchListView : public QFrame
{
    Q_OBJECT

public:
    explicit SearchListView(QWidget *parent = 0);
    ~SearchListView();

public:
    QAbstractItemModel* model();

signals:
    void urlSelected(const QString& url);

private slots:
    void onListItemSelected(const QModelIndex & index);
    void onFilterChanged(const QString &fliter);

private:
    Ui::SearchListView *ui;
    QCompleter *completer;
};

#endif // SEARCHLISTVIEW_H
