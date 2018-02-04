/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
 */

@interface FMPaneSegue : UIStoryboardSegue {
    bool  _disableAnimation;
}

@property (nonatomic) bool disableAnimation;

- (bool)disableAnimation;
- (void)perform;
- (void)performFromEdge:(unsigned long long)arg1;
- (void)setDisableAnimation:(bool)arg1;

@end
