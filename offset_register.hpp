#ifndef _OFFSET_REGISTER_HPP_
#define _OFFSET_REGISTER_HPP_

template <typename E, std::size_t... fields>
struct offset_register : public fm::memory_mapped_register<E, fields...> {
  template <typename T>
  offset_register(T t)
      : fm::memory_mapped_register<E, fields...>(E::offset + t) {}
};

#endif