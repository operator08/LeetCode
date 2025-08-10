class Solution {
public:
    bool reorderedPowerOf2(int n) {
      unordered_map<string, bool> umap;
      for (int i = 0; i < 30; i++) {
        string num = to_string(1 << i);
        sort(num.begin(), num.end());
        umap[num] = 1;
      }
      string num = to_string(n); 
      sort(num.begin(), num.end());
      return umap[num];
    }
};