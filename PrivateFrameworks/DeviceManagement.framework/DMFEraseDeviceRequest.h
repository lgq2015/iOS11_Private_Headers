/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFEraseDeviceRequest : CATTaskRequest {
    unsigned long long  _dataResetOptions;
    unsigned long long  _eraseDeviceType;
}

@property (nonatomic) unsigned long long dataResetOptions;
@property (nonatomic) unsigned long long eraseDeviceType;

+ (bool)supportsSecureCoding;

- (unsigned long long)dataResetOptions;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eraseDeviceType;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDataResetOptions:(unsigned long long)arg1;
- (void)setEraseDeviceType:(unsigned long long)arg1;

@end
