/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPClassification : NSObject {
    float  _duration;
    NSString * _sceneId;
    float  _sumConfidence;
}

@property float duration;
@property (retain) NSString *sceneId;
@property float sumConfidence;

- (void).cxx_destruct;
- (float)duration;
- (id)initWithSceneId:(id)arg1 withDuration:(float)arg2 withConfidence:(float)arg3;
- (id)sceneId;
- (void)setDuration:(float)arg1;
- (void)setSceneId:(id)arg1;
- (void)setSumConfidence:(float)arg1;
- (float)sumConfidence;

@end
