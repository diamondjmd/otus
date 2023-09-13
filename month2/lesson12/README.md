# Calculation of the statistical characteristics of the sequence



## Description
A practice with the aim of consolidating polymorphism skills in C++. The practice consists of measuring the execution time of some code, for the purpose of comparing two different calculation algorithms and selecting the optimal one.

The problem with this kind of measurement is that our operating system (OS) does not plan to help us achieve our goal at all. Because, it does not know that we are doing high-precision measurements here - it can start a system update, schedule a virus scan or any other resource-intensive activity. Plus, memory allocation for our application can work more or less well from launch to launch. In general, there are many reasons why our code may not work quite stable.

Therefore, an approach is usually practiced when not a single run of a particular function is measured, but several (several hundred or even thousands) runs are performed and behavior statistics are assessed. In this case, several statistical characteristics are considered at once.

For example, it is not very informative to know that the arithmetic mean of all measurements is the value (for
example) == 10.124 ms. It is advisable to also look at the minimum and maximum values, and also get an
estimate of the deviations.Here we will deal with statistics.

The application reads the entire sequence from the standard input and displays a set of the following statistical characteristics:

 * min – minimum value from the sequence
 * max – maximum value from the sequence
 * mean – arithmetic mean, calculated based on all elements of the sequence
 * std – standard deviation
 * pct90 – 90th percentile
 * pct95 – 95th percentile

Stopping the sequence input is assumed by passing the EOF (End Of File) attribute.

### Example of the application:

```
> statistics
0 1 2 3 4 5 6 7 8 9 10
min = 0
max = 10
mean = 5
std = 3.162277
pct90 = 9
pct95 = 10
```


