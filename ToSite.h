#pragma once
class TOSite
{
public:
    TOSite ( void );
    ~TOSite ( void );

    void start();

    void accept();

    void send ( GString msg );

    void onPKG ( int pkgid );

	void saveConfig();

	bool loadConfig();

	void process();
};

