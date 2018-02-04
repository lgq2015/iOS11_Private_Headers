/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKUpNextLargeWithDetailTextCell : NTKUpNextBaseCell {
    NTKUpNextImageView * _bodyImage;
    NTKColoringLabel * _bodyLabel;
    UILayoutGuide * _contentLayoutGuide;
    NTKColoringLabel * _detail1Label;
    NTKColoringLabel * _detail2Label;
    NTKColoringLabel * _headerLabel;
}

+ (void)initialize;

- (void).cxx_destruct;
- (void)configureWithContent:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end
