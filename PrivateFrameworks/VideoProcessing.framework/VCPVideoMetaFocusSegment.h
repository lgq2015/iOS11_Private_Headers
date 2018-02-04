/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPVideoMetaFocusSegment : VCPMetaSegment {
    long long  _focusStatus;
}

@property long long focusStatus;

- (long long)focusStatus;
- (id)initWithFocusStatus:(long long)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)resetSegment:(long long)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (void)setFocusStatus:(long long)arg1;
- (void)updateSegment:(long long)arg1 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;

@end
