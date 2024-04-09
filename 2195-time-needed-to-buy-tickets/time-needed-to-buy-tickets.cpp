class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int time = 0;
        for(int i=0;i<tickets.size();i++){
            if(tickets[i] < tickets[k]){
                time += tickets[i];
            }
            else if(tickets[i] >= tickets[k] && i <= k){
                time += tickets[k];
            }
            else{
                time += tickets[k] - 1;
            }
        }
        return time;
        // queue<int> q;
        // for(int i=0;i<tickets.size();i++){
        //     q.push(tickets[i]);
        // }

        // int time = 0, count = 0, n = q.size();
        // while(!q.empty()){
        //     int front = q.front();

        //     if(front == 1 && (count+1)%n == k){
        //         break;
        //     }
        //     else if(front == 1){
        //         q.pop();
        //         count++;
        //         time++;
        //     }
        //     else{
        //         q.push(front-1);
        //         q.pop();
        //         time++;
        //         count++;
        //     }
        // }
        // return time;
    }
};