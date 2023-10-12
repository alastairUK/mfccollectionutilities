#pragma once

namespace Microsoft
{
   namespace VisualStudio
   {
      namespace CppUnitTestFramework
      {

         template<>
         inline std::wstring ToString<CString>(CString const& value)
         {
            return std::wstring(value);
         }

         template<>
         inline std::wstring ToString<IntObject>(IntObject* value)
         {
            return value == nullptr ? L"(null)" : std::to_wstring(value->value);
         }
      }
   }
}