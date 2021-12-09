// Copyright (c) 2021 Huawei Technologies Co.,Ltd.

#include <string>
using namespace std;
class License 
{
public:
    bool IsLicenseCheckRequired();
    bool IsEmpty();
    void Set(const char* exec);
    string GetName();
};
