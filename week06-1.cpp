//LeetCode 2033. Minimum Operations to Make a Uni-Value Grid
class Solution {
public:
    int minOperations(vector<vector<int>>& grid, int x) {
        int M = grid.size(), N = grid[0].size(), MN=M*N;
        vector<int> a(MN);//C++���}�Ca�A�j�p�OM*N
        for(int i=0; i<M; i++){//����i
            for(int j=0; j<N; j++){//�k��j
                int k=i*N+j;//��촫��
                a[k] = grid[i][j];//���Ӫ��}�C�A��Ja[]
            }
        }//�e���A��grid[i][j]����ơA��J²�檺�}�Ca[k]
        sort(a.begin(), a.end());//�Ʀr�p��j�Ʀn
        int mid = a[MN/2];//��������(�C�ӤH�A�n�������Ʀr����)
        int ans = 0;//�j��e�� ans �O 0
        for(int k=0; k<MN; k++){
            int diff = abs(mid-a[k]);//�{�b�o��A�������h��?
            if(diff%x != 0) return -1;//���Ӥp�����A����㰣�A�|����
            ans += diff/x;
        }//�j��̭��A�⵪��
        return ans;//�j��᭱�A���׮��ӥ�
    }

};
