#include "init.hpp"
#include <safe_epdf_object.hpp>


namespace epdfcrypt {


safe_epdf_object::safe_epdf_object()
{
    static sys_initializer init;
}


safe_epdf_object::~safe_epdf_object()
{
    // nothing
}


} // namespace egpgcrypt


/*
  Local Variables:
  mode: c++
  c-basic-offset: 4
  tab-width: 4
  c-indent-comments-syntactically-p: t
  c-tab-always-indent: t
  indent-tabs-mode: nil
  End:
*/

// vim:shiftwidth=4:autoindent:tabstop=4:expandtab:softtabstop=4
