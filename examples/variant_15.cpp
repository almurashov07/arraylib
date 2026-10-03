#include "arraylib.h"

#include <cstddef>
#include <iomanip>
#include <iostream>

int main() {
    int heatmap[] = {
        18, 21, 25, 29, 31,
        27, 23, 20, 17, 33,
        28, 24
    };

    const std::size_t n = sizeof(heatmap) / sizeof(heatmap[0]);

    std::cout << "Исходные температуры: ";
    for (std::size_t i = 0; i < n; ++i) {
        std::cout << heatmap[i] << ' ';
    }
    std::cout << '\n';

    int count = 0;
    for (std::size_t i = 0; i < n; ++i) {
        if (heatmap[i] > 27) {
            ++count;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Сумма значений: " << arr_sum(heatmap, n) << '\n';
    std::cout << "Максимальная температура: " << arr_max(heatmap, n) << '\n';
    std::cout << "Минимальная температура: " << arr_min(heatmap, n) << '\n';
    std::cout << "Средняя температура: " << arr_average(heatmap, n) << '\n';
    std::cout << "Количество значений выше 27 градусов: " << count << '\n';

    return 0;
}