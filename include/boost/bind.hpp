#ifndef BOOST_BIND_HPP_INCLUDED
#define BOOST_BIND_HPP_INCLUDED

// MS compatible compilers support #pragma once

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

//  bind.hpp - binds function objects to arguments
//
//  Copyright (c) 2009, 2015 Peter Dimov
//
//  Distributed under the Boost Software License, Version 1.0.
//  See accompanying file LICENSE_1_0.txt or copy at
//  http://www.boost.org/LICENSE_1_0.txt
//
//  See http://www.boost.org/libs/bind/bind.html for documentation.
//
//  For backward compatibility, this header includes
//  <boost/bind/bind.hpp> and then imports the placeholders _1, _2,
//  _3, ... into the global namespace. Definitions in the global
//  namespace are not a good practice and this use is deprecated.
//  Please switch to including <boost/bind/bind.hpp> directly,
//  adding the using directive locally where appropriate.

#include <boost/config/header_deprecated.hpp>
BOOST_HEADER_DEPRECATED( "<boost/bind/bind.hpp>" )

#include <boost/bind/bind.hpp>

#ifndef BOOST_BIND_NO_PLACEHOLDERS

#if defined(BOOST_CLANG)
# pragma clang diagnostic push
# if  __has_warning("-Wheader-hygiene")
#  pragma clang diagnostic ignored "-Wheader-hygiene"
# endif
#endif

using namespace boost::placeholders;

#if defined(BOOST_CLANG)
# pragma clang diagnostic pop
#endif

#endif // #ifndef BOOST_BIND_NO_PLACEHOLDERS

#endif // #ifndef BOOST_BIND_HPP_INCLUDED
