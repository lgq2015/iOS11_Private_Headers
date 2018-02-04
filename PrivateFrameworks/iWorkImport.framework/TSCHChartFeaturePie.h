/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeaturePie : TSCHChartFeature

- (id)defaultDataFileName;
- (int)deprecated3DBevelEdgesSpecificProperty;
- (int)deprecated3DShadowSpecificProperty;
- (id)genericToSpecificPropertyMap;
- (id)initialSceneWithChartInfo:(id)arg1 layoutSettings:(struct { bool x1; bool x2; bool x3; bool x4; bool x5; bool x6; long long x7; unsigned long long x8; })arg2;
- (bool)isPie;
- (unsigned long long)maxCellsToCheckForGridValueType;
- (void)p_initializeAxisIDs;
- (Class)presetImagerClass;
- (int)representativeGridValueAxisType;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (bool)supportsBackgroundFill;
- (bool)supportsBorderFrame;
- (bool)supportsCategoryLabelsInChartRangeEditor;
- (bool)supportsElementSeriesNames;
- (bool)supportsErrorBars;
- (bool)supportsGroupedShadows;
- (bool)supportsLabelExplosion;
- (bool)supportsMoreThanOneLiveCategory;
- (bool)supportsPercentNumberFormatting;
- (bool)supportsReferenceLines;
- (bool)supportsTrendLines;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;

@end
