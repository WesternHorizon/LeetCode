static void reverseVector(int *p, int *q)
{
	int temp;
	while (p < q) {
		temp = *p;
		*p = *q;
		*q = temp;
		p++;
		q--;
	}
}

void rotate(int* nums, int numsSize, int k) {
	k %= numsSize;
	if (k == 0) return;
	reverseVector(nums, nums + (numsSize - k - 1));
	reverseVector(nums + (numsSize - k), nums + numsSize - 1);
	reverseVector(nums, nums + numsSize - 1);
}