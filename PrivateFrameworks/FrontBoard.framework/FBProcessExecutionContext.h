/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBProcessExecutionContext : NSObject <NSCopying, NSMutableCopying> {
    NSArray * _arguments;
    bool  _checkForLeaks;
    bool  _disableASLR;
    NSDictionary * _environment;
    unsigned int  _launchAssertionFlags;
    long long  _launchIntent;
    NSURL * _standardErrorURL;
    NSURL * _standardOutputURL;
    bool  _waitForDebugger;
    double  _watchdogExtension;
    <FBProcessWatchdogProviding> * _watchdogProvider;
    double  _watchdogScaleFactor;
}

@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic) bool checkForLeaks;
@property (nonatomic) bool disableASLR;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic) unsigned int launchAssertionFlags;
@property (nonatomic) long long launchIntent;
@property (nonatomic, retain) NSURL *standardErrorURL;
@property (nonatomic, retain) NSURL *standardOutputURL;
@property (nonatomic) bool waitForDebugger;
@property (nonatomic) double watchdogExtension;
@property (nonatomic, retain) <FBProcessWatchdogProviding> *watchdogProvider;
@property (nonatomic) double watchdogScaleFactor;

- (id)_initWithExecutionContext:(id)arg1;
- (unsigned int)_launchAssertionFlags;
- (id)arguments;
- (bool)checkForLeaks;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)disableASLR;
- (id)environment;
- (id)init;
- (unsigned int)launchAssertionFlags;
- (long long)launchIntent;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setArguments:(id)arg1;
- (void)setCheckForLeaks:(bool)arg1;
- (void)setDisableASLR:(bool)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setLaunchAssertionFlags:(unsigned int)arg1;
- (void)setLaunchIntent:(long long)arg1;
- (void)setStandardErrorURL:(id)arg1;
- (void)setStandardOutputURL:(id)arg1;
- (void)setWaitForDebugger:(bool)arg1;
- (void)setWatchdogExtension:(double)arg1;
- (void)setWatchdogProvider:(id)arg1;
- (void)setWatchdogScaleFactor:(double)arg1;
- (id)standardErrorURL;
- (id)standardOutputURL;
- (bool)waitForDebugger;
- (double)watchdogExtension;
- (id)watchdogProvider;
- (double)watchdogScaleFactor;

@end
