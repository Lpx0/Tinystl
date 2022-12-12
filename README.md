# Tinystl
   基于C++11实现的简易STL标准库，主要实现了vector、string、deque、list、unordered_set和queue等容器和部分算法
# Tinystl性能测试:

## 测试环境: Windows10 & VS2019 & release模式

### 测试结果:

#### (1):vector\<int\>

```C++
    //std::vector<int> vec;
    TinySTL::vector<int> vec;
    TinySTL::Profiler::ProfilerInstance::start();
    for (int i = 0, maxSize = 1e7; i != maxSize; ++i) {
        vec.push_back(i);
    }
    TinySTL::Profiler::ProfilerInstance::finish();
    TinySTL::Profiler::ProfilerInstance::dumpDuringTime();
```

| container | quantity | time(ms) |
|---|---|---|
|TinySTL::vector\<int\>|1e5|1.2|
|TinySTL::vector\<int\>|1e6|6.7|
|TinySTL::vector\<int\>|1e7|82|
|std::vector\<int\>|1e5|0.8|
|std::vector\<int\>|1e6|5.3|
|std::vector\<int\>|1e7|60|

#### (2):vector\<string\>

```C++
    // std::vector<std::string> vec;
    TinySTL::vector<string> vec;
    TinySTL::Profiler::ProfilerInstance::start();
    for (int i = 0, maxSize = 1e7; i != maxSize; ++i) {
        vec.push_back(std::string("linpeixian"));
    }
    TinySTL::Profiler::ProfilerInstance::finish();
    TinySTL::Profiler::ProfilerInstance::dumpDuringTime();
```

| container | quantity | time(ms) |
|---|---|---|
|TinySTL::vector\<string\>|1e6|4.8|
|TinySTL::vector\<string\>|1e7|39|
|TinySTL::vector\<string\>|1e8|471|
|std::vector\<string\>|1e6|5.4|
|std::vector\<string\>|1e7|49|
|std::vector\<string\>|1e8|492|

#### (3):deque\<int\>
```C++
    std::deque<int> dq;
    //TinySTL::deque<int> dq;
    TinySTL::Profiler::ProfilerInstance::start();
    int i = 0, maxSize = 1e7;
    for (; i != maxSize / 2; ++i) {
        dq.push_front(i);
    }
    for (; i != maxSize; ++i) {
        dq.push_back(i);
    }
    TinySTL::Profiler::ProfilerInstance::finish();
    TinySTL::Profiler::ProfilerInstance::dumpDuringTime();
```

| container | quantity | time(ms) |
|---|---|---|
|TinySTL::deque\<int\>|1e5|1.7|
|TinySTL::deque\<int\>|1e6|12|
|TinySTL::deque\<int\>|1e7|197|
|std::deque\<int\>|1e5|2.5|
|std::deque\<int\>|1e6|20|
|std::deque\<int\>|1e7|247|



#### (4):list\<int\>
```C++
   //TinySTL::list<int> list;
   std::list<int> list;
   TinySTL::Profiler::ProfilerInstance::start();
   for (int i = 0, maxSize = 1e7; i != maxSize; ++i)
      list.push_back(i);
   TinySTL::Profiler::ProfilerInstance::finish();
   TinySTL::Profiler::ProfilerInstance::dumpDuringTime();
```
| container | quantity | time(ms) |
|---|---|---|
|TinySTL::list\<int\>|1e5|1.9|
|TinySTL::list\<int\>|1e6|17|
|TinySTL::list\<int\>|1e7|147|
|std::list\<int\>|1e5|7.2|
|std::list\<int\>|1e6|83|
|std::list\<int\>|1e7|667|

#### (5):unordered_set\<int\>
```C++
    TinySTL::Unordered_set<int> ust(10);
    //std::unordered_set<int> ust(10);
    const int insert_count = 1e6;
    const int query_count = 1e8;
    TinySTL::Profiler::ProfilerInstance::start();
    for (int i = 0; i != insert_count; ++i) {
        ust.insert(i);
    }
    TinySTL::Profiler::ProfilerInstance::finish();
    TinySTL::Profiler::ProfilerInstance::dumpDuringTime();

    TinySTL::Profiler::ProfilerInstance::start();
    for (int i = 0; i != query_count; ++i) {
        ust.count(i);
    }
    TinySTL::Profiler::ProfilerInstance::finish();
    TinySTL::Profiler::ProfilerInstance::dumpDuringTime();
```
| container | quantity | insert time(ms) | query time(ms)|
|---|---|---|---|
|TinySTL::unordered_set\<int\>|1e4/1e8|4.2|42|
|TinySTL::unordered_set\<int\>|1e5/1e8|80|40|
|TinySTL::unordered_set\<int\>|1e6/1e8|627|47|
|std::unordered_set\<int\>|1e4/1e8|1.1|44|
|std::unordered_set\<int\>|1e5/1e8|15|46|
|std::unordered_set\<int\>|1e6/1e8|260|42|


