/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCH3DGetSelectionKnobsPositionsPipeline : TSCH3DSceneRenderPipeline <TSCH3DSceneObjectDelegator, TSCHUnretainedParent> {
    float  mNormalizedKnobRadius;
    NSMutableArray * mProjectedPoints;
    TSCH3DChartRep * mRep;
    TSCH3DGetSelectionKnobsPositionsPipelineDelegate * mSceneObjectDelegate;
    NSArray * mSelection;
}

@property (nonatomic, readonly) NSArray *projectedPoints;

+ (id)pipelineWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;

- (void)clearParent;
- (void)dealloc;
- (void)getSelectionKnobsPositions:(id)arg1;
- (id)initWithRep:(id)arg1 scene:(id)arg2 selection:(id)arg3 normalizedKnobRadius:(float)arg4;
- (Class)labelsMeshRendererClassForLabelsRenderer:(id)arg1;
- (id)makeDelegateWithScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)projectedPoints;
- (bool)render;

@end
