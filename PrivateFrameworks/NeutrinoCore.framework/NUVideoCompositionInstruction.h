/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NUVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction, NSCopying> {
    NUComposition * _adjustmentComposition;
    NUColorSpace * _colorSpace;
    NSArray * _pipelineFilters;
    NURenderContext * _renderContext;
    NURenderJob * _renderJob;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _renderScale;
    NSArray * _requiredSourceTrackIDs;
    long long  _sampleMode;
    NSMutableDictionary * _sourceIdentifiersByTrackID;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _timeRange;
}

@property (nonatomic, retain) NUComposition *adjustmentComposition;
@property (nonatomic, retain) NUColorSpace *colorSpace;
@property (nonatomic, readonly) bool containsTweening;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool enablePostProcessing;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int passthroughTrackID;
@property (nonatomic, retain) NSArray *pipelineFilters;
@property (retain) NURenderContext *renderContext;
@property (nonatomic) NURenderJob *renderJob;
@property (nonatomic) struct { long long x1; long long x2; } renderScale;
@property (nonatomic, retain) NSArray *requiredSourceTrackIDs;
@property (nonatomic) long long sampleMode;
@property (readonly) Class superclass;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

+ (id)instructionFromBase:(id)arg1;

- (void).cxx_destruct;
- (id)adjustmentComposition;
- (id)colorSpace;
- (bool)containsTweening;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enablePostProcessing;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToInstruction:(id)arg1;
- (int)passthroughTrackID;
- (id)pipelineFilters;
- (id)renderContext;
- (id)renderJob;
- (struct { long long x1; long long x2; })renderScale;
- (id)requiredSourceTrackIDs;
- (long long)sampleMode;
- (void)setAdjustmentComposition:(id)arg1;
- (void)setColorSpace:(id)arg1;
- (void)setPipelineFilters:(id)arg1;
- (void)setRenderContext:(id)arg1;
- (void)setRenderJob:(id)arg1;
- (void)setRenderScale:(struct { long long x1; long long x2; })arg1;
- (void)setRequiredSourceTrackIDs:(id)arg1;
- (void)setSampleMode:(long long)arg1;
- (void)setSourceIdentifier:(id)arg1 forTrackID:(id)arg2;
- (void)setTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)sourceIdentifierForTrackID:(id)arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;

@end
