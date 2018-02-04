/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNRingerSwitchObserver : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    int  _ringerStateNotifyToken;
    bool  _ringerSwitchEnabled;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (nonatomic) int ringerStateNotifyToken;
@property (nonatomic) bool ringerSwitchEnabled;

+ (id)sharedObserver;

- (void).cxx_destruct;
- (void)dealloc;
- (id)dispatchQueue;
- (bool)fetchRingerSwitchEnabled;
- (id)init;
- (void)loadPropertiesOnConcurrentQueue;
- (void)registerForRingerStateNotifications;
- (int)ringerStateNotifyToken;
- (bool)ringerSwitchEnabled;
- (void)setDispatchQueue:(id)arg1;
- (void)setRingerStateNotifyToken:(int)arg1;
- (void)setRingerSwitchEnabled:(bool)arg1;
- (unsigned long long)stateForNotifyToken:(int)arg1;
- (void)unregisterForRingerStateNotifications;

@end
