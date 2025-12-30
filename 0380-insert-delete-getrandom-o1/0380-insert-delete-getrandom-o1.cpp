class RandomizedSet {
public:
    vector<int> v;
    map <int, int> pos;
    int cnt = 0;

    RandomizedSet() {}

    bool insert(int val) {
        if (pos[val] > 0) return false;
        pos[val] = ++cnt;
        v.push_back(val);
        return true;
    }

    bool remove(int val) {
        if (pos[val] == 0) return false;

        int idx = pos[val];
        if(cnt > 1){
            int last = v.back();
            v[idx-1] = last;
            pos[last] = idx;
        }

        v.pop_back();
        pos[val] = 0;
        cnt --;
        return true;
    }

    int getRandom() {
        return v[rand() % v.size()];
    }
};
