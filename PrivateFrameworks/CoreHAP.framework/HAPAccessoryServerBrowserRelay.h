/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPAccessoryServerBrowserRelay : HAPAccessoryServerBrowser {
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSMutableArray * _discoveredAccessoryServers;
}

@property (nonatomic) <HAPAccessoryServerBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, readonly) NSMutableArray *discoveredAccessoryServers;

- (void).cxx_destruct;
- (void)_setDelegate:(id)arg1 queue:(id)arg2;
- (void)addAccessoryServerWithStream:(id)arg1 name:(id)arg2 identifier:(id)arg3;
- (id)delegate;
- (id)delegateQueue;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (id)discoveredAccessoryServers;
- (id)initWithQueue:(id)arg1;
- (long long)linkType;
- (void)removeAccessoryServerWithStream:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;

@end
