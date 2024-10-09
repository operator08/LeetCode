class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int max_area = 0;

        while (left < right) {
            int width = right - left;
            int current_height = min(height[left], height[right]);

            max_area = max(max_area, current_height * width);
            
            if (height[right] > height[left])
                left++;
            else
                right--;
        }

	    return max_area;;
    }
};

// 1 6 7 9 10
// 0 1 2 3 4