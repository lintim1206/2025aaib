///LeetCodde 1.Two Sum
///���@��Ʀr nums �̭� ����� �ۥ[�A�Otarget
///nums[i]+nums[j] == target ���i�Mj�ϱo�[�_�ӬOtarget
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        box={} ///�̭���X�{�L���Ʀr
        ///�ڭ̷Q�n��Xtarget�o�ӥ[�`

        for i,num in enumerate(nums):
            other=target-num ///�t�~�@�ӻݭn���� �i�H��Xtarget ��(target-num)
            if target-num in box:///�b�c�l�̡A���t�@�ӻݭn����
                return [box[other],i]///��쵪��
            else:///�p�G�S���X�A���Ʀr���
                box[num]=i ///�N��{�b���Ʀrnum�A���box�̭�
