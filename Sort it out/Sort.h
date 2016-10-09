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


};

#endif
