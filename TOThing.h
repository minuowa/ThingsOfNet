#pragma once
typedef __int64 I64;
typedef I64 IPV6;
//-------------------------------------------------------------------------
/**
	@brief ��Ʒ
	��;�������������ܵ�ǿ����������Ĺ��ܰ�����������ģ�飨��һ�����ݣ���һ��Ӧ��������
�ͷ�����������ģ�飨��ɷ����¶ȵ���ˮ�������߼���Ӧ��������ϵͳ��

	@author nnboy,2015/02/12 
*/
class TOThing
{
public:
    TOThing ( void );
    ~TOThing ( void );

    /** �㲥 **/
    void boardcastMe();

	/** �������� **/
    bool connect ( IPV6 ip, int port );

	/** �������� **/
    void send ( GString msg );

	/** �������� **/
	void accept();

	/** ɨ������ **/
	void scane();

	/**  **/
	void onPKG();
private:
    int mClassID;
    I64 mUniqueID;
    GString mName;
};

