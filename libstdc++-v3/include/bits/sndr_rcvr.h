// <bits/sndr_rcvr.h> -*- C++ -*-

namespace std {

template<typename Alloc>
  concept __simple_allocator =
    requires(Alloc alloc, size_t n) {
      { *alloc.allocate(n) } -> same_as<typename Alloc::value_type&>;
      { alloc.deallocate(alloc.allocate(n), n) };
    } &&
    copy_constructible<Alloc> &&
    equality_comparable<Alloc>;

} // namespace std
