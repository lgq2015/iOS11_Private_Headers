/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
 */

@interface NURenderPipelineState : NSObject <NSCopying> {
    NURenderTagGroup * _currentGroup;
    long long  _depthType;
    long long  _evaluationMode;
    unsigned long long  _groupCount;
    NSMutableArray * _groupStack;
    long long  _mediaComponentType;
    NSArray * _pipelineFilters;
    NURenderTagGroup * _rootGroup;
    long long  _roundingPolicy;
    long long  _sampleMode;
    struct { 
        long long numerator; 
        long long denominator; 
    }  _scale;
    long long  _serialNumber;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _time;
    NSDictionary * _videoFrames;
}

@property (readonly) NURenderTagGroup *currentGroup;
@property long long depthType;
@property long long evaluationMode;
@property (readonly) unsigned long long groupCount;
@property long long mediaComponentType;
@property (nonatomic, copy) NSArray *pipelineFilters;
@property (readonly) NURenderTagGroup *rootGroup;
@property long long roundingPolicy;
@property long long sampleMode;
@property struct { long long x1; long long x2; } scale;
@property (readonly) long long serialNumber;
@property struct { long long x1; int x2; unsigned int x3; long long x4; } time;
@property (nonatomic, copy) NSDictionary *videoFrames;

- (void).cxx_destruct;
- (bool)applyPipelineSettings:(id)arg1 error:(out id*)arg2;
- (id)beginGroupWithName:(id)arg1 error:(out id*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentGroup;
- (long long)depthType;
- (id)description;
- (bool)endGroupWithName:(id)arg1 error:(out id*)arg2;
- (long long)evaluationMode;
- (unsigned long long)groupCount;
- (id)init;
- (id)initForCopy;
- (long long)mediaComponentType;
- (id)pipelineFilters;
- (id)pipelineSettingsFromSourceSettings:(id)arg1;
- (void)resetRenderTagGroups;
- (id)rootGroup;
- (long long)roundingPolicy;
- (long long)sampleMode;
- (struct { long long x1; long long x2; })scale;
- (long long)serialNumber;
- (void)setDepthType:(long long)arg1;
- (void)setEvaluationMode:(long long)arg1;
- (void)setMediaComponentType:(long long)arg1;
- (void)setPipelineFilters:(id)arg1;
- (void)setRoundingPolicy:(long long)arg1;
- (void)setSampleMode:(long long)arg1;
- (void)setScale:(struct { long long x1; long long x2; })arg1;
- (void)setTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setVideoFrames:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })time;
- (id)videoFrames;

@end