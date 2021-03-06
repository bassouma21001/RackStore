#ifndef RAY_CREATE1_H
#define RAY_CREATE1_H

#include <QWidget>
#include <qtmaterialtextfield.h>
#include <qtmaterialautocomplete.h>
#include <qtmaterialtoggle.h>
#include <qtmaterialflatbutton.h>
#include <QLabel>

namespace Ui {
class Ray_Create1;
}

class Ray_Create1 : public QWidget
{
    Q_OBJECT

public:
    explicit Ray_Create1(QWidget *parent = nullptr);
    ~Ray_Create1();

    QtMaterialAutoComplete * ID_Produit = new QtMaterialAutoComplete;
    QtMaterialAutoComplete * Alert = new QtMaterialAutoComplete;
    QtMaterialTextField * Price_Container  = new QtMaterialTextField;
    QtMaterialTextField * Nombre_Produit = new QtMaterialTextField;
    QtMaterialToggle * Flag = new QtMaterialToggle;
    QtMaterialFlatButton *  ok = new QtMaterialFlatButton("Save");
    QtMaterialFlatButton *  cancel = new QtMaterialFlatButton("Cancel");

private:

    Ui::Ray_Create1 *ui;

};

#endif // RAY_CREATE1_H
