/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPMetaSegment : NSObject {
    unsigned long long  _numOfFrames;
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

@property (nonatomic, readonly) unsigned long long numOfFrames;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } timeRange;

- (void)finalizeAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)init;
- (void)mergeSegment:(id)arg1;
- (unsigned long long)numOfFrames;
- (void)resetSegment:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timeRange;
- (void)updateSegment:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end
