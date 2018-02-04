/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADWatchDogManager : ADSingleton {
    NSNumber * _currentToken;
    NSMutableDictionary * _tokenCollection;
    NSObject<OS_dispatch_queue> * _watchdogQueue;
}

@property (nonatomic, retain) NSNumber *currentToken;
@property (nonatomic, readonly) NSMutableDictionary *tokenCollection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)createNewWatchdog:(id)arg1 withTimer:(unsigned long long)arg2;
- (id)currentToken;
- (id)getNextToken;
- (void)incrementToken;
- (id)init;
- (bool)removeWatchdogWithToken:(id)arg1;
- (void)setCurrentToken:(id)arg1;
- (void)simulateCrash:(id)arg1 becauseOf:(unsigned long long)arg2 actuallyTook:(double)arg3;
- (id)tokenCollection;
- (bool)updateReason:(id)arg1 forToken:(id)arg2;

@end
