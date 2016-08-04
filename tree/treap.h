#ifndef __TREAP_H__
#define __TREAP_H__

#include <utility>

namespace ninja {
    template <class T>
    class TreapNode {
        private:
            TreapNode *left;
            TreapNode *right;
            T value;
            int priority;

        public:
            TreapNode(T x);
            TreapNode* Insert(T x);
            TreapNode* Delete(T x);
            TreapNode* Query(T x);
    };

    template <class T>
    TreapNode<T>*
    Merge(TreapNode<T>* x, TreapNode<T>* y);

    template <class T>
    std::pair<TreapNode<T>*, TreapNode<T>*> 
    Split(TreapNode<T>* x, T val);
}

#endif
