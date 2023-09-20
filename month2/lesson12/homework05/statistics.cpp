#include <iostream>
#include "Min.h"
#include "Max.h"
#include "Mean.h"
#include "StandardDeviation.h"
#include "Pct.h"

int main() {

	const size_t statistics_count = 6;
	IStatistics *statistics[statistics_count];
	unsigned int index = 0;
	statistics[index++] = new Min{};
	statistics[index++] = new Max{};
	statistics[index++] = new Mean{};
	statistics[index++] = new StandardDeviation{};
	statistics[index++] = new Pct{90};
	statistics[index++] = new Pct{95};

	

	double val = 0;
	while (std::cin >> val) {
		for (size_t i = 0; i < statistics_count; ++i) {
			statistics[i]->update(val);
		}
	}

	// Handle invalid input data
	if (!std::cin.eof() && !std::cin.good()) {
		std::cerr << "Invalid input data\n";
		return 1;
	}

	// Print results if any
	for (size_t i = 0; i < statistics_count; ++i) {
		std::cout << statistics[i]->name() << " = " << statistics[i]->eval() << std::endl;
	}

	// Clear memory - delete all objects created by new
	for (size_t i = 0; i < statistics_count; ++i) {
		delete statistics[i];
	}

	return 0;
}