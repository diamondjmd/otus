#include "Pct.h"

Pct::Pct(unsigned int percentile) :m_percentile{percentile} {}

void Pct::update(double next) {
	m_items.push_back(next);
}

double Pct::eval() const {
	std::sort(m_items.begin(), m_items.end());
	std::size_t ordinal_rank = std::round( (m_percentile/100.0) *(m_items.size() -1));
	return static_cast<double> (m_items.at(ordinal_rank));
}

const char * Pct::name() const {
	std::string name = "pct" + std::to_string(m_percentile);
	return name.c_str();
}

