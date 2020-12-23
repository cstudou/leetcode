class Solution {
public:
    int minArray(vector<int>& numbers) {
        int cou = numbers[0];
        for(int i=1; i<numbers.size(); )
        {
            if(numbers[i] >= cou)  
            {
                i++; cou = numbers[i-1];
            }
            else 
            {
                cou = numbers[i]; break;
            }
            if(i==numbers.size())
            {
                cou = numbers[0];
            }
        }
        return cou;
    }
};
