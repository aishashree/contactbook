#include <QLabel>
#include <QLineEdit>
#include <QFormLayout>
#include "qtcontactform.h"



QtContactForm::QtContactForm(QWidget *parent) : 
        QFormLayout(parent), firstNameField(new QLineEdit()),
        lastNameField(new QLineEdit()),
        addressField(new QLineEdit()),
        phoneNumberField(new QLineEdit()),
        emailField(new QLineEdit()),
        pincodeField(new QLineEdit())

{
    addRow("<font color = 'blue'>First Name</font><font color = 'red'>*</font>", firstNameField);
    addRow("<font color = 'blue'>Last Name</font><font color = 'red'>*</font>", lastNameField);
    addRow("<font color = 'blue'>Address</font><font color = 'red'>*</font>", addressField);
    addRow("<font color = 'blue'>Phone Number</font><font color = 'red'>*</font>", phoneNumberField);
    addRow("<font color = 'blue'>Email</font><font color = 'red'>*</font>", emailField);
   addRow("<font color = 'blue'>Pincode</font><font color = 'red'>*</font>", pincodeField);

}

void QtContactForm::clear()
{
    firstNameField->setText("");
    lastNameField->setText("");
    addressField->setText("");
    phoneNumberField->setText("");
    emailField->setText("");
    pincodeField->setText("");

}
