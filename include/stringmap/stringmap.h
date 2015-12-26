// Copyright (c) 2016 Robert Krzyzanowski. All rights reserved.
// Use of this source code is governed by a MIT-style license that can be
// found in the LICENSE file. See the AUTHORS file for names of contributors.

#ifndef STRINGMAP_INCLUDE_STRINGMAP_H
#define STRINGMAP_INCLUDE_STRINGMAP_H

#include <string>
#include <vector>

namespace stringmap {
  // Modeled after http://www-igm.univ-mlv.fr/~dr/COURS_STL/vector.h
  class stringmap {
  public:
    typedef std::string string;

    typedef std::allocator<string> stringmap_allocator;
    typedef stringmap_allocator::pointer pointer;
    typedef stringmap_allocator::pointer iterator;
    typedef stringmap_allocator::const_pointer const_iterator;
    typedef stringmap_allocator::reference reference;
    typedef stringmap_allocator::const_reference const_reference;
    typedef stringmap_allocator::size_type size_type;
    typedef stringmap_allocator::difference_type difference_type;


  };
}

#endif // STRINGMAP_INCLUDE_STRINGMAP_H

