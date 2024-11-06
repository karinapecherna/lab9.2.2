
#include <iostream>
#include <set>
#include <algorithm>
#include <iterator>

// Макроси для операцій над множинами
#define UNION(set1, set2, result) \
    std::set_union((set1).begin(), (set1).end(), (set2).begin(), (set2).end(), std::inserter((result), (result).begin()))

#define INTERSECTION(set1, set2, result) \
    std::set_intersection((set1).begin(), (set1).end(), (set2).begin(), (set2).end(), std::inserter((result), (result).begin()))

#define DIFFERENCE(set1, set2, result) \
    std::set_difference((set1).begin(), (set1).end(), (set2).begin(), (set2).end(), std::inserter((result), (result).begin()))

#define SYMMETRIC_DIFFERENCE(set1, set2, result) \
    std::set_symmetric_difference((set1).begin(), (set1).end(), (set2).begin(), (set2).end(), std::inserter((result), (result).begin()))

#define IS_SUBSET(subset, set) \
    std::includes((set).begin(), (set).end(), (subset).begin(), (subset).end())

#define IS_EQUAL(set1, set2) \
    ((set1).size() == (set2).size() && std::equal((set1).begin(), (set1).end(), (set2).begin()))

// Допоміжна функція для друку множини
#define PRINT_SET(set) \
    for (const auto& elem : (set)) { std::cout << elem << " "; } \
    std::cout << std::endl;

int main() {
    // Визначення двох множин
    std::set<int> set1 = { 1, 2, 3, 4, 5 };
    std::set<int> set2 = { 4, 5, 6, 7, 8 };

    // Об'єднання
    std::set<int> union_result;
    UNION(set1, set2, union_result);
    std::cout << "Union: ";
    PRINT_SET(union_result);

    // Перетин
    std::set<int> intersection_result;
    INTERSECTION(set1, set2, intersection_result);
    std::cout << "Intersection: ";
    PRINT_SET(intersection_result);

    // Різниця
    std::set<int> difference_result;
    DIFFERENCE(set1, set2, difference_result);
    std::cout << "Difference (set1 - set2): ";
    PRINT_SET(difference_result);

    // Симетрична різниця
    std::set<int> symmetric_difference_result;
    SYMMETRIC_DIFFERENCE(set1, set2, symmetric_difference_result);
    std::cout << "Symmetric Difference: ";
    PRINT_SET(symmetric_difference_result);

    // Входження
    std::set<int> subset = { 1, 2 };
    if (IS_SUBSET(subset, set1)) {
        std::cout << "Subset is part of set1." << std::endl;
    }
    else {
        std::cout << "Subset is not part of set1." << std::endl;
    }

    // Рівність
    std::set<int> set3 = { 1, 2, 3, 4, 5 };
    if (IS_EQUAL(set1, set3)) {
        std::cout << "set1 is equal to set3." << std::endl;
    }
    else {
        std::cout << "set1 is not equal to set3." << std::endl;
    }

    return 0;
}
