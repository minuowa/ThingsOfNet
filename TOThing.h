#pragma once
typedef __int64 I64;
typedef I64 IPV6;
//-------------------------------------------------------------------------
/**
	@brief 物品
	用途决定处理器功能的强弱。最基本的功能包括接收数据模块（如一个灯泡），一般应包括接收
和发送数据两个模块（如可反馈温度的热水器），高级的应有完整的系统。

	@author nnboy,2015/02/12 
*/
class TOThing
{
public:
    TOThing ( void );
    ~TOThing ( void );

    /** 广播 **/
    void boardcastMe();

	/** 连接网络 **/
    bool connect ( IPV6 ip, int port );

	/** 发送数据 **/
    void send ( GString msg );

	/** 接收数据 **/
	void accept();

	/** 扫描网络 **/
	void scane();

	/**  **/
	void onPKG();
private:
    int mClassID;
    I64 mUniqueID;
    GString mName;
};

