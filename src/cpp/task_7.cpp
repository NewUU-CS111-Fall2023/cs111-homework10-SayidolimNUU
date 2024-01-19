/*
 * Author:
 * Date:
 * Name:
 */

class Problem7 {
public:
    int numRabbits(vector<int>& answers) {
      unordered_map<int, int> count;
      for(auto a : answers) { count[a] += 1; }
      int ret = 0;
      for(auto& kv: count) {
        ret += (kv.second+kv.first)/(kv.first+1)*(kv.first+1);
      }
      return ret;
    }
};
