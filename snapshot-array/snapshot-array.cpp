class SnapshotArray {
public:
    SnapshotArray(int length) {
        this->array.resize(length);
        snap_id = 0;
    }
    
    void set(int index, int val) {
        this->array[index][snap_id] = val;
    }
    
    int snap() {
        return snap_id++;
    }
    
    int get(int index, int snap_id) {
        auto it = this->array[index].upper_bound(snap_id);
        if (it == this->array[index].begin())
            return 0;
        return prev(it)->second;
    }

private:
    vector<map<int, int>> array;
    int snap_id;
};
