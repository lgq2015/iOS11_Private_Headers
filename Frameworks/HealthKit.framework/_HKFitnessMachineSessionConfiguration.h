/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKFitnessMachineSessionConfiguration : NSObject <NSSecureCoding> {
    NSUUID * _connectionUUID;
    NSString * _machineBrand;
    NSString * _machineName;
    unsigned long long  _machineType;
    NSUUID * _machineUUID;
    NSUUID * _sessionUUID;
}

@property (nonatomic, readonly) NSUUID *connectionUUID;
@property (nonatomic, readonly) NSString *machineBrand;
@property (nonatomic, readonly) NSString *machineName;
@property (nonatomic, readonly) unsigned long long machineType;
@property (nonatomic, readonly) NSUUID *machineUUID;
@property (nonatomic, readonly) NSUUID *sessionUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_setConnectionUUID:(id)arg1;
- (void)_setMachineBrand:(id)arg1;
- (void)_setMachineName:(id)arg1;
- (void)_setMachineType:(unsigned long long)arg1;
- (void)_setMachineUUID:(id)arg1;
- (void)_setSessionUUID:(id)arg1;
- (id)connectionUUID;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)machineBrand;
- (id)machineName;
- (unsigned long long)machineType;
- (id)machineUUID;
- (id)sessionUUID;

@end
