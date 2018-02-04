/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKSystemProtectedConfiguration : NSObject {
    NSNumber * _biometryEnabled;
    NSNumber * _identificationEnabled;
    NSNumber * _loginEnabled;
    NSNumber * _unlockEnabled;
    NSNumber * _unlockTokenMaxLifetime;
}

@property (nonatomic, retain) NSNumber *biometryEnabled;
@property (nonatomic, retain) NSNumber *identificationEnabled;
@property (nonatomic, retain) NSNumber *loginEnabled;
@property (nonatomic, retain) NSNumber *unlockEnabled;
@property (nonatomic, retain) NSNumber *unlockTokenMaxLifetime;

- (void).cxx_destruct;
- (id)biometryEnabled;
- (id)dictionary;
- (id)identificationEnabled;
- (id)initWithDictionary:(id)arg1;
- (id)loginEnabled;
- (void)setBiometryEnabled:(id)arg1;
- (void)setIdentificationEnabled:(id)arg1;
- (void)setLoginEnabled:(id)arg1;
- (void)setUnlockEnabled:(id)arg1;
- (void)setUnlockTokenMaxLifetime:(id)arg1;
- (id)unlockEnabled;
- (id)unlockTokenMaxLifetime;

@end
