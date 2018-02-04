/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASettingSetAppService : SASettingSetBool <SASettingAppSettingCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *appWithSettingsId;
@property (nonatomic, copy) NSArray *callbacks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *location;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

+ (id)setAppService;
+ (id)setAppServiceWithDictionary:(id)arg1 context:(id)arg2;

- (id)appWithSettingsId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)location;
- (bool)requiresResponse;
- (void)setAppWithSettingsId:(id)arg1;
- (void)setLocation:(id)arg1;

@end
