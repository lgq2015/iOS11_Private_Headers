/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPImageQualityAnalyzer : VCPImageAnalyzer {
    float  _irisPhotoOffsetSec;
    NSArray * _obstruction;
    float  _qualityScore;
}

@property float irisPhotoOffsetSec;
@property (retain) NSArray *obstruction;
@property (readonly) float qualityScore;

- (void).cxx_destruct;
- (int)analyzePixelBuffer:(struct __CVBuffer { }*)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(id /* block */)arg4;
- (float)computeNoiseLevel:(char *)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 textureness:(char *)arg5;
- (float)computeRegionNoise:(char *)arg1 blkTextureness:(char *)arg2 average:(char *)arg3 width:(int)arg4 height:(int)arg5 stride:(long long)arg6;
- (float)irisPhotoOffsetSec;
- (id)obstruction;
- (float)qualityScore;
- (void)setIrisPhotoOffsetSec:(float)arg1;
- (void)setObstruction:(id)arg1;

@end
