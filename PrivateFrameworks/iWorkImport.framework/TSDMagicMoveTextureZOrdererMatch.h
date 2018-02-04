/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSDMagicMoveTextureZOrdererMatch : NSObject {
    TSDMagicMoveAnimationMatch * _animationMatch;
    TSDTextureSet * _incomingTexture;
    long long  _incomingZIndex;
    bool  _isIncomingZIndexUnmatched;
    bool  _isOutgoingZIndexUnmatched;
    TSDTextureSet * _outgoingTexture;
    long long  _outgoingZIndex;
}

@property (nonatomic, readonly) TSDMagicMoveAnimationMatch *animationMatch;
@property (nonatomic, readonly) TSDTextureSet *incomingTexture;
@property (nonatomic) long long incomingZIndex;
@property (nonatomic, readonly) bool isIncomingZIndexUnmatched;
@property (nonatomic, readonly) bool isOutgoingZIndexUnmatched;
@property (nonatomic, readonly) TSDTextureSet *outgoingTexture;
@property (nonatomic) long long outgoingZIndex;

- (id)animationMatch;
- (id)description;
- (id)incomingTexture;
- (long long)incomingZIndex;
- (id)initWithAnimationMatch:(id)arg1;
- (double)interpolatedZIndexAtPercent:(double)arg1;
- (double)intersectionPercentWithZOrdererMatch:(id)arg1;
- (bool)intersectsZOrdererMatch:(id)arg1;
- (bool)intersectsZOrdererMatch:(id)arg1 withAttemptedZIndex:(long long)arg2;
- (bool)isIncomingZIndexUnmatched;
- (bool)isOutgoingZIndexUnmatched;
- (id)outgoingTexture;
- (long long)outgoingZIndex;
- (void)setIncomingZIndex:(long long)arg1;
- (void)setOutgoingZIndex:(long long)arg1;

@end
