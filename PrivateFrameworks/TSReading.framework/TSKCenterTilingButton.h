/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

@interface TSKCenterTilingButton : UIButton {
    UIImage * mCenterTileImage_Active;
    UIImage * mCenterTileImage_ActiveSelected;
    UIImage * mCenterTileImage_Disabled;
    UIImage * mCenterTileImage_Normal;
    UIImage * mCenterTileImage_Selected;
    UIImage * mLeftCapImage_Active;
    UIImage * mLeftCapImage_ActiveSelected;
    UIImage * mLeftCapImage_Disabled;
    UIImage * mLeftCapImage_Normal;
    UIImage * mLeftCapImage_Selected;
    UIImage * mLeftCenterTileImage_Active;
    UIImage * mLeftCenterTileImage_ActiveSelected;
    UIImage * mLeftCenterTileImage_Disabled;
    UIImage * mLeftCenterTileImage_Normal;
    UIImage * mLeftCenterTileImage_Selected;
    UIImage * mRightCapImage_Active;
    UIImage * mRightCapImage_ActiveSelected;
    UIImage * mRightCapImage_Disabled;
    UIImage * mRightCapImage_Normal;
    UIImage * mRightCapImage_Selected;
    UIImage * mRightCenterTileImage_Active;
    UIImage * mRightCenterTileImage_ActiveSelected;
    UIImage * mRightCenterTileImage_Disabled;
    UIImage * mRightCenterTileImage_Normal;
    UIImage * mRightCenterTileImage_Selected;
    int  mTilingType;
}

- (id)centerTileImageForState:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 andTilingType:(int)arg2;
- (id)leftCapImageForState:(unsigned long long)arg1;
- (id)leftCenterTileImageForState:(unsigned long long)arg1;
- (void)p_resetBackgroundImageForState:(unsigned long long)arg1;
- (void)p_tileButtedToCapLtoR:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_tileButtedToCapRtoL:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)p_tileHorizCenterOutwardwithLeft:(id)arg1 andRight:(id)arg2 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (void)p_tileSimple:(id)arg1 inRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (id)rightCapImageForState:(unsigned long long)arg1;
- (id)rightCenterTileImageForState:(unsigned long long)arg1;
- (void)setCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLeftCapImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setLeftCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setRightCapImage:(id)arg1 forState:(unsigned long long)arg2;
- (void)setRightCenterTileImage:(id)arg1 forState:(unsigned long long)arg2;

@end
