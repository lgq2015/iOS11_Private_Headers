/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

@interface SXVideoButton : SXButton {
    unsigned long long  _videoButtonType;
}

@property (nonatomic) unsigned long long videoButtonType;

+ (id)imageForButtonWithType:(unsigned long long)arg1;
+ (id)videoButtonWithType:(unsigned long long)arg1;

- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)setVideoButtonType:(unsigned long long)arg1;
- (unsigned long long)videoButtonType;

@end
