#pragma once 

#include <vector>
#include <cmath>
#include "IStatistics.h"
#include "Mean.hpp"


class StandardDeviation : public IStatistics {
public:
	StandardDeviation() = default;

	void update(double next) override {
		m_mean.update(next);    
		m_items.push_back(next);  
	}

	double eval() const override {
		double sum_mean_distance = 0;
		const double mean = m_mean.eval();

		for (auto element: m_items){
			sum_mean_distance += std::pow(element - mean, 2);
		}
		
		return std::sqrt(sum_mean_distance / m_items.size());
	}

	const char * name() const override {
		return "std";
	}

private:
	Mean m_mean;
	 std::vector <double> m_items;
};
