/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNDictionaryPrimitiveUserDefaults : NSObject <CNPrimitiveUserDefaults> {
    NSMutableDictionary * _preferences;
    unsigned long long  _setupAutosyncCount;
    unsigned long long  _synchronizeCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long setupAutosyncCount;
@property (readonly) Class superclass;
@property (readonly) unsigned long long synchronizeCount;

- (void).cxx_destruct;
- (id)init;
- (bool)primitiveBoolValueForKey:(id)arg1 keyExists:(bool*)arg2;
- (long long)primitiveIntegerValueForKey:(id)arg1 keyExists:(bool*)arg2;
- (id)primitiveObjectForKey:(id)arg1;
- (void)primitiveRemoveObjectForKey:(id)arg1;
- (void)setPrimitiveObject:(id)arg1 forKey:(id)arg2;
- (void)setupAutosync;
- (unsigned long long)setupAutosyncCount;
- (bool)synchronize;
- (unsigned long long)synchronizeCount;

@end
