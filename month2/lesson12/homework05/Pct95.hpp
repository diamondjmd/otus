#pragma once 

#include <vector>
#include <algorithm>
#include <cmath>
#include "Pct90.hpp"

class Pct95 : public  Pct90 {
public:
	Pct95() = default;

	double eval() const override {
		std::sort(m_items.begin(), m_items.end());
		auto ordinal_rank = std::round(0.95 *(m_items.size() -1) );
		return static_cast<double> (m_items.at(ordinal_rank));
	}

	const char * name() const override {
		return "pct95";
	}
};
