// Copyright (c) Microsoft Corporation. All rights reserved.
// Licensed under the MIT License.

#pragma once

#include "ocos.h"
#include "string_utils.h"

struct KernelStringHash : BaseKernel {
  KernelStringHash(const OrtApi& api, const OrtKernelInfo& info);
  void Compute(OrtKernelContext* context);
};

struct CustomOpStringHash : OrtW::CustomOpBase<CustomOpStringHash, KernelStringHash> {
  const char* GetName() const;
  size_t GetInputTypeCount() const;
  ONNXTensorElementDataType GetInputType(size_t index) const;
  size_t GetOutputTypeCount() const;
  ONNXTensorElementDataType GetOutputType(size_t index) const;
};

struct KernelStringHashFast : BaseKernel {
  KernelStringHashFast(const OrtApi& api, const OrtKernelInfo& info);
  void Compute(OrtKernelContext* context);
};

struct CustomOpStringHashFast : OrtW::CustomOpBase<CustomOpStringHashFast, KernelStringHashFast> {
  const char* GetName() const;
  size_t GetInputTypeCount() const;
  ONNXTensorElementDataType GetInputType(size_t index) const;
  size_t GetOutputTypeCount() const;
  ONNXTensorElementDataType GetOutputType(size_t index) const;
};
