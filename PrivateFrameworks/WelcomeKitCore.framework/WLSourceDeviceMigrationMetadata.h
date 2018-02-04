/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WelcomeKitCore.framework/WelcomeKitCore
 */

@interface WLSourceDeviceMigrationMetadata : NSObject {
    unsigned long long  _attemptCount;
    NSDate * _communicationDate;
    unsigned long long  _crashCount;
    NSString * _deviceOSVersion;
    NSString * _deviceType;
    unsigned long long  _state;
}

@property (nonatomic) unsigned long long attemptCount;
@property (nonatomic, retain) NSDate *communicationDate;
@property (nonatomic) unsigned long long crashCount;
@property (nonatomic, retain) NSString *deviceOSVersion;
@property (nonatomic, retain) NSString *deviceType;
@property (nonatomic) unsigned long long state;

- (void).cxx_destruct;
- (unsigned long long)attemptCount;
- (id)communicationDate;
- (unsigned long long)crashCount;
- (id)deviceOSVersion;
- (id)deviceType;
- (void)setAttemptCount:(unsigned long long)arg1;
- (void)setCommunicationDate:(id)arg1;
- (void)setCrashCount:(unsigned long long)arg1;
- (void)setDeviceOSVersion:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
