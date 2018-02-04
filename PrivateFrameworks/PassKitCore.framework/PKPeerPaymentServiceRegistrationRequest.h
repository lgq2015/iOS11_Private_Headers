/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentServiceRegistrationRequest : PKPeerPaymentWebServiceRequest {
    PKPeerPaymentDeviceRegistrationData * _deviceData;
    NSString * _pushToken;
}

@property (nonatomic, retain) PKPeerPaymentDeviceRegistrationData *deviceData;
@property (nonatomic, copy) NSString *pushToken;

- (void).cxx_destruct;
- (id)_urlRequestWithServiceURL:(id)arg1 account:(id)arg2 deviceIdentifier:(id)arg3 deviceScore:(id)arg4 deviceMetadata:(id)arg5;
- (id)deviceData;
- (id)pushToken;
- (void)setDeviceData:(id)arg1;
- (void)setPushToken:(id)arg1;

@end
