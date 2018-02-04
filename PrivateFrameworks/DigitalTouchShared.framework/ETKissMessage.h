/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETKissMessage : ETMessage {
    NSMutableArray * _angles;
    SKTexture * _atlas;
    SKUniform * _atlasUniform;
    NSMutableArray * _delays;
    bool  _didDelegateDidStopPlaying;
    bool  _didDelegateWillStopPlaying;
    NSMutableSet * _kissMarkNodes;
    KissNode * _lastKiss;
    double  _lastKissTime;
    NSMutableArray * _points;
}

+ (id)_kissColor;
+ (unsigned short)messageType;

- (void).cxx_destruct;
- (void)_displayKissAtPoint:(struct CGPoint { double x1; double x2; })arg1 angle:(double)arg2 leavesMark:(bool)arg3 inScene:(id)arg4;
- (bool)_hasKissesThatLeaveMark;
- (void)_initAtlas;
- (bool)_leaveMarkAtDelay:(double)arg1;
- (void)_notifyDelegateDidStopPlaying;
- (void)_notifyDelegateWillStopPlaying;
- (void)_setKissLeavesMark:(id)arg1;
- (void)addKissAtNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 angle:(double)arg2 time:(double)arg3 toScene:(id)arg4;
- (id)archiveData;
- (void)displayInScene:(id)arg1;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (double)messageDuration;
- (id)messageTypeAsString;
- (bool)reachedSizeLimit;
- (void)setParentMessage:(id)arg1;
- (void)stopPlaying;

@end
