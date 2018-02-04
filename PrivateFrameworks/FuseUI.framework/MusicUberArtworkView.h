/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
 */

@interface MusicUberArtworkView : UIImageView {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _focusRect;
    NSArray * _focusRegions;
}

@property (nonatomic, copy) NSArray *focusRegions;

- (void).cxx_destruct;
- (void)_musicArtworkViewCommonInitialization;
- (void)_updateFocusRect;
- (id)focusRegions;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (void)layoutSubviews;
- (void)setFocusRegions:(id)arg1;
- (void)setImage:(id)arg1;

@end
