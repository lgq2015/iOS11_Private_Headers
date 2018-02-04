/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFRequestAirPlayMirroringRequest : CATTaskRequest {
    NSString * _destinationDeviceID;
    NSString * _destinationName;
    NSString * _password;
    double  _scanWaitInterval;
}

@property (nonatomic, copy) NSString *destinationDeviceID;
@property (nonatomic, copy) NSString *destinationName;
@property (nonatomic, copy) NSString *password;
@property (nonatomic) double scanWaitInterval;

+ (bool)supportsSecureCoding;
+ (Class)whitelistedClassForResultObject;

- (void).cxx_destruct;
- (id)destinationDeviceID;
- (id)destinationName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)password;
- (double)scanWaitInterval;
- (void)setDestinationDeviceID:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)setScanWaitInterval:(double)arg1;

@end
