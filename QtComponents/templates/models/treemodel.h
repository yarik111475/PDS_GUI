#ifndef TREEMODEL_H
#define TREEMODEL_H
#include <QStandardItemModel>

template<typename T>
class TreeModel :public QStandardItemModel{
public:
    TreeModel(QObject* parent=nullptr);

    Q_INVOKABLE
    void setModelData(const std::vector<T> modelData);
    Q_INVOKABLE
    std::vector<T> getModelData()const;
    Q_INVOKABLE
    virtual void sorModelByColumn(int column, bool sortDirection)=0;

protected:
    std::vector<T> _modelData{};
    virtual void insertNodes(const std::vector<T>& nodes)=0;
};

template<typename T>
TreeModel<T>::TreeModel(QObject* parent):QStandardItemModel{parent}{
}

template<typename T>
void TreeModel<T>::setModelData(const std::vector<T> modelData){
    _modelData=modelData;
    beginResetModel();
    endResetModel();
}

template<typename T>
std::vector<T> TreeModel<T>::getModelData()const{
    return _modelData;
}

#endif // TREEMODEL_H
