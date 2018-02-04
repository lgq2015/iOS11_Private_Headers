/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKDevice : NSObject <NSCopying, NSSecureCoding> {
    NSString * _UDIDeviceIdentifier;
    NSString * _firmwareVersion;
    NSString * _hardwareVersion;
    NSString * _localIdentifier;
    NSString * _manufacturer;
    NSString * _model;
    NSString * _name;
    NSString * _softwareVersion;
}

@property (readonly) NSString *UDIDeviceIdentifier;
@property (nonatomic, readonly) NSString *_connectedGymDeviceFullName;
@property (nonatomic, readonly) NSString *_connectedGymDeviceTypeName;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *hardwareVersion;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *name;
@property (readonly) NSString *softwareVersion;

+ (id)localDevice;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UDIDeviceIdentifier;
- (id)_connectedGymDeviceFullName;
- (id)_connectedGymDeviceTypeName;
- (unsigned long long)_fitnessMachineType;
- (id)_init;
- (bool)_isConnectedGymDevice;
- (void)_setFirmwareVersion:(id)arg1;
- (void)_setFitnessMachineType:(unsigned long long)arg1;
- (void)_setHardwareVersion:(id)arg1;
- (void)_setLocalIdentifier:(id)arg1;
- (void)_setManufacturer:(id)arg1;
- (void)_setModel:(id)arg1;
- (void)_setName:(id)arg1;
- (void)_setSoftwareVersion:(id)arg1;
- (void)_setUDIDeviceIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firmwareVersion;
- (id)hardwareVersion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 manufacturer:(id)arg2 model:(id)arg3 hardwareVersion:(id)arg4 firmwareVersion:(id)arg5 softwareVersion:(id)arg6 localIdentifier:(id)arg7 UDIDeviceIdentifier:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)localIdentifier;
- (id)manufacturer;
- (id)model;
- (id)name;
- (id)softwareVersion;

@end
