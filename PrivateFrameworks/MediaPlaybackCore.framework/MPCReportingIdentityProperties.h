/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
 */

@interface MPCReportingIdentityProperties : NSObject {
    SSVPlayActivityEnqueuerProperties * _enqueuerProperties;
    bool  _hasSubscriptionPlaybackCapability;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
}

@property (nonatomic, copy) SSVPlayActivityEnqueuerProperties *enqueuerProperties;
@property (nonatomic) bool hasSubscriptionPlaybackCapability;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, copy) NSString *storeFrontID;

- (void).cxx_destruct;
- (id)enqueuerProperties;
- (bool)hasSubscriptionPlaybackCapability;
- (void)setEnqueuerProperties:(id)arg1;
- (void)setHasSubscriptionPlaybackCapability:(bool)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreFrontID:(id)arg1;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;

@end
