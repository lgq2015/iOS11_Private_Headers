/* made by EzioChiu.
 */

@protocol FxHostPrivateAPI <NSObject>

@required

- (bool)giveEffectUIFocus;
- (bool)navigateToTime:(union { double x1; struct { /* ? */ } *x2; })arg1;

@end
