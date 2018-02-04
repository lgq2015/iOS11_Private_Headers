/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDAccessoryServerDemo : HAPAccessoryServer {
    bool  __hasPairings;
    bool  __paired;
    NSDictionary * _accessoryInfo;
    HMDDAccessoryServerBrowserDemo * _browser;
    NSNumber * _category;
}

@property (nonatomic) bool _hasPairings;
@property (nonatomic) bool _paired;
@property (nonatomic, retain) NSDictionary *accessoryInfo;
@property (nonatomic) HMDDAccessoryServerBrowserDemo *browser;

- (void).cxx_destruct;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (bool)_hasPairings;
- (bool)_paired;
- (void)_parseAttributeDatabase:(id)arg1;
- (id)accessoryInfo;
- (void)addPairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)browser;
- (id)category;
- (void)continuePairingAfterAuthPrompt;
- (void)discoverAccessories;
- (void)enableEvents:(bool)arg1 forCharacteristics:(id)arg2 withCompletionHandler:(id /* block */)arg3 queue:(id)arg4;
- (void)handleUpdatesForCharacteristics:(id)arg1;
- (bool)hasPairings;
- (void)identifyWithCompletion:(id /* block */)arg1;
- (id)initCommon:(id)arg1 browser:(id)arg2;
- (id)initWithName:(id)arg1 identifier:(id)arg2 deviceInfo:(id)arg3 paired:(bool)arg4 keyStore:(id)arg5 browser:(id)arg6;
- (bool)isPaired;
- (long long)linkType;
- (void)listPairingsWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)processCharacteristicWrite:(id)arg1 value:(id)arg2;
- (void)readCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)removePairing:(id)arg1 completionQueue:(id)arg2 completionHandler:(id /* block */)arg3;
- (bool)removePairingForCurrentControllerOnQueue:(id)arg1 completion:(id /* block */)arg2;
- (void)setAccessoryInfo:(id)arg1;
- (void)setBrowser:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)set_hasPairings:(bool)arg1;
- (void)set_paired:(bool)arg1;
- (void)startPairing;
- (bool)stopPairingWithError:(id*)arg1;
- (bool)tryPairingPassword:(id)arg1 error:(id*)arg2;
- (void)writeCharacteristicValues:(id)arg1 timeout:(double)arg2 completionQueue:(id)arg3 completionHandler:(id /* block */)arg4;

@end
