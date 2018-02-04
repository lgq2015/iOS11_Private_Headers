/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesStyle : TSCHBaseStyle

+ (id)bootstrappedSeriesStyleWithContext:(id)arg1 seriesIndex:(unsigned long long)arg2 presetIndex:(unsigned long long)arg3;
+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)getURLForImage:(id)arg1;
+ (id)identifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)arg1;
+ (id)properties;

- (void)handlePreUFFUpgradesForOverridePropertyMapWithUnarchiver:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 overridePropertyMap:(id)arg3 isVariation:(bool)arg4;
- (void)loadFromPreUFFArchiveWithUnarchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (void)p_upgrade3DChartProperties:(id)arg1;
- (void)p_upgrade3DFillSubclassTSDFill:(id)arg1;
- (void)p_upgradeBubbleChartProperties:(id)arg1;
- (void)p_upgradeMixedChartProperties:(id)arg1;
- (void)p_upgradeRemoveShadowEnabledPropertyUsage:(id)arg1;
- (void)p_upgradeSeparateVisibilityProperties:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
