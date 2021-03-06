/* made by EzioChiu
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISettings : NSObject <NSCopying, _UISettingsGroupObserver, _UISettingsKeyPathObserver> {
    NSSet * _internal_childKeys;
    bool  _internal_isObservingPropertiesAndChildren;
    NSDictionary * _internal_keyClasses;
    NSHashTable * _internal_keyObservers;
    NSHashTable * _internal_keyPathObservers;
    NSDictionary * _internal_keyStructs;
    NSSet * _internal_leafKeys;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/UIKit.framework/UIKit

+ (id)settingsFromArchiveDictionary:(id)arg1;
+ (id)settingsFromArchiveFile:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)_addInternalEntriesToArchiveDictionary:(id)arg1;
- (id)_allKeys;
- (id)_associatedName;
- (id)_associatedNameOrNilIfDefault;
- (id)_colorForKey:(id)arg1 fromDictionary:(id)arg2;
- (void)_completeInitByApplyingArchiveDictionary:(id)arg1;
- (void)_continueInitBySettingDefaultValues;
- (id)_dictionaryForColorKey:(id)arg1;
- (id)_dictionaryForFontKey:(id)arg1;
- (id)_dictionaryForStructKey:(id)arg1 ofType:(id)arg2;
- (id)_fontForKey:(id)arg1 fromDictionary:(id)arg2;
- (void)_handleChildGroupChange:(id)arg1;
- (bool)_hasObservers;
- (id)_initWithArchiveDictionary:(id)arg1;
- (void)_introspectKeys;
- (bool)_isObservingPropertiesAndChildren;
- (id)_keyForChild:(id)arg1;
- (void)_sendKeyChanged:(id)arg1;
- (void)_sendKeyPathChanged:(id)arg1;
- (void)_setAssociatedName:(id)arg1;
- (id)_startInit;
- (void)_startObservingChild:(id)arg1;
- (void)_startObservingPropertiesAndChildren;
- (void)_startOrStopObservingPropertiesAndChildren;
- (void)_stopObservingChild:(id)arg1;
- (void)_stopObservingPropertiesAndChildren;
- (id)_structValueForKey:(id)arg1 ofType:(id)arg2 fromDictionary:(id)arg3;
- (void)addKeyObserver:(id)arg1;
- (void)addKeyPathObserver:(id)arg1;
- (void)applyArchiveValue:(id)arg1 forKey:(id)arg2;
- (id)archiveDictionary;
- (bool)archiveToFile:(id)arg1 error:(id*)arg2;
- (id)archiveValueForKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithDefaultValues;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeKeyObserver:(id)arg1;
- (void)removeKeyPathObserver:(id)arg1;
- (void)restoreDefaultValues;
- (void)restoreFromArchiveDictionary:(id)arg1;
- (bool)restoreFromArchiveFile:(id)arg1 error:(id*)arg2;
- (void)setDefaultValues;
- (void)setValuesFromModel:(id)arg1;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)settingsGroup:(id)arg1 didInsertSettings:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)settingsGroup:(id)arg1 didMoveSettings:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4;
- (void)settingsGroup:(id)arg1 didRemoveSettings:(id)arg2 atIndex:(unsigned long long)arg3;

// Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools

+ (id)settingsControllerModule;

- (id)archiveFilename;
- (bool)isSimilarToSettings:(id)arg1;
- (id)settingsHUDConfiguration;
- (id)settingsHUDInfoLabelString;
- (void)settingsResetByHUD;

@end
