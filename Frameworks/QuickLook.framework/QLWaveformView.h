/* made by EzioChiu
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@interface QLWaveformView : UIView {
    AVAsset * _asset;
    UIView * _lineView;
    UIImage * _placeholderImage;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _visibleRect;
    UIImage * _waveImage;
    struct CGSize { 
        double width; 
        double height; 
    }  _waveSize;
    UIImageView * _waveView;
}

@property (nonatomic, retain) AVAsset *asset;
@property (retain) UIImage *placeholderImage;
@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*visibleRect;

- (void).cxx_destruct;
- (void)_expandWaveform;
- (void)_updateWithWaveformImage:(id)arg1;
- (id)asset;
- (void)layoutSubviews;
- (id)placeholderImage;
- (void)setAsset:(id)arg1;
- (void)setPlaceholderImage:(id)arg1;
- (void)setVisibleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1;
- (void)updateImage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)visibleRect;

@end
