#include "RandomFoo.h"


RandomFoo::RandomFoo(double a): m_a{a}, m_gen{std::random_device{}()} {}
double RandomFoo::functionFoo(){
    std::uniform_real_distribution<> dist(0.0, 1.0);
    return dist(m_gen);
}