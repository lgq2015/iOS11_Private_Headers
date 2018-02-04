/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureBubble : TSCHChartFeatureScatter

- (id)defaultDataFileName;
- (id)filteredStyleOwnersFromStyleOwners:(id)arg1;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (void)p_initializeAxisIDs;
- (Class)presetImagerClass;
- (int)representativeGridValueAxisType;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (bool)supportsBubbleOptions;
- (bool)supportsConnectingLines;
- (bool)supportsEditingForAxisID:(id)arg1;
- (bool)supportsSharedAndSeparateX;
- (bool)supportsShowLabelsInFrontOption;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;

@end
