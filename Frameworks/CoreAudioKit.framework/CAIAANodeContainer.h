/* made by EzioChiu
   Image: /System/Library/Frameworks/CoreAudioKit.framework/CoreAudioKit
 */

@interface CAIAANodeContainer : UIScrollView {
    long long  _numPages;
}

@property long long numPages;

+ (void)initialize;

- (double)contentWidth;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)minWidth;
- (long long)numPages;
- (void)setNumPages:(long long)arg1;

@end
