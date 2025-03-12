class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxarea = 0;
        int left = 0;
        int right = height.size() - 1; // Initialize right pointer correctly

        while (left < right) {
            int minheight = min(height[left], height[right]);  // Use min height
            int width = right - left;  // Calculate width
            int area = width * minheight;  // Calculate area

            maxarea = max(maxarea, area);  // Update max area with the maximum found

            if (height[left] < height[right]) {
                left++;  // Move left pointer
            } else {
                right--;  // Move right pointer
            }
        }

        return maxarea;
    }
};
