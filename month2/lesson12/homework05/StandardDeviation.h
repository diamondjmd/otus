#pragma once 

#include <vector>
#include <cmath>
#include "IStatistics.h"
#include "Mean.h"

class StandardDeviation : public IStatistics {
public:
	StandardDeviation() = default;
	void update(double next) override;
	double eval() const;
	const char * name() const override;

private:
	Mean m_mean;
	std::vector <double> m_items;
};
