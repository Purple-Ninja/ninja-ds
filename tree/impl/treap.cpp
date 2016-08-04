#include <cstdlib>

#include "../treap.h"

namespace ninja {
    /*
     * Implement functions in TreapNode class
     */
    template <class T>
    TreapNode<T>::TreapNode(T x) {
       value = x;
       priority = rand();
       left = right = NULL;
    }

    template <class T>
    T TreapNode<T>::getValue() {
        return value;
    }

    /*
     * Implement functions required by Treap
     */
    template <class T>
    TreapNode<T>* 
    Merge(TreapNode<T>* x, TreapNode<T>* y) {
        if (!x || !y) {
            // return non-NULL node
            return x ? x : y;
        }

        if (x->getValue() <= y->getValue()) {
            x->right = Merge(x->right, y);
        } else {
            y->left = Merge(x, y->left);
        }

        return NULL;
    }
}

