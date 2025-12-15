#ifndef VECTOR_H
#define VECTOR_H
#include<memory>
class Vector{
	protected:
		std::unique_ptr<int[]> _data;
		size_t _size;
		size_t _capacity;
		void resize(size_t new_capacity);
	public:
		Vector();
		Vector(size_t capacity);
		void push_back(int value);
		void push_front(int value);
		[[nodiscard]] size_t getterSize() const;
		[[nodiscard]] size_t getterCapacity() const;
		int& operator[](size_t index);
};
#endif
