class FrequencyTracker {
public:
    unordered_map<int,unordered_set<int>> mp;
    unordered_map<int,int> freq;
    
    FrequencyTracker() {
        mp.clear();
        freq.clear();
    }
    
    void add(int number) {
        int pfreq=freq[number];
        
        if(pfreq!=0)
        {
            mp[pfreq].erase(number);
        }
        freq[number]++;

        int newFreq=freq[number];
        mp[newFreq].insert(number);
    }
    
    void deleteOne(int number) {
        int pfreq=freq[number];
        if(pfreq==0)
            return ;
        freq[number]--;
        int newFreq=freq[number];
        mp[newFreq].insert(number);
        mp[pfreq].erase(number);
    }
    
    bool hasFrequency(int frequency) {
        if(mp[frequency].size()>0)
            return true;
        else
            return false;
    }
};

/**
 * Your FrequencyTracker object will be instantiated and called as such:
 * FrequencyTracker* obj = new FrequencyTracker();
 * obj->add(number);
 * obj->deleteOne(number);
 * bool param_3 = obj->hasFrequency(frequency);
 */
