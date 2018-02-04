/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCRemoteDefaults : NSObject {
    <FCBackgroundTaskable> * _backgroundTaskable;
    FCThreadSafeMutableDictionary * _remoteDefaults;
}

@property (nonatomic, readonly) <FCBackgroundTaskable> *backgroundTaskable;
@property (nonatomic, readonly) FCThreadSafeMutableDictionary *remoteDefaults;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)URLRequest;
- (id)backgroundTaskable;
- (void)checkForUpdate;
- (id)dictionaryForKey:(id)arg1;
- (id)init;
- (id)initWithBackgroundTaskable:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)processResponse:(id)arg1 data:(id)arg2 error:(id)arg3;
- (id)remoteDefaults;
- (id)stringForKey:(id)arg1;
- (void)updateRemoteDefaults;

@end
