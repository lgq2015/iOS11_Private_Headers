/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface _SearchEntryWithMatchDisplay : UISearchBar {
    UILabel * _matchDisplayLabel;
    NSString * _matchDisplayString;
}

@property (readonly) UILabel *matchDisplayLabel;
@property (nonatomic, retain) NSString *matchDisplayString;

- (void).cxx_destruct;
- (id)_createMatchDisplayLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)matchDisplayLabel;
- (id)matchDisplayString;
- (void)matchDisplayVisible:(bool)arg1;
- (void)setMatchDisplayString:(id)arg1;

@end
