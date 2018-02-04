/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHReferenceLineStyle : TSCHBaseStyle

+ (float)defaultFloatValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)defaultStyleForPresetFromChartStyle:(id)arg1 seriesStyle:(id)arg2 paragraphStyles:(id)arg3 valueAxisStyle:(id)arg4;
+ (id)defaultStyleWithContext:(id)arg1;
+ (id)defaultValueForProperty:(int)arg1;
+ (id)identifierForRoleIndex:(unsigned long long)arg1 ordinal:(unsigned long long)arg2;
+ (id)imageFillProperties;
+ (int)muxDefaultPropertyForSpecificProperty:(int)arg1;
+ (id)overrideMapFromChartStyle:(id)arg1 seriesStyle:(id)arg2 paragraphStyles:(id)arg3 valueAxisStyle:(id)arg4;
+ (id)presetStyleDescriptorForOrdinal:(unsigned long long)arg1;
+ (id)properties;

- (void)loadFromUnarchiver:(id)arg1;
- (void)saveToArchiver:(id)arg1;

@end
