// ***************************************************************************
//
//   Generated automatically by genwrapper.
//   Please DO NOT EDIT this file!
//
// ***************************************************************************

#include <osgIntrospection/ReflectionMacros>
#include <osgIntrospection/TypedMethodInfo>
#include <osgIntrospection/StaticMethodInfo>
#include <osgIntrospection/Attributes>

#include <osg/AnimationPath>
#include <osg/ApplicationUsage>
#include <osg/Matrixd>
#include <osgGA/AnimationPathManipulator>
#include <osgGA/GUIActionAdapter>
#include <osgGA/GUIEventAdapter>

// Must undefine IN and OUT macros defined in Windows headers
#ifdef IN
#undef IN
#endif
#ifdef OUT
#undef OUT
#endif

BEGIN_OBJECT_REFLECTOR(osgGA::AnimationPathManipulator)
	I_DeclaringFile("osgGA/AnimationPathManipulator");
	I_BaseType(osgGA::MatrixManipulator);
	I_ConstructorWithDefaults1(IN, osg::AnimationPath *, animationPath, 0,
	                           Properties::NON_EXPLICIT,
	                           ____AnimationPathManipulator__osg_AnimationPath_P1,
	                           "",
	                           "");
	I_Constructor1(IN, const std::string &, filename,
	               Properties::NON_EXPLICIT,
	               ____AnimationPathManipulator__C5_std_string_R1,
	               "",
	               "");
	I_Method0(const char *, className,
	          Properties::VIRTUAL,
	          __C5_char_P1__className,
	          "",
	          "");
	I_Method1(void, setPrintOutTimingInfo, IN, bool, printOutTimingInfo,
	          Properties::NON_VIRTUAL,
	          __void__setPrintOutTimingInfo__bool,
	          "",
	          "");
	I_Method0(bool, getPrintOutTimingInfo,
	          Properties::NON_VIRTUAL,
	          __bool__getPrintOutTimingInfo,
	          "",
	          "");
	I_Method1(void, setByMatrix, IN, const osg::Matrixd &, matrix,
	          Properties::VIRTUAL,
	          __void__setByMatrix__C5_osg_Matrixd_R1,
	          "set the position of the matrix manipulator using a 4x4 Matrix. ",
	          "");
	I_Method1(void, setByInverseMatrix, IN, const osg::Matrixd &, matrix,
	          Properties::VIRTUAL,
	          __void__setByInverseMatrix__C5_osg_Matrixd_R1,
	          "set the position of the matrix manipulator using a 4x4 Matrix. ",
	          "");
	I_Method0(osg::Matrixd, getMatrix,
	          Properties::VIRTUAL,
	          __osg_Matrixd__getMatrix,
	          "get the position of the manipulator as 4x4 Matrix. ",
	          "");
	I_Method0(osg::Matrixd, getInverseMatrix,
	          Properties::VIRTUAL,
	          __osg_Matrixd__getInverseMatrix,
	          "get the position of the manipulator as a inverse matrix of the manipulator, typically used as a model view matrix. ",
	          "");
	I_Method1(void, setAnimationPath, IN, osg::AnimationPath *, animationPath,
	          Properties::NON_VIRTUAL,
	          __void__setAnimationPath__osg_AnimationPath_P1,
	          "",
	          "");
	I_Method0(osg::AnimationPath *, getAnimationPath,
	          Properties::NON_VIRTUAL,
	          __osg_AnimationPath_P1__getAnimationPath,
	          "",
	          "");
	I_Method0(const osg::AnimationPath *, getAnimationPath,
	          Properties::NON_VIRTUAL,
	          __C5_osg_AnimationPath_P1__getAnimationPath,
	          "",
	          "");
	I_Method0(bool, valid,
	          Properties::NON_VIRTUAL,
	          __bool__valid,
	          "",
	          "");
	I_Method2(void, init, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          Properties::VIRTUAL,
	          __void__init__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "Start/restart the manipulator. ",
	          "FIXME: what does this actually mean? Provide examples. ");
	I_Method2(void, home, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          Properties::VIRTUAL,
	          __void__home__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "Move the camera to the default position. ",
	          "May be ignored by manipulators if home functionality is not appropriate. ");
	I_Method1(void, home, IN, double, currentTime,
	          Properties::VIRTUAL,
	          __void__home__double,
	          "Move the camera to the default position. ",
	          "This version does not require GUIEventAdapter and GUIActionAdapter so may be called from somewhere other than a handle() method in GUIEventHandler. Application must be aware of implications. ");
	I_Method2(bool, handle, IN, const osgGA::GUIEventAdapter &, ea, IN, osgGA::GUIActionAdapter &, us,
	          Properties::VIRTUAL,
	          __bool__handle__C5_GUIEventAdapter_R1__GUIActionAdapter_R1,
	          "Handle events, return true if handled, false otherwise. ",
	          "");
	I_Method1(void, getUsage, IN, osg::ApplicationUsage &, usage,
	          Properties::VIRTUAL,
	          __void__getUsage__osg_ApplicationUsage_R1,
	          "Get the keyboard and mouse usage of this manipulator. ",
	          "");
	I_ProtectedMethod1(void, handleFrame, IN, double, time,
	                   Properties::NON_VIRTUAL,
	                   Properties::NON_CONST,
	                   __void__handleFrame__double,
	                   "",
	                   "");
	I_SimpleProperty(osg::AnimationPath *, AnimationPath, 
	                 __osg_AnimationPath_P1__getAnimationPath, 
	                 __void__setAnimationPath__osg_AnimationPath_P1);
	I_SimpleProperty(const osg::Matrixd &, ByInverseMatrix, 
	                 0, 
	                 __void__setByInverseMatrix__C5_osg_Matrixd_R1);
	I_SimpleProperty(const osg::Matrixd &, ByMatrix, 
	                 0, 
	                 __void__setByMatrix__C5_osg_Matrixd_R1);
	I_SimpleProperty(osg::Matrixd, InverseMatrix, 
	                 __osg_Matrixd__getInverseMatrix, 
	                 0);
	I_SimpleProperty(osg::Matrixd, Matrix, 
	                 __osg_Matrixd__getMatrix, 
	                 0);
	I_SimpleProperty(bool, PrintOutTimingInfo, 
	                 __bool__getPrintOutTimingInfo, 
	                 __void__setPrintOutTimingInfo__bool);
END_REFLECTOR

