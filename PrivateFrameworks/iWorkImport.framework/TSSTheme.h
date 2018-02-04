/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSSTheme : TSPObject <TSKModel> {
    NSMutableDictionary * mPresetsByKind;
    TSSStylesheet * mStylesheet;
    NSString * mThemeIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isLocked;
@property (nonatomic, readonly) TSSStylesheet *stylesheet;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSString *themeIdentifier;

+ (id)presetBootstrapOrder;
+ (id)presetSources;
+ (void)registerPresetSourceClass:(Class)arg1;
+ (void)registerPresetSourceClasses;
+ (id)themeWithContext:(id)arg1 alternate:(int)arg2;

- (void)addPreset:(id)arg1 ofKind:(id)arg2;
- (void)bootstrapThemeAlternate:(int)arg1;
- (void)checkThemeStylesheetConsistency;
- (id)childEnumerator;
- (id)colors;
- (bool)containsCGColor:(struct CGColor { }*)arg1;
- (void)dealloc;
- (void)disablePresetValidation;
- (void)enablePresetValidation;
- (bool)hasPresetsOfKind:(id)arg1;
- (unsigned long long)indexOfPreset:(id)arg1;
- (id)initWithContext:(id)arg1;
- (void)insertPreset:(id)arg1 ofKind:(id)arg2 atIndex:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isLocked;
- (id)modelPathComponentForChild:(id)arg1;
- (void)movePresetOfKind:(id)arg1 fromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3;
- (id)p_identifierForBootstrapTheme:(int)arg1;
- (id)presetOfKind:(id)arg1 index:(unsigned long long)arg2;
- (id)presetsOfKind:(id)arg1;
- (void)removePreset:(id)arg1;
- (void)setIsLocked:(bool)arg1;
- (void)setPresets:(id)arg1 ofKind:(id)arg2;
- (void)setThemeIdentifier:(id)arg1;
- (id)stylesheet;
- (id)themeIdentifier;

@end
