#include<iostream>
#include<string.h>
using namespace std;
class Invoice
{
public:
    Invoice(string n,string d,int q,int p)
    {
        partNumber=n;
        partdescription=d;
        quantity=q;
        pricePerItem=p;
        if(q>0)
        {
            quantity=q;
        }
        else
        {
            cout<<"ERROR: invalid quantity "<<endl; 
            quantity=0;
        }
        if(p>0)
        {
            pricePerItem=p;
        }
        else
        {
            cout<<"ERROR: invalid price per item "<<endl; 
            pricePerItem=0;
        }

    }
    void setPartNumber(string a)
    {
        partNumber=a;
    }
    void setPartdescription(string b)
    {
        partdescription=b;
    }
    void setQuantity(int c)
    {
         quantity=c;
    }
    void setPricePerItem(int d)
    {
         pricePerItem=d;
    }
    string getPartNumber()
    {
        return partNumber;
    }
    string getPartdescription()
    {
        return partdescription;
    }
    int getQuantity()
    {
        return quantity;
    }
    int getPricePerItem()
    {
         return pricePerItem;
    }
    int getInvoiceAmount()
    {
        int amt;
        amt=quantity*pricePerItem;
        return amt;
    }
private:
    string partNumber;
    string partdescription;
    int quantity;
    int pricePerItem;

};

int main()
{
     Invoice o1("OOP4567","Very important and useful part ",12,1000);
     cout<<"The Part number is "<<o1.getPartNumber()<<endl;
     cout<<"The Part description is "<<o1.getPartdescription()<<endl;
     cout<<"Number of parts are "<<o1.getQuantity()<<endl;
     cout<<"The Price per item is "<<o1.getPricePerItem()<<" rupees"<<endl;
     cout<<"The total amount of the parts are "<<o1.getInvoiceAmount()<<" rupees"<<endl;
     //for testing negative price and qty
     Invoice o2( "ISHA4567","Essential part ",-19,-78955);
     cout<<"The Part number is "<<o2.getPartNumber()<<endl;
     cout<<"The Part description is "<<o2.getPartdescription()<<endl;
     cout<<"Number of parts are "<<o2.getQuantity()<<endl;
     cout<<"The Price per item is "<<o2.getPricePerItem()<<" rupees"<<endl;
     cout<<"The total amount of the parts are "<<o2.getInvoiceAmount()<<" rupees"<<endl;
}
