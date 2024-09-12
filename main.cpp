#include <chrono>
#include <iostream>
#include <cassert>
#include <vector>
#include <ranges>

#include <Eigen/Dense>

int main() {
    Eigen::MatrixXd a = Eigen::MatrixXd::Random(30, 30);
    Eigen::MatrixXd b = Eigen::MatrixXd::Random(30, 30);

    std::vector<std::chrono::nanoseconds> durations(1000000);

    for (auto& d : durations) {
        auto t1 = std::chrono::high_resolution_clock::now();
        volatile Eigen::MatrixXd r = a * b * a.transpose();
        d = std::chrono::high_resolution_clock::now() - t1;
    }

    std::ranges::sort(durations);

    std::cout << "min: " << durations[0].count()
        << "ns, q10:" << durations[durations.size() / 10].count()
        << "ns, q50:" << durations[durations.size() / 2].count()
        << "ns, q99:" << durations[static_cast<size_t>(durations.size() * .99)].count()
        << "ns, max: " << durations[durations.size() - 1].count() << "ns" << std::endl;
}

