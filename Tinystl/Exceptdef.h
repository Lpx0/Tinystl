#ifndef _EXCEPTDEF_H_
#define _EXCEPTDEF_H_


#include<stdexcept>
#include<cassert>

namespace TinySTL {
#define TINYSTL_DEBUG(expr) assert(expr);
#define THROW_LENGTH_ERROR_IF(expr, what) if((expr)) throm std::length_error(what)
#define THROW_OUT_OF_RANGE_IF(expr, what) if((expr)) throw std::out_of_range(what)
#define THROW_RUNTIME_ERROR_IF(expr, what) if((expr)) throw std::runtime_error(what)
}

#endif