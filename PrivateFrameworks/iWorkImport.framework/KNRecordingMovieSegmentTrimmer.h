/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNRecordingMovieSegmentTrimmer : NSObject {
    KNMovieSegment * _movieSegment;
    double  _trimDurationInSeconds;
}

+ (bool)canTrimMovieSegmentsInContext:(id)arg1;

- (void).cxx_destruct;
- (id)initWithMovieSegment:(id)arg1 trimDuration:(double)arg2;
- (void)trimMovieSegmentWithCompletionHandler:(id /* block */)arg1;

@end
