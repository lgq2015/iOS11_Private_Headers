/* made by EzioChiu
   Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

@interface WKInterfaceGroup : WKInterfaceObject <WKImageAnimatable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)setBackgroundColor:(id)arg1;
- (void)setBackgroundImage:(id)arg1;
- (void)setBackgroundImageData:(id)arg1;
- (void)setBackgroundImageNamed:(id)arg1;
- (void)setContentInset:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (void)setCornerRadius:(double)arg1;
- (void)startAnimating;
- (void)startAnimatingWithImagesInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 duration:(double)arg2 repeatCount:(long long)arg3;
- (void)stopAnimating;

@end
