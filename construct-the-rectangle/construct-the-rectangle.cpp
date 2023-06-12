class Solution {
public:
    vector<int> constructRectangle(int area) {
            int width = 1;
            int length = area;

            for (int w = 1; w <= std::sqrt(area); ++w) {
                if (area % w == 0) {
                    width = w;
                    length = area / w;
                }
            }

            return {length, width};
    }
};