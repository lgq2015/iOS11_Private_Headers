/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMVoiceOverVisionEngine : AXMVisionEngine {
    AXMScreenCaptureNode * _captureNode;
    AXMFaceDetectorNode * _faceDetector;
    AXMImageNode * _imageNode;
    AXMSceneDetectorNode * _sceneDetector;
    AXMTextDetectorNode * _textDetector;
    AXMTraitDetectorNode * _traitDetector;
}

@property (nonatomic) AXMScreenCaptureNode *captureNode;
@property (nonatomic) AXMFaceDetectorNode *faceDetector;
@property (nonatomic) AXMImageNode *imageNode;
@property (nonatomic) AXMSceneDetectorNode *sceneDetector;
@property (nonatomic) AXMTextDetectorNode *textDetector;
@property (nonatomic) AXMTraitDetectorNode *traitDetector;

- (void).cxx_destruct;
- (id)captureNode;
- (id)faceDetector;
- (id)imageNode;
- (id)init;
- (id)initWithIdentifier:(id)arg1;
- (id)sceneDetector;
- (void)setCaptureNode:(id)arg1;
- (void)setFaceDetector:(id)arg1;
- (void)setImageNode:(id)arg1;
- (void)setSceneDetector:(id)arg1;
- (void)setTextDetector:(id)arg1;
- (void)setTraitDetector:(id)arg1;
- (void)setVisionRecognitionOptions:(unsigned long long)arg1;
- (id)textDetector;
- (id)traitDetector;

@end
