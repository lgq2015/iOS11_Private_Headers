/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
 */

@interface OSLogPreferencesCategory : NSObject {
    NSString * _name;
    OSLogPreferencesSubsystem * _subsystem;
}

@property (nonatomic, readonly) long long effectiveEnabledLevel;
@property (nonatomic, readonly) long long effectivePersistedLevel;
@property (nonatomic) long long enabledLevel;
@property (nonatomic, readonly) bool isLocked;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic) long long persistedLevel;
@property (nonatomic, readonly) OSLogPreferencesSubsystem *subsystem;

- (void).cxx_destruct;
- (long long)defaultEnabledLevel;
- (long long)defaultPersistedLevel;
- (long long)effectiveEnabledLevel;
- (long long)effectivePersistedLevel;
- (long long)enabledLevel;
- (id)initWithName:(id)arg1 subsystem:(id)arg2;
- (bool)isLocked;
- (id)name;
- (long long)persistedLevel;
- (void)reset;
- (void)setEnabledLevel:(long long)arg1;
- (void)setPersistedLevel:(long long)arg1;
- (id)subsystem;

@end
