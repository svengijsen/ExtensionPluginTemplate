//_extensionname_ 
//Copyright (C) 2015  _authorname_
//
//This file is part of BrainStim.
//BrainStim is free software: you can redistribute it and/or modify
//it under the terms of the GNU General Public License as published by
//the Free Software Foundation, either version 3 of the License, or
//(at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program.  If not, see <http://www.gnu.org/licenses/>.
//


#ifndef _extensionname_DEFINES_H
#define _extensionname_DEFINES_H
#include "maindefines.h"


#define PLUGIN_FILE_VERSION_STRING_MAJOR	1   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_FILE_VERSION_STRING_MINOR	0   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_FILE_VERSION_STRING_REVISION	0   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_FILE_VERSION_STRING_BUILD	1   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_PRODUCT_VERSION_STRING_MAJOR	1   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_PRODUCT_VERSION_STRING_MINOR	0   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_PRODUCT_VERSION_STRING_REVISION	0   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_PRODUCT_VERSION_STRING_BUILD	1   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_LEGAL_COPYRIGHT	"Copyright (C) 2016"   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
#define PLUGIN_AUTHOR_NAME							"_authorname_"
#define PLUGIN_AUTHOR_EMAIL							"authoremail goes here"
#define PLUGIN_COMPANY_NAME							"companyname goes here"
#define PLUGIN_INTERNAL_NAME						"_extensionname_"
#define PLUGIN_SCRIPTOBJECT_NAME					"_extensionname_"
#define PLUGIN_SCRIPTOBJECT_CLASS					"_extensionname_"
#define PLUGIN_PRODUCT_NAME							PLUGIN_INTERNAL_NAME
#define PLUGIN_INTERNAL_EXTENSION					"dll"
#define PLUGIN_ORIGINAL_FILENAME					PLUGIN_INTERNAL_NAME "." PLUGIN_INTERNAL_EXTENSION
#define PLUGIN_FULL_NAME							PLUGIN_INTERNAL_NAME "(v" PLUGIN_FILE_VERSION_STRING ")"
#define PLUGIN_FILE_DESCRIPTION						"<_extensionname_ description goes here>"
#define PLUGIN_INFORMATION							PLUGIN_INTERNAL_NAME " Plugin(v" PLUGIN_FILE_VERSION_STRING ")"
#define PLUGIN_MAIN_PROGRAM_MINIMAL_VERSION	"1.1.0.1"   //Please do not edit this line manually, see PluginBinaryVersioning.qs (151216133113).
//Only edit until here!


#define PLUGIN_FILE_VERSION_STRING				VERSION_STRING_INTERMEDIATE(PLUGIN_FILE_VERSION_STRING_MAJOR,PLUGIN_FILE_VERSION_STRING_MINOR,PLUGIN_FILE_VERSION_STRING_REVISION,PLUGIN_FILE_VERSION_STRING_BUILD)
#define PLUGIN_PRODUCT_VERSION_STRING			VERSION_STRING_INTERMEDIATE(PLUGIN_PRODUCT_VERSION_STRING_MAJOR,PLUGIN_PRODUCT_VERSION_STRING_MINOR,PLUGIN_PRODUCT_VERSION_STRING_REVISION,PLUGIN_PRODUCT_VERSION_STRING_BUILD)
#endif // _extensionname_DEFINES_H




