
#include <pxr/pxr.h>

#include "../utils/boost_include_wrapper.h"
#include BOOST_INCLUDE(python/class.hpp)
#include BOOST_INCLUDE(python/return_value_policy.hpp)

#include "resolver.h"

using namespace AR_BOOST_NAMESPACE::python;

PXR_NAMESPACE_USING_DIRECTIVE

void
wrapResolver()
{
    using This = UsdResolverExampleResolver;

    class_<This, bases<ArResolver>, AR_BOOST_NAMESPACE::noncopyable>
        ("Resolver", no_init)
        .def("SetDefaultSearchPaths", &This::SetDefaultSearchPaths, args("searchPath"))
        .staticmethod("SetDefaultSearchPaths");
}