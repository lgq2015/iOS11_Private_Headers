/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMScenescapeFeedbackGenerator : AXMFeedbackGenerator {
    bool  _lastLocationDidActivateFeedback;
    AXMScenescape * _scenescape;
}

@property (nonatomic, retain) AXMScenescape *scenescape;

- (void).cxx_destruct;
- (void)activateFeedbackAtLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)loadScenescape:(id)arg1;
- (id)scenescape;
- (void)setScenescape:(id)arg1;

@end
