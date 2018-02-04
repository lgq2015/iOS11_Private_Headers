/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPhotoshopElementProduction : TDElementProduction <TDElementAttributes> {
    CUIImage * _auxiliary1MetricsMask;
    CUIImage * _auxiliary2MetricsMask;
    CUIImage * _baselineMetricsMask;
    NSDate * _cachedImageDate;
    bool  _didCheckForMetricsMasks;
    CUIImage * _edgeMetricsMask;
    CUIImage * _textMetricsMask;
    NSMutableAttributedString * log;
    CUIPSDImageRef * psdImageRef;
}

@property (nonatomic, retain) TDPhotoshopAsset *asset;

+ (unsigned int)sliceColumnsPerRendition:(long long)arg1;
+ (unsigned int)sliceRowsPerRendition:(long long)arg1;

- (id)_layerMappingForPhotoshopLayer:(long long)arg1 drawingLayer:(long long)arg2;
- (void)_loadMetricsMasksWithDocument:(id)arg1;
- (void)addDrawingLayerIndex:(id)arg1 themeLayer:(id)arg2 toIndices:(id)arg3 layers:(id)arg4 lowestIndex:(long long*)arg5;
- (void)appendToLog:(id)arg1;
- (id)associatedFileURLWithDocument:(id)arg1;
- (id)auxiliary1MetricsMaskWithDocument:(id)arg1;
- (id)auxiliary2MetricsMaskWithDocument:(id)arg1;
- (id)baseKeySpec;
- (id)baselineMetricsMaskWithDocument:(id)arg1;
- (id)columnCount;
- (id)columnIterationType;
- (void)copyAttributesInto:(id)arg1;
- (id)copyDataFromAttributes;
- (id)dataFromAttributes;
- (void)dealloc;
- (void)deleteRenditionsInDocument:(id)arg1 shouldDeleteAssetFiles:(bool)arg2;
- (id)edgeMetricsMaskWithDocument:(id)arg1;
- (void)fillIterationKeyAttribute:(id)arg1 iteration:(int)arg2 rowOrColumn:(int)arg3 document:(id)arg4;
- (bool)generateRenditionsWithEntityName:(id)arg1 document:(id)arg2 errorDescription:(id*)arg3;
- (void)getDrawingLayerIndices:(id*)arg1 themeLayers:(id*)arg2 lowestIndex:(long long*)arg3;
- (id)isActive;
- (id)log;
- (id)psdImageRefWithDocument:(id)arg1;
- (id)relativePath;
- (id)rowCount;
- (id)rowIterationType;
- (void)setAttributesFromCopyData:(id)arg1;
- (void)setAttributesFromData:(id)arg1;
- (void)setColumnCount:(id)arg1;
- (void)setColumnIterationType:(id)arg1;
- (void)setIsActive:(id)arg1;
- (void)setRowCount:(id)arg1;
- (void)setRowIterationType:(id)arg1;
- (id)textMetricsMaskWithDocument:(id)arg1;

@end
