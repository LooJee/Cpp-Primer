#include "Sales_data.h"

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
	units_sold += rhs.units_sold;
	
	return *this;
}
