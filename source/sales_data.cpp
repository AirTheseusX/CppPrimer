#include "sales_data.h"
using std::istream;
using std::ostream;

Sales_data::Sales_data(istream &is)
{
    read(is, *this);
}

double Sales_data::avg_price() const
{
    if (units_sold)
        return revenue / units_sold;

    return 0;
}

Sales_data & Sales_data::combine(const Sales_data &rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.units_sold;

    return *this;
}

istream & read(istream &is, Sales_data &item) {
    double price = 0;

    is >> item.bookNo >> item.units_sold >> price;
    item.revenue = price * item.units_sold;

    return is;
}

ostream & print(ostream &os, const Sales_data &item) {
    os << item.isbn() << " " << item.units_sold  << " " << item.revenue << " " << item.avg_price();

    return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs) {
    Sales_data salesSum = lhs;
    salesSum.combine(rhs);

    return salesSum;
}

inline char Screen::getTargetPos(Screen::pos height, Screen::pos width) const {
    return contents[height * width];
}

inline Screen &Screen::move(Screen::pos r, Screen::pos c) {
    cursor = r * width + c;

    return *this;
}