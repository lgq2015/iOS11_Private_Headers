/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CMKAvalancheSession : NSObject {
    NSMutableDictionary * __assets;
    CIBurstImageSet * __burstImageSet;
    NSDate * __expirationDate;
    NSObject<OS_dispatch_queue> * __expirationQueue;
    NSObject<OS_dispatch_source> * __expirationTimer;
    id /* block */  _completionHandler;
    <CMKAvalancheSessionDelegate> * _delegate;
    unsigned long long  _numberOfPhotos;
    CMKInflightAsset * _possibleAvalancheAsset;
    long long  _state;
    long long  _type;
    NSString * _uuid;
}

@property (nonatomic, readonly) NSMutableDictionary *_assets;
@property (nonatomic, readonly) CIBurstImageSet *_burstImageSet;
@property (setter=_setExpirationDate:, nonatomic, retain) NSDate *_expirationDate;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *_expirationQueue;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *_expirationTimer;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic) <CMKAvalancheSessionDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long numberOfPhotos;
@property (setter=_setPossibleAvalancheAsset:, nonatomic, retain) CMKInflightAsset *possibleAvalancheAsset;
@property (setter=_setState:, nonatomic) long long state;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)_assets;
- (id)_burstImageSet;
- (void)_didTransitionToState:(long long)arg1;
- (bool)_ensureValidStateChange:(long long)arg1;
- (id)_expirationDate;
- (id)_expirationQueue;
- (id)_expirationTimer;
- (void)_expirationTimerFired;
- (void)_setExpirationDate:(id)arg1;
- (void)_setPossibleAvalancheAsset:(id)arg1;
- (void)_setState:(long long)arg1;
- (void)_setupExpirationTimer;
- (void)_teardownExpirationTimer;
- (void)_transitionToState:(long long)arg1;
- (void)addAssetForAnalysis:(id)arg1 withIOSurface:(struct __IOSurface { }*)arg2 metadata:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)allAssetIdentifiers;
- (id)assetWithUUID:(id)arg1;
- (id)assetsWithUUIDs:(id)arg1;
- (id)bestAssetIndentifiers;
- (id /* block */)completionHandler;
- (void)dealloc;
- (id)delegate;
- (bool)extend;
- (void)finalizeWithAnalysis:(bool)arg1;
- (id)init;
- (id)initWithType:(long long)arg1;
- (unsigned long long)numberOfPhotos;
- (id)possibleAvalancheAsset;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (id)stackAssetIdentifier;
- (long long)state;
- (long long)type;
- (id)uuid;

@end
