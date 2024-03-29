
#include "FigureArray.h"
template <class T1, class T2, class T3> FigureArray<T1,T2,T3>::FigureArray(int size)
{
	data = new ArrayItem<T1, T2, T3>[size];
	FigureArray<T1, T2, T3>::size = size;
}

template <class T1, class T2, class T3> void FigureArray<T1, T2, T3>::Insert(std::shared_ptr<T1> &pentagon, int index)
{
	data[index] = ArrayItem<T1,T2,T3>(pentagon);
}
template <class T1, class T2, class T3> void FigureArray<T1, T2, T3>::Insert(std::shared_ptr<T2> &rhombus, int index)
{
	data[index] = ArrayItem<T1, T2, T3>(rhombus);
}
template <class T1, class T2, class T3> void FigureArray<T1, T2, T3>::Insert(std::shared_ptr<T3> &trapeze, int index)
{
	data[index] = ArrayItem<T1, T2, T3>(trapeze);
}

template <class T1, class T2, class T3> bool FigureArray<T1, T2, T3>::IsPentagon(int index)
{
	return data[index].IsPentagon();
}
template <class T1, class T2, class T3> bool FigureArray<T1, T2, T3>::IsRhombus(int index)
{
	return data[index].IsRhombus();
}
template <class T1, class T2, class T3> bool FigureArray<T1, T2, T3>::IsTrapeze(int index)
{
	return data[index].IsRhombus();
}

template <class T1, class T2, class T3> std::shared_ptr<T1> FigureArray<T1, T2, T3>::GetPentagon(int index)
{
	return data[index].GetPentagon();
}
template <class T1, class T2, class T3> std::shared_ptr<T2> FigureArray<T1, T2, T3>::GetRhombus(int index)
{
	return data[index].GetRhombus();
}
template <class T1, class T2, class T3> std::shared_ptr<T3> FigureArray<T1, T2, T3>::GetTrapeze(int index)
{
	return data[index].GetTrapeze();
}

template <class T1, class T2, class T3> void FigureArray<T1,T2,T3>::Delete(int index)
{
	data[index] = ArrayItem<T1, T2, T3>();
}

template <class T1, class T2, class T3> std::ostream& operator << (std::ostream &os, FigureArray<T1, T2, T3> &array)
{
	for (int i = 0; i < array.size; i++)
	{
		os << "["<<i<<"] "<<array.data[i] << std::endl;
	}
	return os;
}

template <class T1, class T2, class T3> FigureArray<T1, T2, T3>::~FigureArray() {}

//template <class T1, class T2, class T3> FigureArray<T1, T2, T3>::~FigureArray()
//{
//	for (int i = 0; i < size; i++)
//	{
//		delete data[i];
//	}
//	size = 0;
//}
