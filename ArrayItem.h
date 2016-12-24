//what has been changed in 4 lab
#ifndef ARRAYITEM_H
#define ARRAYITEM_H
#include "Pentagon.h"
#include "Rhombus.h"
#include "Trapeze.h"
#include <memory>
template <class T1, class T2, class T3>

		template <class T1, class T2, class T3> friend std::ostream& operator << (std::ostream &os, ArrayItem<T1,T2,T3> &item);

		//virtual ~ArrayItem();


};
#endif // ARRAYITEM_H

#ifndef FIGUREARRAY_H
#define FIGUREARRAY_H
#include "Trapeze.h"
#include "Pentagon.h"
#include "Rhombus.h"
#include "ArrayItem.cpp"
#include <memory>
template <class T1, class T2, class T3>

FigureArray(int size);

template <class T1, class T2, class T3> friend std::ostream& operator << (std::ostream &os, FigureArray<T1,T2,T3> &array);

private:
ArrayItem<T1,T2,T3> *data;
int size;
};

//#include "FigureArray.cpp"
#endif
