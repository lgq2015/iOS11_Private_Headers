/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
 */

@interface CDPDKeychainSync : NSObject {
    <CDPDCircleProxy> * _circleProxy;
}

+ (id)_defaultUserVisibleViewSet;
+ (id)keyChainSync;
+ (id)keyChainSyncWithProxy:(id)arg1;

- (void).cxx_destruct;
- (bool)_isThisDeviceInCircle;
- (void)_preflightCircleStatusWithCompletion:(id /* block */)arg1;
- (void)_processAuthFailure:(id)arg1 completion:(id /* block */)arg2;
- (bool)_setKeychainSyncState:(bool)arg1;
- (bool)isUserVisibleKeychainSyncEnabled;
- (bool)matchKeychainViewState:(bool)arg1;
- (void)removeNonViewAwarePeersFromCircleWithCompletion:(id /* block */)arg1;
- (void)setUserVisibleKeychainSyncEnabled:(bool)arg1 withCompletion:(id /* block */)arg2;
- (bool)synchronizeKeychainViewSetWithOtherPeers:(id*)arg1;

@end
