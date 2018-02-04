/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PairedUnlock.framework/PairedUnlock
 */

@interface PURemoteDeviceState : NSObject <NSSecureCoding> {
    bool  _passcodeLocked;
    bool  _passcodeSet;
    bool  _unlockOnly;
    unsigned int  _version;
    bool  _wristDetectEnabled;
}

@property (getter=isPasscodeLocked, nonatomic) bool passcodeLocked;
@property (getter=hasPasscodeSet, nonatomic) bool passcodeSet;
@property (getter=isUnlockOnly, nonatomic) bool unlockOnly;
@property (nonatomic) unsigned int version;
@property (getter=isWristDetectEnabled, nonatomic) bool wristDetectEnabled;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasPasscodeSet;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isPasscodeLocked;
- (bool)isUnlockOnly;
- (bool)isWristDetectEnabled;
- (void)setPasscodeLocked:(bool)arg1;
- (void)setPasscodeSet:(bool)arg1;
- (void)setUnlockOnly:(bool)arg1;
- (void)setVersion:(unsigned int)arg1;
- (void)setWristDetectEnabled:(bool)arg1;
- (unsigned int)version;

@end
