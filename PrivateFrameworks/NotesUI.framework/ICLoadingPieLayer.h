/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

@interface ICLoadingPieLayer : CALayer {
    CAShapeLayer * _backgroundLayer;
    NSProgress * _observedProgress;
    CAShapeLayer * _pieLayer;
    double  _progress;
    bool  _removeOnCompletion;
}

@property (nonatomic, retain) CAShapeLayer *backgroundLayer;
@property (nonatomic, retain) NSProgress *observedProgress;
@property (nonatomic, retain) CAShapeLayer *pieLayer;
@property (nonatomic, readonly) double progress;
@property (nonatomic) bool removeOnCompletion;

- (void).cxx_destruct;
- (id)backgroundLayer;
- (void)dealloc;
- (id)init;
- (struct CGPath { }*)newPathForProgress:(double)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (id)observedProgress;
- (id)pieLayer;
- (double)progress;
- (bool)removeOnCompletion;
- (void)setBackgroundLayer:(id)arg1;
- (void)setObservedProgress:(id)arg1;
- (void)setPieLayer:(id)arg1;
- (void)setProgress:(double)arg1;
- (void)setRemoveOnCompletion:(bool)arg1;

@end
