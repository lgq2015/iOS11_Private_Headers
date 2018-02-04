/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AutoLoop.framework/AutoLoop
 */

@interface AutoLoopStabilizationAnalysis : NSObject {
    ICHomographyWrapper * _directAnalysisHomographies;
    struct CGSize { 
        double width; 
        double height; 
    }  _inputMovieDimensions;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _referenceFrameTime;
    ICHomographyWrapper * _sequentialAnalysisHomographies;
    bool  _wasPassThruAnalysis;
}

@property (readonly, retain) ICHomographyWrapper *directAnalysisHomographies;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } inputMovieDimensions;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } referenceFrameTime;
@property (readonly, retain) ICHomographyWrapper *sequentialAnalysisHomographies;
@property (nonatomic, readonly) bool wasPassThruAnalysis;

- (void).cxx_destruct;
- (id)directAnalysisHomographies;
- (id)initWithSourceHomographies:(id)arg1 DirectTripodHomographies:(id)arg2 sourceMovieSize:(struct CGSize { double x1; double x2; })arg3 passThru:(bool)arg4 refFrameTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg5;
- (struct CGSize { double x1; double x2; })inputMovieDimensions;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })referenceFrameTime;
- (id)sequentialAnalysisHomographies;
- (bool)wasPassThruAnalysis;

@end
