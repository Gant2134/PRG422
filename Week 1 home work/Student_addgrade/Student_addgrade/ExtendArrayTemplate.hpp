#ifndef EXTENDARRAYTEMPLATE_HPP
#define EXTENDARRAYTEMPLATE_HPP

template<typename T> void ExtendArray(T**ptr, int old_cap, int new_cap)
{
	T* backup = new T[old_cap];
	for (int i = 0; i < old_cap; i++)
	{
		backup[i] = (*ptr)[i];
	}
	delete[] * ptr;
	*ptr = new T[new_cap];
	for (int i = 0; i < old_cap; i++)
	{
		(*ptr)[i] = backup[i];
	}
	delete[]backup;
}


#endif // EXTENDARRAYTEMPLATE_HPP defined
