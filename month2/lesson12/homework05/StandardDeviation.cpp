#include "StandardDeviation.h"

void StandardDeviation::update(double next) {
	m_mean.update(next);    
	m_items.push_back(next);  
}

double StandardDeviation::eval() const {
	double sum_mean_distance = 0;
	const double mean = m_mean.eval();

	for (auto element: m_items){
		sum_mean_distance += std::pow(element - mean, 2);
	}
	
	return std::sqrt(sum_mean_distance / m_items.size());
}

const char * StandardDeviation::name() const {
	return "std";
}
