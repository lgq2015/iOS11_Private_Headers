/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface _GEOCountryConfigurationLocalProxy : NSObject <_GEOCountryConfigurationServerProxy> {
    <_GEOCountryConfigurationServerProxyDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _queue;
    NSObject<OS_dispatch_source> * _scheduledUpdateTimer;
    struct __CTServerConnection { } * _telephonyServerConnection;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_GEOCountryConfigurationServerProxyDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_determineCurrentCountryCode:(id /* block */)arg1;
- (void)_reachabilityChanged:(id)arg1;
- (void)_scheduleUpdate;
- (void)_updateCountryCode:(id /* block */)arg1;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (void)setDelegate:(id)arg1;
- (void)updateCountryCode:(id /* block */)arg1;

@end
