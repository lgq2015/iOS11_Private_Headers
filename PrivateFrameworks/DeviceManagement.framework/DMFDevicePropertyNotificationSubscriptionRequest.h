/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFDevicePropertyNotificationSubscriptionRequest : CATTaskRequest {
    NSArray * _propertyKeys;
}

@property (nonatomic, copy) NSArray *propertyKeys;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)propertyKeys;
- (void)setPropertyKeys:(id)arg1;

@end
