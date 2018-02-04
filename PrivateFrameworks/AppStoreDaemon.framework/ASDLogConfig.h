/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppStoreDaemon.framework/AppStoreDaemon
 */

@interface ASDLogConfig : NSObject <NSCopying, NSMutableCopying> {
    NSObject<OS_os_log> * _backingOSLogObject;
    NSString * _category;
    unsigned long long  _environment;
    NSObject<OS_dispatch_queue> * _propertyAccessQueue;
    NSString * _subsystem;
}

@property (nonatomic, readonly) NSObject<OS_os_log> *OSLogObject;
@property (nonatomic, retain) NSObject<OS_os_log> *backingOSLogObject;
@property (nonatomic, copy) NSString *category;
@property (nonatomic, readonly) bool debugLogsEnabled;
@property (nonatomic) unsigned long long environment;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *propertyAccessQueue;
@property (nonatomic, readonly) bool shouldLog;
@property (nonatomic, copy) NSString *subsystem;

+ (bool)_debugLogsEnabled:(id)arg1;
+ (bool)_deviceIsRunningInternalBuild;
+ (bool)_deviceIsRunningInternalOrSeedBuild;
+ (bool)_deviceIsRunningSeedBuild;
+ (id)sharedConfig;
+ (id)sharedDaemonConfig;
+ (id)sharedDaemonConfigOversize;
+ (id)sharedFrameworkConfig;

- (void).cxx_destruct;
- (id)OSLogObject;
- (id)backingOSLogObject;
- (id)category;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)debugLogsEnabled;
- (id)description;
- (unsigned long long)environment;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertyAccessQueue;
- (void)setBackingOSLogObject:(id)arg1;
- (void)setCategory:(id)arg1;
- (void)setEnvironment:(unsigned long long)arg1;
- (void)setPropertyAccessQueue:(id)arg1;
- (void)setSubsystem:(id)arg1;
- (bool)shouldLog;
- (id)subsystem;

@end
