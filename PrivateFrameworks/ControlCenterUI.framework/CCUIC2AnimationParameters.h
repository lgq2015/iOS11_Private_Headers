/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 */

@interface CCUIC2AnimationParameters : NSObject <CCUIAnimationParameters, NSMutableCopying> {
    double  _friction;
    bool  _interactive;
    double  _tension;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double friction;
@property (readonly) unsigned long long hash;
@property (getter=isInteractive, nonatomic, readonly) bool interactive;
@property (readonly) Class superclass;
@property (nonatomic, readonly) double tension;

- (id)_initWithAnimationParameters:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)friction;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)isInteractive;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)tension;

@end
