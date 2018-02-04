/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface QuietHoursStateController : NSObject {
    BBSettingsGateway * _bbGateway;
    NSArray * _behaviorOverrides;
    NSDateComponents * _fromComponents;
    bool  _isEffectiveWhileUnlocked;
    unsigned long long  _mode;
    long long  _overrideStatus;
    unsigned long long  _overrideType;
    NSArray * _overrides;
    unsigned long long  _privilegeTypes;
    int  _recordID;
    NSDateComponents * _toComponents;
    bool  _valid;
}

@property (nonatomic, readonly) BBSettingsGateway *bbGateway;
@property (nonatomic, copy) NSArray *behaviorOverrides;
@property (nonatomic, retain) NSDateComponents *fromComponents;
@property (nonatomic) bool isEffectiveWhileUnlocked;
@property (nonatomic) unsigned long long mode;
@property (nonatomic) long long overrideStatus;
@property (nonatomic) unsigned long long overrideType;
@property (nonatomic, copy) NSArray *overrides;
@property (nonatomic) unsigned long long privilegeTypes;
@property (nonatomic) int recordID;
@property (nonatomic, retain) NSDateComponents *toComponents;
@property (nonatomic) bool valid;

+ (bool)isDNDScheduled;
+ (void)setManualEnabled:(bool)arg1;
+ (void)setScheduledEnabled:(bool)arg1;
+ (void)setScheduledRangeFrom:(id)arg1 to:(id)arg2;
+ (id)sharedController;

- (void).cxx_destruct;
- (unsigned long long)allowedGroupType;
- (id)bbGateway;
- (id)behaviorOverrides;
- (void)dealloc;
- (id)fromComponents;
- (id)init;
- (bool)isEffectiveWhileUnlocked;
- (bool)manualModeEnabled;
- (unsigned long long)mode;
- (long long)overrideStatus;
- (unsigned long long)overrideType;
- (id)overrides;
- (unsigned long long)privilegeTypes;
- (int)recordID;
- (bool)repeatedCalls;
- (void)resetToFallbackRange;
- (void)setAllowedGroup:(id)arg1 recordID:(int)arg2 groupName:(id)arg3;
- (void)setBehaviorOverrides:(id)arg1;
- (void)setFromComponents:(id)arg1;
- (void)setIsEffectiveWhileUnlocked:(bool)arg1;
- (void)setMode:(unsigned long long)arg1;
- (void)setOverrideStatus:(long long)arg1;
- (void)setOverrideType:(unsigned long long)arg1;
- (void)setOverrides:(id)arg1;
- (void)setPrivilegeTypes:(unsigned long long)arg1;
- (void)setRecordID:(int)arg1;
- (void)setRepeatedCalls:(bool)arg1;
- (void)setToComponents:(id)arg1;
- (void)setValid:(bool)arg1;
- (id)toComponents;
- (int)userSelectedGroupID;
- (bool)valid;

@end