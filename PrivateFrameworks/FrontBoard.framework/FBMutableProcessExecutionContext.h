/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBMutableProcessExecutionContext : FBProcessExecutionContext

@property (nonatomic, copy) NSArray *arguments;
@property (nonatomic) bool checkForLeaks;
@property (nonatomic) bool disableASLR;
@property (nonatomic, copy) NSDictionary *environment;
@property (nonatomic) long long launchIntent;
@property (nonatomic, retain) NSURL *standardErrorURL;
@property (nonatomic, retain) NSURL *standardOutputURL;
@property (nonatomic) bool waitForDebugger;
@property (nonatomic) double watchdogExtension;
@property (nonatomic, retain) <FBProcessWatchdogProviding> *watchdogProvider;
@property (nonatomic) double watchdogScaleFactor;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
