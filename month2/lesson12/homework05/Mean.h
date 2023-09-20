#pragma once 
#include <cstddef>
#include "IStatistics.h"


class Mean : public IStatistics {
public:
	Mean() = default;
	void update(double next) override;
	double eval() const override;
	const char * name() const override;
	
private:
    std::size_t m_numb_items{};
	double m_sum_items{};
};
