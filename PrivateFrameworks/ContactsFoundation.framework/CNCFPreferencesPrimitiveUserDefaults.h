/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNCFPreferencesPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {
    NSString * _applicationID;
    long long  _autosyncTimerIsActive;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (struct __CFString { }*)CFApplicationID;
- (void)dealloc;
- (id)initWithApplicationID:(id)arg1;
- (bool)primitiveBoolValueForKey:(id)arg1 keyExists:(bool*)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(bool*)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (void)setupAutosync;
- (bool)synchronize;

@end
