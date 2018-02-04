/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIAppPunchOutEvent : SABaseCommand <SAServerBoundCommand>

@property (nonatomic, copy) NSString *aceId;
@property (nonatomic, copy) NSString *appDisplayName;
@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *originalCommandId;
@property (nonatomic, copy) NSString *punchOutName;
@property (nonatomic, copy) NSURL *punchOutUri;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)appPunchOutEvent;
+ (id)appPunchOutEventWithDictionary:(id)arg1 context:(id)arg2;

- (id)appDisplayName;
- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (id)originalCommandId;
- (id)punchOutName;
- (id)punchOutUri;
- (bool)requiresResponse;
- (void)setAppDisplayName:(id)arg1;
- (void)setBundleId:(id)arg1;
- (void)setOriginalCommandId:(id)arg1;
- (void)setPunchOutName:(id)arg1;
- (void)setPunchOutUri:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI

+ (id)afui_appPunchOutEventWithRefId:(id)arg1 URL:(id)arg2 appDisplayName:(id)arg3 bundleId:(id)arg4;

@end
