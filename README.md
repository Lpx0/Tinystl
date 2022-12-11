# Tinystl
   

# Tinystl性能测试:

## 测试环境: Windows 10 & VS2019 & release模式

### 测试结果:

#### (1):vector<int>

```C++
    //std::vector<int> vec;
    TinySTL::vector<int> vec;
    TinySTL::Profiler::ProfilerInstance::start();
    int i = 0;
    for (; i != 10000000; ++i) {
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

#### (2):vector<string>

```C++
    // std::vector<std::string> vec;
    TinySTL::vector<string> vec;
    TinySTL::Profiler::ProfilerInstance::start();
    int i = 0;
    for (; i != ms; ++i) {
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

#### (3):deque<int>
```C++
    std::deque<int> dq;
    //TinySTL::deque<int> dq;
    ProfilerInstance::start();
    const int max = 1e7;
    int i = 0;
    for (; i != max / 2; ++i) {
        dq.push_front(i);
    }
    for (; i != max; ++i) {
        dq.push_back(i);
    }
    ProfilerInstance::finish();
    ProfilerInstance::dumpDuringTime();
```

| container | quantity | time(ms) |
|---|---|---|
|TinySTL::deque\<int\>|1e5|1.7|
|TinySTL::deque\<int\>|1e6|12|
|TinySTL::deque\<int\>|1e7|197|
|std::deque\<int\>|1e5|2.5|
|std::deque\<int\>|1e6|20|
|std::deque\<int\>|1e7|247|



