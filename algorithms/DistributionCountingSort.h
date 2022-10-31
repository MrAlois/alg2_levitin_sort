//
// Created by asenkyrik on 31.10.2022.
//

#ifndef ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H
#define ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H


#include "SortingAlgorithm.h"

template <class T>
class DistributionCountingSort : public SortingAlgorithm<T> {
public:
    std::vector<T> process(std::vector<T> data) override;
};

#endif //ALG2_LEVITIN_SORT_DISTRIBUTIONCOUNTINGSORT_H
