//
// Created by Admin on 20/03/2026.
//

#ifndef CLASSES_PAIR_H
#define CLASSES_PAIR_H

template<typename K, typename V>
class Pair {
private:
    K key;
    V value;

public:
    K key1() const {
        return key;
    }

    V value1() const {
        return value;
    }

    Pair(K key, V value);
};

template<typename K, typename V>
Pair<K, V>::Pair(K key, V value):key(key), value(value) {}


#endif //CLASSES_PAIR_H