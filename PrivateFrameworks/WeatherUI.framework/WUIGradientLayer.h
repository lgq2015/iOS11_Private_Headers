/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WeatherUI.framework/WeatherUI
 */

@interface WUIGradientLayer : CAGradientLayer {
    bool  _allowsActions;
}

@property (nonatomic) bool allowsActions;

- (id)actionForKey:(id)arg1;
- (bool)allowsActions;
- (void)setAllowsActions:(bool)arg1;

@end
