#pragma once 

#include <vector>
#include <algorithm>
#include <cmath>
#include "IStatistics.h"

class Pct90 : public IStatistics {
public:
	Pct90() = default;

	void update(double next) override {
		m_items.push_back(next);
	}

	double eval() const override {
		std::sort(m_items.begin(), m_items.end());
		auto ordinal_rank = std::round(0.9 *(m_items.size() -1));
		return static_cast<double> (m_items.at(ordinal_rank));
	}

	const char * name() const override {
		return "pct90";
	}
	
protected:
	mutable std::vector<double> m_items;
};
