#ifdef USE_TYPEINFO

#include <string>

#include "TypeInfoHelper.h"


namespace CppUnit {

std::string 
TypeInfoHelper::getClassName( const std::type_info &info )
{
  static std::string classPrefix( "class " );

  std::string name( info.name() );

  return ( name.compare( 0, classPrefix.length(), classPrefix ) == 0 ) ?
      name.substr( classPrefix.length() ) : name;
}


} //  namespace CppUnit

#endif // USE_TYPEINFO