#ifndef SORT_H
#define SORT_H

#include <vector>
using namespace std;

class Sort
{    
    public:
    Sort();
    void quick(vector<int> &vec);
    void merge(vector<int> &vec);
	
    private:
    void quickHelper(vector<int> &vec, int left, int right);
    void mergeHelper(vector<int> &vec);
    void merge_vectors(std::vector<int> &vec, std::vector<int> &vec1, std::vector<int> &vec2);

};

#endif
