// Copyright (c) 2020 The Orbit Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

#ifndef ORBIT_LINUX_TRACING_TRACER_LISTENER_H_
#define ORBIT_LINUX_TRACING_TRACER_LISTENER_H_

#include "capture.pb.h"

namespace LinuxTracing {

class TracerListener {
 public:
  virtual ~TracerListener() = default;
  virtual void OnSchedulingSlice(SchedulingSlice scheduling_slice) = 0;
  virtual void OnCallstackSample(CallstackSample callstack_sample) = 0;
  virtual void OnFunctionCall(FunctionCall function_call) = 0;
  virtual void OnGpuJob(GpuJob gpu_job) = 0;
  virtual void OnThreadName(ThreadName thread_name) = 0;
  virtual void OnAddressInfo(AddressInfo address_info) = 0;
};

}  // namespace LinuxTracing

#endif  // ORBIT_LINUX_TRACING_TRACER_LISTENER_H_
