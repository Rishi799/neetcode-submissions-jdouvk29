class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(),people.end());
         int a = 0;
        int b = people.size() - 1;
        int answer = 0;

        while (a <= b) {
            if (people[a] + people[b] <= limit) {
                a++;  
            }
            b--;      
            answer++; 
        }

        return answer;
    }
};