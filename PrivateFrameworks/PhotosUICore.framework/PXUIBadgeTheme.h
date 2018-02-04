/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
 */

@interface PXUIBadgeTheme : NSObject {
    bool  _shouldCompositeBackground;
    bool  _usesBackground;
}

@property (nonatomic, readonly) double backgroundAlpha;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) CAFilter *backgroundCompositeFilter;
@property (nonatomic, readonly) double backgroundCornerRadius;
@property (nonatomic, readonly) Class backgroundViewClass;
@property (nonatomic, readonly) double imageAlpha;
@property (nonatomic, readonly) CAFilter *imageCompositingFilter;
@property (nonatomic, readonly) UIColor *imageTintColor;
@property (nonatomic, readonly) double labelAlpha;
@property (nonatomic, readonly) CAFilter *labelCompositingFilter;
@property (nonatomic, readonly) UIFont *labelFont;
@property (nonatomic, readonly) UIColor *labelTextColor;
@property (nonatomic) bool shouldCompositeBackground;
@property (nonatomic) bool usesBackground;

- (double)backgroundAlpha;
- (id)backgroundColor;
- (id)backgroundCompositeFilter;
- (double)backgroundCornerRadius;
- (Class)backgroundViewClass;
- (id)backgroundViewIdentifier;
- (id)createBackgroundView;
- (double)imageAlpha;
- (id)imageCompositingFilter;
- (id)imageTintColor;
- (double)labelAlpha;
- (id)labelCompositingFilter;
- (id)labelFont;
- (id)labelTextColor;
- (void)setShouldCompositeBackground:(bool)arg1;
- (void)setUsesBackground:(bool)arg1;
- (bool)shouldCompositeBackground;
- (bool)usesBackground;

@end
