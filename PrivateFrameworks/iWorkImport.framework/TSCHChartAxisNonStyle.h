/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartAxisNonStyle : TSCHBaseStyle

@property (nonatomic, copy) TSSPropertyMap *overrideMapForSameAsSource;

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)properties;
+ (bool)shouldWarnWithPersistingWithoutStylesheet;

- (id)formatObjectPropertySet;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)overrideMapForSameAsSource;
- (void)saveToArchiver:(id)arg1;
- (void)setOverrideMapForSameAsSource:(id)arg1;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(id)arg1;

@end
