/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATGrappaSession : NSObject {
    unsigned int  _sessionId;
    NSData * _sessionRequestData;
    NSData * _sessionResponseData;
    unsigned long long  _sessionType;
}

- (void).cxx_destruct;
- (id)_deviceCreateSignature:(id*)arg1 forData:(id)arg2;
- (id)_deviceVerifySignature:(id)arg1 forData:(id)arg2;
- (id)_hostCreateSignature:(id*)arg1 forData:(id)arg2;
- (id)_hostVerifySignature:(id)arg1 forData:(id)arg2;
- (id)beginHostSessionWithDeviceResponseData:(id)arg1;
- (id)createSignature:(id*)arg1 forData:(id)arg2;
- (id)deviceInfo;
- (id)establishDeviceSessionWithRequestData:(id)arg1 responseData:(id*)arg2;
- (id)establishHostSessionWithDeviceInfo:(id)arg1 clientRequestData:(id*)arg2;
- (id)initWithType:(unsigned long long)arg1;
- (id)verifySignature:(id)arg1 forData:(id)arg2;

@end
