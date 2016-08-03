#include <cstdio>
#include <cstdlib>

template <class T>
class TreapNode {
    private:
        TreapNode *left;
        TreapNode *right;
        T value;
        T priority;

    public:
        TreapNode(T x);
        TreapNode* Split(TreapNode* node);
        TreapNode* Merge(TreapNode* node);
        TreapNode* Insert(T x);
        TreapNode* Delete(T x);
};

