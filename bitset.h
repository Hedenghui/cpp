#pragma once
#include <vector>

namespace bit
{
	class bitset
	{
	public:
		bitset(size_t N)
		{
			_bits.resize(N / 32 + 1, 0); // Ҳ�����⣬˼��һ���������ģ�
			_num = 0;
		}

		void set(size_t x)
		{
			size_t index = x / 32; // ���ӳ���λ���ڵڼ�������
			size_t pos = x % 32;   // ���x�����εĵڼ���λ

			_bits[index] |= (1 << pos); // ��pos��λ�ó�1

			++_num;
		}

		void reset(size_t x)
		{
			size_t index = x / 32; // ���ӳ���λ���ڵڼ�������
			size_t pos = x % 32;   // ���x�����εĵڼ���λ

			_bits[index] &= ~(1 << pos); // ��pos��λ�ó�0

			--_num;
		}

		// �ж�x�ڲ���(Ҳ����˵xӳ���λ֪��Ϊ1)
		bool test(size_t x)
		{
			size_t index = x / 32; // ���ӳ���λ���ڵڼ�������
			size_t pos = x % 32;   // ���x�����εĵڼ���λ

			return _bits[index] & (1 << pos);
		}
	private:
		//int* _bits;
		std::vector<int> _bits;
		size_t _num;  // ӳ��洢�Ķ��ٸ�����
	};

	void test_bitset()
	{
		/*bitset bs(100);
		bs.set(99);
		bs.set(98);
		bs.set(97);
		bs.set(5);
		bs.reset(98);

		for (size_t i = 0; i < 100; ++i)
		{
		printf("[%d]:%d\n", i, bs.test(i));
		}*/

		bitset bs(-1);
		//bitset bs(pow());
		//bitset bs(0xffffffff);

	}
}