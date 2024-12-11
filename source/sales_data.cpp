#include "sales_data.h"

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