/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKRemoteDeviceRequest : CATTaskRequest {
    NSString * _deviceIdentifier;
    CATTaskRequest * _remoteRequest;
}

@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, retain) CATTaskRequest *remoteRequest;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)remoteRequest;
- (void)setDeviceIdentifier:(id)arg1;
- (void)setRemoteRequest:(id)arg1;

@end
