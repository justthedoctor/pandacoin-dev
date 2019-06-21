#ifndef DONATIONBOOK_H
#define DONATIONBOOK_H

#include <QFrame>

namespace Ui
{
    class DonationBookPage;
}
class WalletModel;
class AddressFilterModel;

class DonationBookPage : public QFrame
{
    Q_OBJECT

public:
    explicit DonationBookPage(QWidget *parent = 0);
    ~DonationBookPage();
    void setModel(WalletModel* model);

private slots:
    void onSearch();
    void onSelectionChanged();
    void onAddressBookEdit();
    void onAddressBookSendCoins();
    void onAddressBookChangeDone();
    void addressBookUpdated();
    void onAddressBookDeletePressed();
    void onAddressBookCopyToClipboard();
    void onAddressBookShowQRCode();
    void onAddressBookVerifyMessage();
    void onAddressBookNewAddress();
    void updateDisplayUnit();

signals:
    void onVerifyMessage(QString);

private:
    Ui::DonationBookPage *ui;
    WalletModel* model;
    AddressFilterModel* filterModel;
};

#endif // DONATIONBOOK_H
