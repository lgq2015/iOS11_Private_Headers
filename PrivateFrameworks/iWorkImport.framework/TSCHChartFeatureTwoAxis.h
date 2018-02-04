/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartFeatureTwoAxis : TSCHChartFeatureCategory

- (id)defaultDataFileName;
- (id)genericToSpecificPropertyMap;
- (void)p_initializeAxisIDs;
- (Class)presetImagerClass;
- (int)representativeGridValueAxisType;
- (bool)requiresYAxisOrdinal;
- (unsigned long long)styleIndexForAxisID:(id)arg1;
- (id)supportedAxisScales;
- (id)supportedSeriesTypes;
- (bool)supportsConnectingLines;
- (bool)supportsEditing;
- (bool)supportsGroupedShadows;
- (bool)supportsIndividualShadowRendering;
- (bool)supportsMultipleSeriesTypes;
- (bool)supportsReferenceLines;
- (bool)supportsSymbolOverhang;
- (void)updateTitlesForExportingModel:(id)arg1 info:(id)arg2;
- (id)userInterfaceName;
- (Class)valueAxisClassForID:(id)arg1 scale:(int)arg2;

@end
