/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDDAccessoryServerBrowserDemo : HAPAccessoryServerBrowser {
    bool  _accessoryPaired;
    <HAPAccessoryServerBrowserDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _delegateQueue;
    NSDictionary * _demoData;
    NSMutableArray * _servers;
}

@property (nonatomic) bool accessoryPaired;
@property (nonatomic) <HAPAccessoryServerBrowserDelegate> *delegate;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *delegateQueue;
@property (nonatomic, retain) NSDictionary *demoData;
@property (nonatomic, retain) NSMutableArray *servers;

- (void).cxx_destruct;
- (bool)_delegateRespondsToSelector:(SEL)arg1;
- (bool)accessoryPaired;
- (id)delegate;
- (id)delegateQueue;
- (id)demoData;
- (void)discoverAccessoryServerWithIdentifier:(id)arg1;
- (void)discoverServer;
- (bool)isDemoAccessoryIdentifier:(id)arg1;
- (long long)linkType;
- (void)loadDemoData:(id)arg1 finalized:(bool)arg2;
- (void)resetDemoAccessory:(id)arg1;
- (id)servers;
- (void)setAccessoryPaired:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)setDelegateQueue:(id)arg1;
- (void)setDemoData:(id)arg1;
- (void)setServers:(id)arg1;
- (void)startDiscoveringAccessoryServers;
- (void)stopDiscoveringAccessoryServers;

@end
