/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DChartAxisLabelsProperties : NSObject {
    float  mCachedTextFactor;
    TSULRUCache * mCategoryStridingCache;
    bool  mHidden;
    TSCHChartInfo * mInfo;
    TSCH3DLabelResources * mLabels;
    TSCHSelectionPath * mSelectionPath;
    unsigned long long  mStyleIndex;
}

@property (nonatomic) float cachedTextFactor;
@property (nonatomic, readonly) TSULRUCache *categoryStridingCache;
@property (nonatomic) bool hidden;
@property (nonatomic, readonly) TSCHChartInfo *info;
@property (nonatomic, readonly) TSCH3DLabelResources *labels;
@property (nonatomic, retain) TSCHSelectionPath *selectionPath;
@property (nonatomic, readonly) unsigned long long styleIndex;

+ (id)propertiesWithInfo:(id)arg1 labels:(id)arg2 styleIndex:(unsigned long long)arg3;

- (float)cachedTextFactor;
- (id)categoryStridingCache;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (bool)hidden;
- (id)info;
- (id)initWithInfo:(id)arg1 labels:(id)arg2 styleIndex:(unsigned long long)arg3;
- (id)labels;
- (id)selectionPath;
- (void)setCachedTextFactor:(float)arg1;
- (void)setHidden:(bool)arg1;
- (void)setSelectionPath:(id)arg1;
- (unsigned long long)styleIndex;

@end
