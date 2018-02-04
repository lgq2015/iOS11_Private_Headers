/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTDebugObserverHolder : NSObject <BBObserverDelegate> {
    BBObserver * _observer;
    <BLTDebugObserverWatchKitAppList> * _wkAppList;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)startWithWKAppList:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (id)initWithWKAppList:(id)arg1;
- (void)observer:(id)arg1 addBulletin:(id)arg2 forFeed:(unsigned long long)arg3 playLightsAndSirens:(bool)arg4 withReply:(id /* block */)arg5;

@end
