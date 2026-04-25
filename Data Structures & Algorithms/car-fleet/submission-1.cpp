class Solution {
   public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int, double>> cars;
        int n=position.size();
        for (int i=0;i<n;i++) {
            double time = (target - position[i]) / (double)speed[i];
            cars.push_back({position[i], time});
        }

        sort(cars.begin(), cars.end());

        int fleets = 0;
        double lastTime = 0;

        for (int i = n - 1; i >= 0; i--) {
            if (cars[i].second > lastTime) {
                fleets++;
                lastTime = cars[i].second;
            }
        }
        return fleets;
    }
};
