#ifndef __TREAP_H__
#define __TREAP_H__

#include <utility>

namespace ninja {
    template <class T>
    class TreapNode {
        private:
            T value;
            int priority;

        public:
            // Declare Variables
            TreapNode *left;
            TreapNode *right;

            // Declare operations
            TreapNode(T x);
            TreapNode* Insert(T x);
            TreapNode* Delete(T x);
            TreapNode* Query(T x);
            T getValue();
    };

    template <class T>
    TreapNode<T>*
    Merge(TreapNode<T>* x, TreapNode<T>* y);

    template <class T>
    std::pair<TreapNode<T>*, TreapNode<T>*> 
    Split(TreapNode<T>* x, T val);
}

#endif
