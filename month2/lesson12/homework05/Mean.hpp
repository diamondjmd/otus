#pragma once 

#include "IStatistics.h"

class Mean : public IStatistics {
public:
	Mean() = default;

	void update(double next) override {
			m_sum_items += next;
            m_numb_items++;
	}

	double eval() const override {
		return m_sum_items / m_numb_items;
	}

	const char * name() const override {
		return "mean";
	}
	
private:
    std::size_t m_numb_items{};
	double m_sum_items{};
};
