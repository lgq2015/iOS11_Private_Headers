/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartSeriesType : NSObject {
    NSArray * mSeriesRendererClasses;
}

+ (id)_singletonAlloc;
+ (id)allSeriesTypes;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)area3DSeries;
+ (id)areaSeries;
+ (id)bar3DSeries;
+ (id)barSeries;
+ (id)bubbleSeries;
+ (id)column3DSeries;
+ (id)columnSeries;
+ (id)expandProperties:(id)arg1;
+ (id)inspectorDefaultLocalizedValueLabelsDisclosureTitle;
+ (id)inspectorDefaultLocalizedValueLabelsTabName;
+ (id)line3DSeries;
+ (id)lineSeries;
+ (id)mixedAreaSeries;
+ (id)mixedColumnSeries;
+ (id)mixedLineSeries;
+ (id)pie3DSeries;
+ (id)pieSeries;
+ (id)scatterSeries;
+ (Class)sceneObjectClass;
+ (id)stackedArea3DSeries;
+ (id)stackedAreaSeries;
+ (id)stackedBar3DSeries;
+ (id)stackedBarSeries;
+ (id)stackedColumn3DSeries;
+ (id)stackedColumnSeries;
+ (id)styleArchTypes;

- (unsigned int)adjustLabelPosition:(unsigned int)arg1 forAxisValue:(double)arg2 intercept:(double)arg3;
- (id)autorelease;
- (id)axisTypesForValueLabels;
- (double)beginDataValueForSeries:(id)arg1 groupIndex:(unsigned long long)arg2 valueAxisID:(id)arg3;
- (double)beginValueForSeries:(unsigned long long)arg1 index:(unsigned long long)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(bool)arg4 valueAxis:(id)arg5;
- (bool)canUseEstimatedValueLabelsDrawingRect;
- (id)cdeFillForSeries:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;
- (bool)chunkedBuildsIncludeInterceptValues;
- (id)coordinateAxisForSeries:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)defaultSymbolType;
- (id)elementBuilder;
- (int)fillPropertyType;
- (id)fillPropertyTypeName;
- (int)fillSetFillProperty;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1;
- (unsigned int)filterChartLabelPosition:(unsigned int)arg1 forSeries:(id)arg2;
- (bool)floatValueForLabelExplosion:(float*)arg1 series:(id)arg2;
- (id)genericToSpecificPropertyMap;
- (id)init;
- (id)inspectorLocalizedValueLabelsDisclosureTitle;
- (id)inspectorLocalizedValueLabelsTabName;
- (bool)isVertical;
- (id)legalChartLabelPositions;
- (int)legendBadgeType;
- (id)legendFillForSeries:(id)arg1;
- (id)legendStrokeForSeries:(id)arg1;
- (unsigned long long)numberOfSeriesForCalculatingBarWidth:(id)arg1;
- (id)p_axisForSeries:(id)arg1 isCategory:(bool)arg2;
- (id)p_supportedSymbolsIfSymbolsSupported;
- (id)propertiesForReferenceColors;
- (oneway void)release;
- (id)resetSeriesStorage:(id)arg1 forSeries:(id)arg2;
- (id)retain;
- (unsigned long long)retainCount;
- (Class)sceneObjectClass;
- (unsigned long long)seriesIndexForDrawing:(id)arg1;
- (id)seriesRendererClasses;
- (int)specificFillSetFillProperty;
- (id)supportedSymbols;
- (id)supportedValueLabelsAxisCombinations;
- (bool)supportsBarGap;
- (bool)supportsCalloutLines;
- (bool)supportsFillSetFill;
- (bool)supportsLineConnectionStyle;
- (bool)supportsLineTypeNone;
- (bool)supportsSeries3DFill;
- (bool)supportsSeriesFill;
- (bool)supportsSeriesGradientFill;
- (bool)supportsSeriesStroke;
- (bool)supportsSetGap;
- (bool)supportsShadowOffset;
- (bool)supportsSymbolDrawing;
- (bool)supportsSymbolFillForSymbolType:(int)arg1;
- (bool)supportsSymbolTypeEditing;
- (bool)supportsValueLabels;
- (bool)supportsValueLabelsAxisOption;
- (bool)supportsValueLabelsSeriesName;
- (bool)useInBarGapCalculations;
- (id)userInterfaceName;
- (id)userInterfaceNameForLabelPosition:(id)arg1;
- (id)valueAxisForSeries:(id)arg1;
- (unsigned long long)valueDimensions;

@end
