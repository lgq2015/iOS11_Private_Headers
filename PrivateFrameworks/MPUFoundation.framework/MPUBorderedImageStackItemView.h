/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUBorderedImageStackItemView : MPUImageStackItemView {
    MPUBorderConfiguration * _borderConfiguration;
    MPUBorderDrawingCache * _borderDrawingCache;
    UIImageView * _borderImageView;
}

@property (nonatomic, copy) MPUBorderConfiguration *borderConfiguration;
@property (nonatomic, retain) MPUBorderDrawingCache *borderDrawingCache;

- (void).cxx_destruct;
- (void)_borderDrawingCacheWasInvalidated:(id)arg1;
- (void)_updateBorderImageView;
- (id)borderConfiguration;
- (id)borderDrawingCache;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setBorderConfiguration:(id)arg1;
- (void)setBorderDrawingCache:(id)arg1;

@end
