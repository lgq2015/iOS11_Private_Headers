/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
 */

@interface CRCarPlayAppBlacklist : NSObject {
    NSObject<OS_dispatch_queue> * _blacklistAccessQueue;
    NSSet * _blacklistedBundleIDs;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *blacklistAccessQueue;
@property (nonatomic, retain) NSSet *blacklistedBundleIDs;

- (void).cxx_destruct;
- (void)_fetchAppBlacklistWithReply:(id /* block */)arg1;
- (id)_init;
- (id)blacklistAccessQueue;
- (id)blacklistedBundleIDs;
- (bool)containsBundleIdentifier:(id)arg1;
- (id)init;
- (void)setBlacklistAccessQueue:(id)arg1;
- (void)setBlacklistedBundleIDs:(id)arg1;

@end
