# Tinystl

#Tinystl性能测试:###测试环境: Windows 10 && VS2019 && release模式

###测试结果:
####(1):string




####(2):vector<int>

```C++
    std::vector<int> vec;
    //TinySTL::vector<int> vec;
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
