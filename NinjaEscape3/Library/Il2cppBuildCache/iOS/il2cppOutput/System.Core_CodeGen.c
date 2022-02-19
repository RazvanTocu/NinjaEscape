#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentOutOfRange(System.String)
extern void Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2 (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000E TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000F System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000011 TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000012 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000013 TSource System.Linq.Enumerable::ElementAt(System.Collections.Generic.IEnumerable`1<TSource>,System.Int32)
// 0x00000014 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000016 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000017 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000018 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000019 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000001A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000001B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000001C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000001D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000001E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000001F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000021 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000023 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000024 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000025 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000027 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000028 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000029 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000002B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000002D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000002E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000002F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000030 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000031 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000032 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000033 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000034 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000035 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000046 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000047 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000048 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000049 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000004A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000004B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000004C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000004D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000004E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000004F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000050 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000051 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000052 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000053 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000054 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000055 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000056 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000057 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000058 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000059 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000005A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000005B System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000005C System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x0000005D System.Boolean System.Linq.Set`1::Add(TElement)
// 0x0000005E System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x0000005F System.Void System.Linq.Set`1::Resize()
// 0x00000060 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000061 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000062 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000063 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000064 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000065 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000066 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000067 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000068 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000069 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x0000006A System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x0000006B System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000006C System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000006D System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000006E System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000006F System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x00000070 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x00000071 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x00000072 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x00000073 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000074 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000075 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000076 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000077 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000078 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000079 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x0000007A System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000007B System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000007C System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000007D System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000007E System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000007F System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x00000080 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000081 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000082 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000083 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000084 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000085 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000086 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000087 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000088 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000089 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000008A System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000008B System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000008C System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000008D System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x0000008E System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x0000008F System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000090 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000091 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000092 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000093 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[147] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_ArgumentOutOfRange_m2EFB999454161A6B48F8DAC3753FDC190538F0F2,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[147] = 
{
	3155,
	3155,
	3270,
	3270,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[47] = 
{
	{ 0x02000004, { 72, 4 } },
	{ 0x02000005, { 76, 9 } },
	{ 0x02000006, { 87, 7 } },
	{ 0x02000007, { 96, 10 } },
	{ 0x02000008, { 108, 11 } },
	{ 0x02000009, { 122, 9 } },
	{ 0x0200000A, { 134, 12 } },
	{ 0x0200000B, { 149, 1 } },
	{ 0x0200000C, { 150, 2 } },
	{ 0x0200000D, { 152, 12 } },
	{ 0x0200000E, { 164, 11 } },
	{ 0x02000010, { 175, 8 } },
	{ 0x02000012, { 183, 3 } },
	{ 0x02000013, { 186, 5 } },
	{ 0x02000014, { 191, 7 } },
	{ 0x02000015, { 198, 3 } },
	{ 0x02000016, { 201, 7 } },
	{ 0x02000017, { 208, 4 } },
	{ 0x02000018, { 212, 21 } },
	{ 0x0200001A, { 233, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 2 } },
	{ 0x0600000E, { 38, 3 } },
	{ 0x0600000F, { 41, 2 } },
	{ 0x06000010, { 43, 4 } },
	{ 0x06000011, { 47, 3 } },
	{ 0x06000012, { 50, 3 } },
	{ 0x06000013, { 53, 3 } },
	{ 0x06000014, { 56, 1 } },
	{ 0x06000015, { 57, 3 } },
	{ 0x06000016, { 60, 2 } },
	{ 0x06000017, { 62, 3 } },
	{ 0x06000018, { 65, 2 } },
	{ 0x06000019, { 67, 5 } },
	{ 0x06000029, { 85, 2 } },
	{ 0x0600002E, { 94, 2 } },
	{ 0x06000033, { 106, 2 } },
	{ 0x06000039, { 119, 3 } },
	{ 0x0600003E, { 131, 3 } },
	{ 0x06000043, { 146, 3 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[235] = 
{
	{ (Il2CppRGCTXDataType)2, 1628 },
	{ (Il2CppRGCTXDataType)3, 5332 },
	{ (Il2CppRGCTXDataType)2, 2747 },
	{ (Il2CppRGCTXDataType)2, 2324 },
	{ (Il2CppRGCTXDataType)3, 10788 },
	{ (Il2CppRGCTXDataType)2, 1723 },
	{ (Il2CppRGCTXDataType)2, 2331 },
	{ (Il2CppRGCTXDataType)3, 10827 },
	{ (Il2CppRGCTXDataType)2, 2326 },
	{ (Il2CppRGCTXDataType)3, 10795 },
	{ (Il2CppRGCTXDataType)2, 1629 },
	{ (Il2CppRGCTXDataType)3, 5333 },
	{ (Il2CppRGCTXDataType)2, 2761 },
	{ (Il2CppRGCTXDataType)2, 2333 },
	{ (Il2CppRGCTXDataType)3, 10834 },
	{ (Il2CppRGCTXDataType)2, 1740 },
	{ (Il2CppRGCTXDataType)2, 2341 },
	{ (Il2CppRGCTXDataType)3, 10891 },
	{ (Il2CppRGCTXDataType)2, 2337 },
	{ (Il2CppRGCTXDataType)3, 10860 },
	{ (Il2CppRGCTXDataType)2, 585 },
	{ (Il2CppRGCTXDataType)3, 51 },
	{ (Il2CppRGCTXDataType)3, 52 },
	{ (Il2CppRGCTXDataType)2, 1048 },
	{ (Il2CppRGCTXDataType)3, 4054 },
	{ (Il2CppRGCTXDataType)2, 586 },
	{ (Il2CppRGCTXDataType)3, 63 },
	{ (Il2CppRGCTXDataType)3, 64 },
	{ (Il2CppRGCTXDataType)2, 1057 },
	{ (Il2CppRGCTXDataType)3, 4058 },
	{ (Il2CppRGCTXDataType)3, 12610 },
	{ (Il2CppRGCTXDataType)2, 591 },
	{ (Il2CppRGCTXDataType)3, 97 },
	{ (Il2CppRGCTXDataType)2, 2076 },
	{ (Il2CppRGCTXDataType)3, 8708 },
	{ (Il2CppRGCTXDataType)3, 12588 },
	{ (Il2CppRGCTXDataType)2, 587 },
	{ (Il2CppRGCTXDataType)3, 69 },
	{ (Il2CppRGCTXDataType)2, 690 },
	{ (Il2CppRGCTXDataType)3, 848 },
	{ (Il2CppRGCTXDataType)3, 849 },
	{ (Il2CppRGCTXDataType)2, 1724 },
	{ (Il2CppRGCTXDataType)3, 5717 },
	{ (Il2CppRGCTXDataType)2, 1566 },
	{ (Il2CppRGCTXDataType)2, 1168 },
	{ (Il2CppRGCTXDataType)2, 1263 },
	{ (Il2CppRGCTXDataType)2, 1345 },
	{ (Il2CppRGCTXDataType)2, 1264 },
	{ (Il2CppRGCTXDataType)2, 1346 },
	{ (Il2CppRGCTXDataType)3, 4056 },
	{ (Il2CppRGCTXDataType)2, 1265 },
	{ (Il2CppRGCTXDataType)2, 1347 },
	{ (Il2CppRGCTXDataType)3, 4057 },
	{ (Il2CppRGCTXDataType)2, 1565 },
	{ (Il2CppRGCTXDataType)2, 1262 },
	{ (Il2CppRGCTXDataType)2, 1344 },
	{ (Il2CppRGCTXDataType)2, 1252 },
	{ (Il2CppRGCTXDataType)2, 1253 },
	{ (Il2CppRGCTXDataType)2, 1341 },
	{ (Il2CppRGCTXDataType)3, 4053 },
	{ (Il2CppRGCTXDataType)2, 1167 },
	{ (Il2CppRGCTXDataType)2, 1260 },
	{ (Il2CppRGCTXDataType)2, 1261 },
	{ (Il2CppRGCTXDataType)2, 1343 },
	{ (Il2CppRGCTXDataType)3, 4055 },
	{ (Il2CppRGCTXDataType)2, 1166 },
	{ (Il2CppRGCTXDataType)3, 12575 },
	{ (Il2CppRGCTXDataType)3, 3490 },
	{ (Il2CppRGCTXDataType)2, 937 },
	{ (Il2CppRGCTXDataType)2, 1255 },
	{ (Il2CppRGCTXDataType)2, 1342 },
	{ (Il2CppRGCTXDataType)2, 1408 },
	{ (Il2CppRGCTXDataType)3, 5334 },
	{ (Il2CppRGCTXDataType)3, 5336 },
	{ (Il2CppRGCTXDataType)2, 401 },
	{ (Il2CppRGCTXDataType)3, 5335 },
	{ (Il2CppRGCTXDataType)3, 5344 },
	{ (Il2CppRGCTXDataType)2, 1632 },
	{ (Il2CppRGCTXDataType)2, 2327 },
	{ (Il2CppRGCTXDataType)3, 10796 },
	{ (Il2CppRGCTXDataType)3, 5345 },
	{ (Il2CppRGCTXDataType)2, 1306 },
	{ (Il2CppRGCTXDataType)2, 1370 },
	{ (Il2CppRGCTXDataType)3, 4065 },
	{ (Il2CppRGCTXDataType)3, 12561 },
	{ (Il2CppRGCTXDataType)2, 2338 },
	{ (Il2CppRGCTXDataType)3, 10861 },
	{ (Il2CppRGCTXDataType)3, 5337 },
	{ (Il2CppRGCTXDataType)2, 1631 },
	{ (Il2CppRGCTXDataType)2, 2325 },
	{ (Il2CppRGCTXDataType)3, 10789 },
	{ (Il2CppRGCTXDataType)3, 4064 },
	{ (Il2CppRGCTXDataType)3, 5338 },
	{ (Il2CppRGCTXDataType)3, 12560 },
	{ (Il2CppRGCTXDataType)2, 2334 },
	{ (Il2CppRGCTXDataType)3, 10835 },
	{ (Il2CppRGCTXDataType)3, 5351 },
	{ (Il2CppRGCTXDataType)2, 1633 },
	{ (Il2CppRGCTXDataType)2, 2332 },
	{ (Il2CppRGCTXDataType)3, 10828 },
	{ (Il2CppRGCTXDataType)3, 5763 },
	{ (Il2CppRGCTXDataType)3, 2841 },
	{ (Il2CppRGCTXDataType)3, 4066 },
	{ (Il2CppRGCTXDataType)3, 2840 },
	{ (Il2CppRGCTXDataType)3, 5352 },
	{ (Il2CppRGCTXDataType)3, 12562 },
	{ (Il2CppRGCTXDataType)2, 2342 },
	{ (Il2CppRGCTXDataType)3, 10892 },
	{ (Il2CppRGCTXDataType)3, 5365 },
	{ (Il2CppRGCTXDataType)2, 1635 },
	{ (Il2CppRGCTXDataType)2, 2340 },
	{ (Il2CppRGCTXDataType)3, 10863 },
	{ (Il2CppRGCTXDataType)3, 5366 },
	{ (Il2CppRGCTXDataType)2, 1309 },
	{ (Il2CppRGCTXDataType)2, 1373 },
	{ (Il2CppRGCTXDataType)3, 4070 },
	{ (Il2CppRGCTXDataType)3, 4069 },
	{ (Il2CppRGCTXDataType)2, 2329 },
	{ (Il2CppRGCTXDataType)3, 10798 },
	{ (Il2CppRGCTXDataType)3, 12569 },
	{ (Il2CppRGCTXDataType)2, 2339 },
	{ (Il2CppRGCTXDataType)3, 10862 },
	{ (Il2CppRGCTXDataType)3, 5358 },
	{ (Il2CppRGCTXDataType)2, 1634 },
	{ (Il2CppRGCTXDataType)2, 2336 },
	{ (Il2CppRGCTXDataType)3, 10837 },
	{ (Il2CppRGCTXDataType)3, 4068 },
	{ (Il2CppRGCTXDataType)3, 4067 },
	{ (Il2CppRGCTXDataType)3, 5359 },
	{ (Il2CppRGCTXDataType)2, 2328 },
	{ (Il2CppRGCTXDataType)3, 10797 },
	{ (Il2CppRGCTXDataType)3, 12568 },
	{ (Il2CppRGCTXDataType)2, 2335 },
	{ (Il2CppRGCTXDataType)3, 10836 },
	{ (Il2CppRGCTXDataType)3, 5372 },
	{ (Il2CppRGCTXDataType)2, 1636 },
	{ (Il2CppRGCTXDataType)2, 2344 },
	{ (Il2CppRGCTXDataType)3, 10894 },
	{ (Il2CppRGCTXDataType)3, 5764 },
	{ (Il2CppRGCTXDataType)3, 2843 },
	{ (Il2CppRGCTXDataType)3, 4072 },
	{ (Il2CppRGCTXDataType)3, 4071 },
	{ (Il2CppRGCTXDataType)3, 2842 },
	{ (Il2CppRGCTXDataType)3, 5373 },
	{ (Il2CppRGCTXDataType)2, 2330 },
	{ (Il2CppRGCTXDataType)3, 10799 },
	{ (Il2CppRGCTXDataType)3, 12570 },
	{ (Il2CppRGCTXDataType)2, 2343 },
	{ (Il2CppRGCTXDataType)3, 10893 },
	{ (Il2CppRGCTXDataType)3, 4061 },
	{ (Il2CppRGCTXDataType)3, 4062 },
	{ (Il2CppRGCTXDataType)3, 4073 },
	{ (Il2CppRGCTXDataType)3, 100 },
	{ (Il2CppRGCTXDataType)3, 99 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)2, 1366 },
	{ (Il2CppRGCTXDataType)3, 4063 },
	{ (Il2CppRGCTXDataType)2, 1315 },
	{ (Il2CppRGCTXDataType)2, 1383 },
	{ (Il2CppRGCTXDataType)3, 102 },
	{ (Il2CppRGCTXDataType)2, 523 },
	{ (Il2CppRGCTXDataType)2, 592 },
	{ (Il2CppRGCTXDataType)3, 98 },
	{ (Il2CppRGCTXDataType)3, 101 },
	{ (Il2CppRGCTXDataType)3, 71 },
	{ (Il2CppRGCTXDataType)2, 2165 },
	{ (Il2CppRGCTXDataType)3, 9901 },
	{ (Il2CppRGCTXDataType)2, 1298 },
	{ (Il2CppRGCTXDataType)2, 1364 },
	{ (Il2CppRGCTXDataType)3, 9902 },
	{ (Il2CppRGCTXDataType)3, 73 },
	{ (Il2CppRGCTXDataType)2, 398 },
	{ (Il2CppRGCTXDataType)2, 588 },
	{ (Il2CppRGCTXDataType)3, 70 },
	{ (Il2CppRGCTXDataType)3, 72 },
	{ (Il2CppRGCTXDataType)3, 3523 },
	{ (Il2CppRGCTXDataType)2, 951 },
	{ (Il2CppRGCTXDataType)2, 2843 },
	{ (Il2CppRGCTXDataType)3, 9898 },
	{ (Il2CppRGCTXDataType)3, 9899 },
	{ (Il2CppRGCTXDataType)2, 1422 },
	{ (Il2CppRGCTXDataType)3, 9900 },
	{ (Il2CppRGCTXDataType)2, 340 },
	{ (Il2CppRGCTXDataType)2, 589 },
	{ (Il2CppRGCTXDataType)3, 83 },
	{ (Il2CppRGCTXDataType)3, 8698 },
	{ (Il2CppRGCTXDataType)2, 691 },
	{ (Il2CppRGCTXDataType)3, 850 },
	{ (Il2CppRGCTXDataType)3, 8703 },
	{ (Il2CppRGCTXDataType)3, 2819 },
	{ (Il2CppRGCTXDataType)2, 431 },
	{ (Il2CppRGCTXDataType)3, 8699 },
	{ (Il2CppRGCTXDataType)2, 2073 },
	{ (Il2CppRGCTXDataType)3, 884 },
	{ (Il2CppRGCTXDataType)2, 705 },
	{ (Il2CppRGCTXDataType)2, 913 },
	{ (Il2CppRGCTXDataType)3, 2825 },
	{ (Il2CppRGCTXDataType)3, 8700 },
	{ (Il2CppRGCTXDataType)3, 2814 },
	{ (Il2CppRGCTXDataType)3, 2815 },
	{ (Il2CppRGCTXDataType)3, 2813 },
	{ (Il2CppRGCTXDataType)3, 2816 },
	{ (Il2CppRGCTXDataType)2, 909 },
	{ (Il2CppRGCTXDataType)2, 2806 },
	{ (Il2CppRGCTXDataType)3, 4060 },
	{ (Il2CppRGCTXDataType)3, 2818 },
	{ (Il2CppRGCTXDataType)2, 1238 },
	{ (Il2CppRGCTXDataType)3, 2817 },
	{ (Il2CppRGCTXDataType)2, 1169 },
	{ (Il2CppRGCTXDataType)2, 2764 },
	{ (Il2CppRGCTXDataType)2, 1278 },
	{ (Il2CppRGCTXDataType)2, 1348 },
	{ (Il2CppRGCTXDataType)3, 3506 },
	{ (Il2CppRGCTXDataType)2, 945 },
	{ (Il2CppRGCTXDataType)3, 4365 },
	{ (Il2CppRGCTXDataType)3, 4366 },
	{ (Il2CppRGCTXDataType)3, 4371 },
	{ (Il2CppRGCTXDataType)2, 1417 },
	{ (Il2CppRGCTXDataType)3, 4368 },
	{ (Il2CppRGCTXDataType)3, 12913 },
	{ (Il2CppRGCTXDataType)2, 915 },
	{ (Il2CppRGCTXDataType)3, 2834 },
	{ (Il2CppRGCTXDataType)1, 1235 },
	{ (Il2CppRGCTXDataType)2, 2776 },
	{ (Il2CppRGCTXDataType)3, 4367 },
	{ (Il2CppRGCTXDataType)1, 2776 },
	{ (Il2CppRGCTXDataType)1, 1417 },
	{ (Il2CppRGCTXDataType)2, 2841 },
	{ (Il2CppRGCTXDataType)2, 2776 },
	{ (Il2CppRGCTXDataType)3, 4372 },
	{ (Il2CppRGCTXDataType)3, 4370 },
	{ (Il2CppRGCTXDataType)3, 4369 },
	{ (Il2CppRGCTXDataType)2, 280 },
	{ (Il2CppRGCTXDataType)3, 2844 },
	{ (Il2CppRGCTXDataType)2, 411 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	147,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	47,
	s_rgctxIndices,
	235,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
