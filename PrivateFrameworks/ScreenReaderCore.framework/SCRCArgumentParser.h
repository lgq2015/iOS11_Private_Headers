/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCArgumentParser : SCRCArgumentSubcommand {
    NSString * _appName;
    int  _argc;
    NSMutableArray * _argumentArray;
    char ** _argv;
    bool  _isLaunchedAtLogin;
    SCRCArgumentSubcommand * _subcommand;
    NSMutableArray * _subcommandArray;
}

+ (id)commandPath;
+ (id)processIdentifier;
+ (id)versionString;

- (void).cxx_destruct;
- (id)_displayHelp:(id)arg1;
- (id)_displayVersion:(id)arg1;
- (void)addSubcommand:(id)arg1;
- (id)appName;
- (int)argc;
- (char **)argv;
- (void)dealloc;
- (id)initWithArgc:(int)arg1 argv:(const char **)arg2;
- (bool)isLaunchedAtLogin;
- (bool)parse;
- (int)run;
- (void)setAppName:(id)arg1;
- (id)setRunningAtStartup:(id)arg1;
- (void)stop;

@end
