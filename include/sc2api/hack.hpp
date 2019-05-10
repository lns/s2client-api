#pragma once
#include <memory>

// note: this implementation does not disable this overload for array types
template<typename T, typename... Args>
std::unique_ptr<T> hack_make_unique(Args&&... args)
{
  return std::unique_ptr<T>(new T(std::forward<Args>(args)...));
}

