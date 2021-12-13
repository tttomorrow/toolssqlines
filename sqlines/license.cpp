// Copyright (c) 2021 Huawei Technologies Co.,Ltd.

#include "license.h"

bool License::IsLicenseCheckRequired()
{
    return false;
}
bool License::IsEmpty()
{
    return false;
}
void License::Set(const char* exec)
{
    // empty
}
string License::GetName()
{
    return string("Portions Copyright (c) 2021 Huawei Technologies Co.,Ltd.\nPortions Copyright (c) 2016 SQLines");
}
