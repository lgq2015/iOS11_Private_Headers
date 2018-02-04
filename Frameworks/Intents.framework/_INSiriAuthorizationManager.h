/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface _INSiriAuthorizationManager : NSObject <_INSiriAuthorizationManagerExport>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)_isSiriAuthorizationRestricted;
+ (long long)_rawSiriAuthorizationStatusForAppID:(id)arg1;
+ (void)_requestSiriAuthorization:(id /* block */)arg1 auditToken:(struct { unsigned int x1[8]; })arg2;
+ (long long)_siriAuthorizationStatusForAppID:(id)arg1;
+ (bool)_siriEnabled;
+ (id)_tccAccessInfoForBundle:(id)arg1;

@end
