/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTStrokeLayerStack : TSTStrokeLayerAbstractStack {
    TSTMutableStrokeLayer * _clearedStrokeLayer;
    TSTStrokeLayer * _customStrokeLayer;
    TSTStrokeLayer * _defaultStrokeLayer;
    TSTMutableStrokeLayer * _dynamicStrokeLayer;
    TSTMutableStrokeLayer * _spillStrokeLayer;
    long long  _stackKind;
    long long  _type;
}

@property (nonatomic, retain) TSTMutableStrokeLayer *clearedStrokeLayer;
@property (nonatomic, retain) TSTStrokeLayer *customStrokeLayer;
@property (nonatomic, retain) TSTStrokeLayer *defaultStrokeLayer;
@property (nonatomic, retain) TSTMutableStrokeLayer *dynamicStrokeLayer;
@property (nonatomic, retain) TSTMutableStrokeLayer *spillStrokeLayer;
@property (nonatomic) long long stackKind;
@property (nonatomic) long long type;

+ (id)strokeLayerStackWithStackKind:(long long)arg1;

- (void).cxx_destruct;
- (id)clearedStrokeLayer;
- (unsigned long long)count;
- (id)customStrokeLayer;
- (id)defaultStrokeLayer;
- (id)dynamicStrokeLayer;
- (id)initWithStackKind:(long long)arg1;
- (void)insertClearedStrokeAtRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)insertDynamicStroke:(id)arg1 strokeOrder:(int)arg2 atRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg3;
- (void)insertSpillStroke:(id)arg1 atRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg2;
- (void)invalidateClearedStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)invalidateCustomStrokes;
- (void)invalidateDynamicStrokes;
- (void)invalidateDynamicStrokesInRange:(struct TSTSimpleRange { long long x1; unsigned long long x2; })arg1;
- (void)invalidateSpillStrokes;
- (id)p_strokeLayerEnumeration;
- (id)portalledStrokeLayer;
- (bool)replaceCustomStrokeLayerWith:(id)arg1;
- (bool)replaceDefaultStrokeLayerWith:(id)arg1;
- (bool)replaceDynamicStrokeLayerWith:(id)arg1;
- (void)setClearedStrokeLayer:(id)arg1;
- (void)setCustomStrokeLayer:(id)arg1;
- (void)setDefaultStrokeLayer:(id)arg1;
- (void)setDynamicStrokeLayer:(id)arg1;
- (void)setSpillStrokeLayer:(id)arg1;
- (void)setStackKind:(long long)arg1;
- (void)setType:(long long)arg1;
- (id)spillStrokeLayer;
- (long long)stackKind;
- (long long)type;

@end
