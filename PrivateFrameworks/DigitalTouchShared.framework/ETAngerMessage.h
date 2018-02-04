/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DigitalTouchShared.framework/DigitalTouchShared
 */

@interface ETAngerMessage : ETMessage {
    SKSpriteNode * _anger;
    NSMutableArray * _delays;
    double  _duration;
    struct CGPoint { 
        double x; 
        double y; 
    }  _normalizedCenter;
    NSMutableArray * _points;
}

@property (nonatomic) double duration;
@property (nonatomic) struct CGPoint { double x1; double x2; } normalizedCenter;

+ (unsigned short)messageType;

- (void).cxx_destruct;
- (void)_updateCenterFromNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 inScene:(id)arg2;
- (id)archiveData;
- (void)displayInScene:(id)arg1;
- (double)duration;
- (id)init;
- (id)initWithArchiveData:(id)arg1;
- (double)messageDuration;
- (id)messageTypeAsString;
- (struct CGPoint { double x1; double x2; })normalizedCenter;
- (void)setDuration:(double)arg1;
- (void)setNormalizedCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setNormalizedPoint:(struct CGPoint { double x1; double x2; })arg1 atRelativeTime:(double)arg2 inScene:(id)arg3;
- (void)stopPlaying;

@end
