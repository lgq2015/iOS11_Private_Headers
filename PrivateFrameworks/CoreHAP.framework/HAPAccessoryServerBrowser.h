/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowser : HMFObject {
    <HAPKeyStore> * _keyStore;
    long long  _linkType;
    NSObject<OS_dispatch_queue> * _workQueue;
}

@property (nonatomic, retain) <HAPKeyStore> *keyStore;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *workQueue;

- (void).cxx_destruct;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)initWithQueue:(id)arg1;
- (id)keyStore;
- (long long)linkType;
- (void)matchAccessoryServerWithSetupID:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setKeyStore:(id)arg1;
- (void)setWorkQueue:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;
- (id)workQueue;

@end
