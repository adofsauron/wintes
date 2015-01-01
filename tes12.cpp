#include <iostream>
using namespace std;

class IntArray {
	private : 
		int* m_data; //表示指向数组的首地址
		int m_pos; //数组的当前下标
		int m_len; //数组的长度 
	public :
		IntArray(int size) :
			m_data(new int[m_len = size]){
				m_pos = 0;
				m_len = size;
		}
		
		~IntArray() {
			delete[] m_data;
		}
		
		bool push(int num) {
			if(m_pos >= m_len) {
				return false;
			} else {
				m_data[m_pos++] = num;
				return true;
			}
		}
		bool pop(int& num) {
			if(m_pos <= 0) {
				return false;
			} else {
				num = m_data[--m_pos];
				return true;
			}
		}
		bool get(int pos, int& num) {
			if(pos >= m_pos || pos < 0) {
				return false;
			}
			num = m_data[pos];
			return true;
		}
		//实现打印数组中元素的值 
		void print(void){
			for(int i=0; i<m_pos; i++) {
				cout << m_data[i] << ' ';
			}
		}
};

int work(int x)
{
	cout<<x;
	return 0;
}

int work(char *x)
{
	cout<<x;
	return 0;
}

int main()
{
	work("fuck");
	work(7);
	return 0;
}