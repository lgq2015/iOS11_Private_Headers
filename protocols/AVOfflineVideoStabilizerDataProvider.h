/* made by EzioChiu.
 */

@protocol AVOfflineVideoStabilizerDataProvider <NSObject>

@required

- (struct __CVBuffer { }*)copySourcePixelBufferForFrameNumber:(long long)arg1 outputSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 stabilizer:(AVOfflineVideoStabilizer *)arg3;
- (NSDictionary *)copySourceStabilizationMetadataForFrameNumber:(long long)arg1 outputSampleTime:(struct { long long x1; int x2; unsigned int x3; long long x4; }*)arg2 stabilizer:(AVOfflineVideoStabilizer *)arg3;

@end
