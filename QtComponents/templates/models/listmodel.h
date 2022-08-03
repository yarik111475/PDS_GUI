#ifndef LISTMODEL_H
#define LISTMODEL_H
#include <QAbstractListModel>

template<typename T>
class ListModel:public QAbstractListModel
{
public:
    ListModel(QObject* parent=nullptr);

    Q_INVOKABLE
    void setModelData(const std::vector<T> modelData);
    Q_INVOKABLE
    std::vector<T> getModelData()const;
    Q_INVOKABLE
    virtual void sorModelByColumn(int column, bool sortDirection)=0;

    virtual int rowCount(const QModelIndex& parent)const override;
    virtual QVariant data(const QModelIndex &index, int role) const=0;
    virtual QHash<int, QByteArray> roleNames() const=0;

private:
    std::vector<T> _modelData{};
};

template<typename T>
ListModel<T>::ListModel(QObject* parent):QAbstractListModel{parent}{
}

template<typename T>
void ListModel<T>::setModelData(const std::vector<T> modelData){
    _modelData.clear();
    _modelData=modelData;

    beginResetModel();
    endResetModel();
}

template<typename T>
std::vector<T> ListModel<T>::getModelData()const{
    return _modelData;
}

template<typename T>
int ListModel<T>::rowCount(const QModelIndex& parent) const{
    if(parent.isValid()){
        return 0;
    }
    return _modelData.size();
}
#endif // LISTMODEL_H
