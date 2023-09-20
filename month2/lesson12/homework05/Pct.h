#pragma once 

#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include "IStatistics.h"

class Pct : public IStatistics {
public:
	Pct() = default;
	explicit Pct(unsigned int percentile);
	void update(double next) override;
	double eval() const override;
	const char * name() const override;
	
private:
	mutable std::vector<double> m_items;
	unsigned int m_percentile{};
	
};
