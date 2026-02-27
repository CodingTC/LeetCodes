// decent solution

class TimeMap {
public:
    TimeMap() 
    {
        
    }
    
    void set(string key, string value, int timestamp) 
    {
        timeStruc[key].push_back(make_pair(timestamp, value)); 
    }
    
    string get(string key, int timestamp) 
    {
        if(!timeStruc.count(key))
        {
            return "";
        }
        //compare timestamp to last vector element 
        //if greater or equal to return that value 
        if(timestamp >= timeStruc[key][timeStruc[key].size() - 1].first)
        {
            return timeStruc[key][timeStruc[key].size() - 1].second;
        }
        if(timestamp < timeStruc[key][0].first)
        {
            return "";
        }

        int left = 0;
        int right = timeStruc[key].size() - 1;
        int mid = (left + right)/2;
        int maxValIndex = timeStruc[key].size() - 1;
        for(left = 0, right = timeStruc[key].size() - 1; left <= right;)
        {
            mid = (left + right)/2;
            if(timeStruc[key][mid].first == timestamp)
            {
                maxValIndex = mid;
                return timeStruc[key][maxValIndex].second;;
            }
            else if (timeStruc[key][mid].first <= timestamp)
            {
                left = mid +1;
                maxValIndex = mid;
                continue;
            }
            else if (timeStruc[key][mid].first > timestamp)
            {
                right = mid - 1;

                continue;
            }
        
        }
        
        return timeStruc[key][maxValIndex].second;
    }

    private:
    unordered_map<string, vector<pair<int, string>>> timeStruc;
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */


// Time: O(logn)
// Space: O(n)
