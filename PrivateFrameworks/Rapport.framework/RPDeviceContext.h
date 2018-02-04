/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Rapport.framework/Rapport
 */

@interface RPDeviceContext : NSObject {
    RPDevice * _device;
    RPDeviceDiscovery * _discovery;
    bool  _reported;
    RPSession * _session;
    int  _state;
}

@property (nonatomic, retain) RPDevice *device;
@property (nonatomic, retain) RPDeviceDiscovery *discovery;
@property (nonatomic) bool reported;
@property (nonatomic, retain) RPSession *session;
@property (nonatomic) int state;

- (void).cxx_destruct;
- (id)device;
- (id)discovery;
- (void)invalidate;
- (void)pairVerify;
- (bool)reported;
- (id)session;
- (void)setDevice:(id)arg1;
- (void)setDiscovery:(id)arg1;
- (void)setReported:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setState:(int)arg1;
- (int)state;
- (void)systemInfoResponse:(id)arg1 error:(id)arg2;

@end
