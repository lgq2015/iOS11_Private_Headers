/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPPhotoAnalyzer : NSObject {
    NSMutableDictionary * _analysis;
    VCPAsset * _asset;
    NSData * _featureData;
    unsigned long long  _irisAnalyses;
    AVAsset * _irisAsset;
    float  _irisPhotoOffsetSec;
    bool  _isPano;
    unsigned long long  _phFaceFlags;
    NSDictionary * _phFaceResults;
    unsigned long long  _requestedAnalyses;
    NSMutableDictionary * _results;
    bool  _sdof;
    long long  _status;
}

@property (readonly) long long status;

+ (bool)canAnalyzeUndegraded:(id)arg1 withResources:(id)arg2;
+ (id)resourceForAsset:(id)arg1 withResources:(id)arg2;

- (void).cxx_destruct;
- (id)analyzeAsset:(id /* block */)arg1;
- (int)analyzeImage:(unsigned long long*)arg1 performedAnalyses:(unsigned long long*)arg2 movingObjectResults:(id)arg3 obstruction:(id)arg4 cancel:(id /* block */)arg5;
- (int)downscaleImage:(struct __CVBuffer { }*)arg1 scaledImage:(struct __CVBuffer {}**)arg2 majorDimension:(int)arg3;
- (id)initWithImageURL:(id)arg1 pairMovie:(id)arg2 forAnalysisTypes:(unsigned long long)arg3;
- (id)initWithPHAsset:(id)arg1 forAnalysisTypes:(unsigned long long)arg2;
- (long long)status;
- (void)updateDegradedFlagForMajorDimension:(unsigned long long)arg1;

@end
