class Solution {
    public int matchPlayersAndTrainers(int[] players, int[] trainers) {

        Arrays.sort(players);
        Arrays.sort(trainers);

        int count=0,j=0,i=0;
        for(i=0;i<players.length;i++)
        {
            for( ;j<trainers.length;j++)
            {
                if(trainers[j]>=players[i])
                {
                    count++;
                    j++;
                    break;
                }
            }
        }

        return count;
        
    }
}