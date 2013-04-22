
#ifndef _COCOS3DX_OBJECT_H_
#define _COCOS3DX_OBJECT_H_

namespace cocos3dx
{
	class CCObject
	{
	public:
		CCObject(void);
		virtual ~CCObject(void);

	protected:
		// count of references
		unsigned int        m_uReference;
	};
}//namespace cocos3dx

#endif //_COCOS3DX_OBJECT_H_