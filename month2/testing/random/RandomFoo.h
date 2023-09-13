#pragma once

#include <random>

class RandomFoo{
    public:
        RandomFoo(double a = 0.0);
        double functionFoo();

    private:
        double m_a;
        std::mt19937 m_gen;
};