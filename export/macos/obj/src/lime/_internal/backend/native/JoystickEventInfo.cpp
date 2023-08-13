// Generated by Haxe 4.3.1
#include <hxcpp.h>

#ifndef INCLUDED_lime__internal_backend_native_JoystickEventInfo
#include <lime/_internal/backend/native/JoystickEventInfo.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_21cd05885e6e0032_726_new,"lime._internal.backend.native.JoystickEventInfo","new",0x6a2decec,"lime._internal.backend.native.JoystickEventInfo.new","lime/_internal/backend/native/NativeApplication.hx",726,0xc1eba895)
HX_LOCAL_STACK_FRAME(_hx_pos_21cd05885e6e0032_737_clone,"lime._internal.backend.native.JoystickEventInfo","clone",0x72666ae9,"lime._internal.backend.native.JoystickEventInfo.clone","lime/_internal/backend/native/NativeApplication.hx",737,0xc1eba895)
namespace lime{
namespace _internal{
namespace backend{
namespace native{

void JoystickEventInfo_obj::__construct( ::Dynamic type,::hx::Null< int >  __o_id,::hx::Null< int >  __o_index,::hx::Null< int >  __o_value,::hx::Null< Float >  __o_x,::hx::Null< Float >  __o_y){
            		int id = __o_id.Default(0);
            		int index = __o_index.Default(0);
            		int value = __o_value.Default(0);
            		Float x = __o_x.Default(0);
            		Float y = __o_y.Default(0);
            	HX_STACKFRAME(&_hx_pos_21cd05885e6e0032_726_new)
HXLINE( 727)		this->type = ( (int)(type) );
HXLINE( 728)		this->id = id;
HXLINE( 729)		this->index = index;
HXLINE( 730)		this->eventValue = value;
HXLINE( 731)		this->x = x;
HXLINE( 732)		this->y = y;
            	}

Dynamic JoystickEventInfo_obj::__CreateEmpty() { return new JoystickEventInfo_obj; }

void *JoystickEventInfo_obj::_hx_vtable = 0;

Dynamic JoystickEventInfo_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< JoystickEventInfo_obj > _hx_result = new JoystickEventInfo_obj();
	_hx_result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3],inArgs[4],inArgs[5]);
	return _hx_result;
}

bool JoystickEventInfo_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x442f8f48;
}

 ::lime::_internal::backend::native::JoystickEventInfo JoystickEventInfo_obj::clone(){
            	HX_GC_STACKFRAME(&_hx_pos_21cd05885e6e0032_737_clone)
HXDLIN( 737)		return  ::lime::_internal::backend::native::JoystickEventInfo_obj::__alloc( HX_CTX ,this->type,this->id,this->index,this->eventValue,this->x,this->y);
            	}


HX_DEFINE_DYNAMIC_FUNC0(JoystickEventInfo_obj,clone,return )


JoystickEventInfo_obj::JoystickEventInfo_obj()
{
}

::hx::Val JoystickEventInfo_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { return ::hx::Val( x ); }
		if (HX_FIELD_EQ(inName,"y") ) { return ::hx::Val( y ); }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return ::hx::Val( id ); }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { return ::hx::Val( type ); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { return ::hx::Val( index ); }
		if (HX_FIELD_EQ(inName,"clone") ) { return ::hx::Val( clone_dyn() ); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eventValue") ) { return ::hx::Val( eventValue ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val JoystickEventInfo_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< Float >(); return inValue; }
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< Float >(); return inValue; }
		break;
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< int >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< int >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"index") ) { index=inValue.Cast< int >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"eventValue") ) { eventValue=inValue.Cast< int >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void JoystickEventInfo_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("id",db,5b,00,00));
	outFields->push(HX_("index",12,9b,14,be));
	outFields->push(HX_("type",ba,f2,08,4d));
	outFields->push(HX_("eventValue",f7,88,13,ae));
	outFields->push(HX_("x",78,00,00,00));
	outFields->push(HX_("y",79,00,00,00));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo JoystickEventInfo_obj_sMemberStorageInfo[] = {
	{::hx::fsInt,(int)offsetof(JoystickEventInfo_obj,id),HX_("id",db,5b,00,00)},
	{::hx::fsInt,(int)offsetof(JoystickEventInfo_obj,index),HX_("index",12,9b,14,be)},
	{::hx::fsInt,(int)offsetof(JoystickEventInfo_obj,type),HX_("type",ba,f2,08,4d)},
	{::hx::fsInt,(int)offsetof(JoystickEventInfo_obj,eventValue),HX_("eventValue",f7,88,13,ae)},
	{::hx::fsFloat,(int)offsetof(JoystickEventInfo_obj,x),HX_("x",78,00,00,00)},
	{::hx::fsFloat,(int)offsetof(JoystickEventInfo_obj,y),HX_("y",79,00,00,00)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *JoystickEventInfo_obj_sStaticStorageInfo = 0;
#endif

static ::String JoystickEventInfo_obj_sMemberFields[] = {
	HX_("id",db,5b,00,00),
	HX_("index",12,9b,14,be),
	HX_("type",ba,f2,08,4d),
	HX_("eventValue",f7,88,13,ae),
	HX_("x",78,00,00,00),
	HX_("y",79,00,00,00),
	HX_("clone",5d,13,63,48),
	::String(null()) };

::hx::Class JoystickEventInfo_obj::__mClass;

void JoystickEventInfo_obj::__register()
{
	JoystickEventInfo_obj _hx_dummy;
	JoystickEventInfo_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("lime._internal.backend.native.JoystickEventInfo",fa,46,aa,2f);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(JoystickEventInfo_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< JoystickEventInfo_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = JoystickEventInfo_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = JoystickEventInfo_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace lime
} // end namespace _internal
} // end namespace backend
} // end namespace native