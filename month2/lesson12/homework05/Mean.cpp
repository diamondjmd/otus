#include "Mean.h"

void Mean::update(double next) {
		m_sum_items += next;
		m_numb_items++;
}

double Mean::eval() const {
	return m_sum_items / m_numb_items;
}

const char * Mean::name() const {
	return "mean";
}

