/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIMutableC2AnimationParameters : CCUIC2AnimationParameters

@property (nonatomic) double friction;
@property (getter=isInteractive, nonatomic) bool interactive;
@property (nonatomic) double tension;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setFriction:(double)arg1;
- (void)setInteractive:(bool)arg1;
- (void)setTension:(double)arg1;

@end
