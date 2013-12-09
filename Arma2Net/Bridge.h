/*
* Copyright 2013 Arma2NET Developers
*
* Licensed under the Apache License, Version 2.0 (the "License");
* you may not use this file except in compliance with the License.
* You may obtain a copy of the License at
*
*     http://www.apache.org/licenses/LICENSE-2.0
*
* Unless required by applicable law or agreed to in writing, software
* distributed under the License is distributed on an "AS IS" BASIS,
* WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
* See the License for the specific language governing permissions and
* limitations under the License.
*/

#pragma once

#include "AddinManager.h"

using namespace System;
using namespace System::Collections::Generic;
using namespace System::Reflection;

namespace Arma2Net
{
	public ref class Bridge abstract sealed
	{
	private:
		static Dictionary<String^, Assembly^>^ assemblyCache;
		static AddinManager^ addinManager;
		static Assembly^ ResolveAssembly(Object^ sender, ResolveEventArgs^ e);
		static Bridge(void);
	public:
		static String^ InvokeFunction(String^ name, String^ args, int maxResultSize);
		static void InvokeFunction(char* output, int outputSize, const char* function);
	};
}