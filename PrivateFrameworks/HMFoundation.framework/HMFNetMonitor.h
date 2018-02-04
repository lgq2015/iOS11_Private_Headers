/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation
 */

@interface HMFNetMonitor : HMFObject {
    NSObject<OS_dispatch_queue> * _clientQueue;
    unsigned int  _currentNetworkFlags;
    <HMFNetMonitorDelegate> * _delegate;
    bool  _monitoring;
    HMFNetAddress * _netAddress;
    struct __SCNetworkReachability { } * _networkReachabilityRef;
    NSObject<OS_dispatch_queue> * _propertyQueue;
    bool  _reachable;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *clientQueue;
@property (nonatomic) unsigned int currentNetworkFlags;
@property <HMFNetMonitorDelegate> *delegate;
@property (getter=isMonitoring, nonatomic) bool monitoring;
@property (nonatomic, readonly, copy) HMFNetAddress *netAddress;
@property (nonatomic, readonly) struct __SCNetworkReachability { }*networkReachabilityRef;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *propertyQueue;
@property (readonly) unsigned long long reachabilityPath;
@property (getter=isReachable, readonly) bool reachable;

+ (id)shortDescription;

- (void).cxx_destruct;
- (void)_stop;
- (id)clientQueue;
- (unsigned int)currentNetworkFlags;
- (void)dealloc;
- (id)debugDescription;
- (id)delegate;
- (id)description;
- (id)descriptionWithPointer:(bool)arg1;
- (void)handleNetworkReachabilityChange:(unsigned int)arg1;
- (id)init;
- (id)initWithNetAddress:(id)arg1;
- (bool)isMonitoring;
- (bool)isReachable;
- (id)netAddress;
- (struct __SCNetworkReachability { }*)networkReachabilityRef;
- (id)propertyQueue;
- (unsigned long long)reachabilityPath;
- (void)setCurrentNetworkFlags:(unsigned int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMonitoring:(bool)arg1;
- (void)setReachable:(bool)arg1;
- (id)shortDescription;
- (void)start;
- (void)stop;

@end
