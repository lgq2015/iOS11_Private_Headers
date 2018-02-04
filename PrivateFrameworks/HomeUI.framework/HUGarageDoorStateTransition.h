/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
 */

@interface HUGarageDoorStateTransition : NSObject {
    bool  _fromOpenState;
    bool  _toOpenState;
}

@property (nonatomic) bool fromOpenState;
@property (nonatomic) bool toOpenState;

+ (id)transitionFromState:(bool)arg1 toState:(bool)arg2;

- (bool)fromOpenState;
- (void)setFromOpenState:(bool)arg1;
- (void)setToOpenState:(bool)arg1;
- (bool)toOpenState;

@end
