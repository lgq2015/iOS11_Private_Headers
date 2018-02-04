/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoMetaMotionAnalyzer : NSObject {
    VCPVideoMetaMotionSegment * _activeSegment;
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
    }  _frameTimeRange;
    struct HinkleyDetector { 
        float sensitivity_; 
        float threshold_; 
        int min_length_; 
        struct HinkleyStats { 
            float upper_; 
            float lower_; 
            float max_; 
            float min_; 
        } stats_; 
    }  _hinkleyDetector;
    NSMutableArray * _internalResults;
    NSMutableArray * _mutableResults;
}

@property (nonatomic, readonly, retain) NSArray *results;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)decideSegmentPointBasedOn:(float)arg1;
- (int)finalize;
- (id)init;
- (void)mergeSimilarSegments;
- (int)processFrameMetadata:(id)arg1;
- (id)results;

@end
