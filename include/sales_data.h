#ifndef PROJECT_SALSE_DATA_H
#define PROJECT_SALSE_DATA_H

#include <string>
#include <iostream>

using std::string;
using std::istream;

class Sales_data
{
public:
    Sales_data() = default;
    Sales_data(const string s) : bookNo(s) {}
    Sales_data(const string s, unsigned int sold, double price) : bookNo(s), units_sold(sold), revenue(sold * price) {}
    Sales_data(istream &is);

    string isbn() const {return bookNo;}
    Sales_data &combine(const Sales_data &);
    double avg_price() const;

    string bookNo;
    unsigned int units_sold = 0;
    double revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

class Screen  {
public:
    typedef string::size_type pos;

    Screen() = default;
    Screen(pos height, pos width, char c) : height(height), width(width), contents(height * width, c) {}

    char getCursorContent() const { return contents[cursor]; }
    inline char getTargetPos(pos height, pos width) const;
    Screen &move(pos r, pos c);

private:
    pos cursor = 0;
    pos height = 0, width = 0;
    string contents;
};

#if 0
#include <iostream>
#include <string>
#include <cstddef> // required by exercise 19.19
#include <vector>  // required by exercise 19.19
class Sales_data {
    // friend
    // overloaded output operator required by exercise 14.6
    friend std::ostream &operator<<(std::ostream&, const Sales_data&);
    // overloaded input operator required by exercise 14.9
    friend std::istream &operator>>(std::istream&, Sales_data&);
    // overloaded addition operator required by exercise 14.13
    friend Sales_data operator+(const Sales_data&, const Sales_data&);
    // overloaded equality on page 561
    friend bool operator==(const Sales_data&, const Sales_data&);
    friend bool operator!=(const Sales_data&, const Sales_data&);
    // overloaded addition operator required by exercise 14.20
    friend Sales_data operator+(const Sales_data&, const Sales_data&);
    // friend for test, required by exercise 19.16
    friend void debug_test(const Sales_data&);
    // friend for count, required by exercise 19.19
    friend auto count_price(const std::vector<Sales_data> &vec, double) -> decltype(vec.begin());
public:
    // type alias for avg_price, required by exercise 19.16
    using Avg = double (Sales_data::*)() const;
    // constructor
    Sales_data() = default;
    Sales_data(const std::string &s) : bookNo(s) {}
    Sales_data(const std::string &s, unsigned n, double p) :
            bookNo(s), units_sold(n), revenue(p*n) {}
    explicit Sales_data(std::istream &is) { is >> *this; }
    // member
    std::string isbn() const { return bookNo; }
    // overloaded compound-assignment operator required by exercise 14.20
    Sales_data& operator+=(const Sales_data&);
    // takes an ISBN as parameter, required by exercise 14.22
    Sales_data& operator=(const std::string&);
    // return a pointer to member, required by exercise 19.13
    static const std::string Sales_data::* data()
    { return &Sales_data::bookNo; }
private:
    std::string bookNo;
    unsigned units_sold = 0;
    double revenue = 0.0;
    double avg_price() const;
};
// member functions definition
inline
Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
    units_sold += rhs.units_sold;
    revenue += rhs.revenue;
    return *this;
}
inline
Sales_data& Sales_data::operator=(const std::string &isbn)
{
    bookNo = isbn;
    return *this;
}
// define avg_price as inline, required by exercise 7.26
inline double Sales_data::avg_price() const
{
    if(units_sold != 0)
        return revenue / units_sold;
    else
        return revenue;
}
// overloaded output operator
inline
std::ostream& operator<<(std::ostream& os, const Sales_data& item)
{
    os << item.bookNo << " "
       << item.units_sold << " "
       << item.revenue << " "
       << item.avg_price();
    return os;
}
// overloaded input operator
inline
std::istream& operator>>(std::istream &is, Sales_data& item)
{
    double price = 0;
    is >> item.bookNo >> item.units_sold >> price;
    if(is) // check if input invalid
        item.revenue = item.units_sold * price;
    else
        item = Sales_data(); // input failed:given the object default state
    return is;
}
inline
bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
    return lhs.bookNo == rhs.bookNo &&
           lhs.units_sold == rhs.units_sold &&
           lhs.revenue == rhs.revenue;
}
inline
bool operator!=(const Sales_data &lhs, const Sales_data &rhs)
{
    return !(lhs == rhs);
}
inline
Sales_data operator+(const Sales_data &lhs, const Sales_data &rhs)
{
    Sales_data sum = lhs;
    sum += rhs;
    return sum;
}
#endif
#endif //PROJECT_SALSE_DATA_H

