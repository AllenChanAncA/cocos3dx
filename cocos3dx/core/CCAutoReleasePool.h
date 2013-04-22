
#ifndef _COCOS3DX_AUTO_RELEASE_POOL_H_
#define _COCOS3DX_AUTO_RELEASE_POOL_H_

namespace cocos3dx
{
	class CCAutoreleasePool
	{
	public:
		CCAutoreleasePool(void);
		virtual ~CCAutoreleasePool(void);
	};
}//namespace cocos3dx

#endif //_COCOS3DX_AUTO_RELEASE_POOL_H_