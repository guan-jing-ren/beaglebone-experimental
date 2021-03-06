#ifndef _OFFSET_REGISTER_HPP_
#define _OFFSET_REGISTER_HPP_

#include "../fundamental-machines/basic_register.hpp"

template <typename E, std::size_t... fields>
struct offset_register : public fm::memory_mapped_register<E, fields...> {
  using field_type = E;

  template <typename T>
  offset_register(T t)
      : fm::memory_mapped_register<E, fields...>(
            static_cast<T>(E::offset) + t) {}
};

#endif