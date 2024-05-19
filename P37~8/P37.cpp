/*
	P37 �̶�����������͸�ʽ�������
*/
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <inttypes.h> // C99��׼
int main() {
	int8_t myInt8 = INT8_MAX;
	int32_t myInt32 = INT32_MAX;
	uint32_t myUint32 = UINT32_MAX;
	uint64_t myUint64 = UINT64_MAX;

	printf("int8_t: %" PRId8 "\n", myInt8);
	printf("int32_t: %" PRId32 "\n", myInt32);
	printf("uint32_t: %" PRIu32 "\n", myUint32);
	printf("uint64_t: %" PRIu64 "\n", myUint64);
	/*
		P38 least��fast���͵���ҵ��;������
	*/
	// least means the smallest size of the integer type ָ����С����������
	int_least32_t playerScore = 1000000;

	// fast whose meaning is not clearly defined and is left to the implementation to decide what is meant by a "fast" integer data type.
	// �����������͵ĺ���û����ȷ���壬��ʵ�֣�����,e.g.,CPU������ʲô�ǡ����١������������͡�
	int_fast32_t pixelValue = 128;
	printf("playerScore: %" PRIdFAST32 "\n", playerScore);
	system("pause");
	return 0;
}