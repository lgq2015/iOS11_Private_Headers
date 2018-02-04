/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureScatter : TSCHChartFeature

- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (unsigned long long)gridOffsetToSeriesForScatterFormat:(int)arg1;
- (void)p_initializeAxisIDs;
- (Class)presetImagerClass;
- (int)representativeGridValueAxisType;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (bool)supportsCategoryLabelsInChartRangeEditor;
- (bool)supportsConnectingLines;
- (bool)supportsSharedAndSeparateX;
- (bool)supportsSymbolOverhang;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;

@end
