class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> temp1 = height;
        sort(temp1.begin(), temp1.end());
        int count = temp1.back();
        int sum = 0;

        while (count != 0) {
            vector<int> temp(height.size(), 0);

            // build level
            for (int i = 0; i < height.size(); i++) {
                if (height[i] > 0) {
                    height[i]--;
                    temp[i] = 1;
                }
            }

            // find first and last 1 ONLY ONCE
            int left = 0;
            while (left < temp.size() && temp[left] == 0) left++;

            int right = temp.size() - 1;
            while (right >= 0 && temp[right] == 0) right--;

            // count zeros in between
            if (left < right) {
                for (int i = left + 1; i < right; i++) {
                    if (temp[i] == 0) sum++;
                }
            }

            count--;
        }

        return sum;
    }
};