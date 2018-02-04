/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSwimStrokeStyleTableViewCell : UITableViewCell {
    UIView * _dividerView;
}

@property (nonatomic, retain) UIView *dividerView;

+ (id)_overrideLabelAttributes;
+ (id)_sizingLabel;
+ (double)preferredHeightWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(bool)arg2 width:(double)arg3 formattingManager:(id)arg4;

- (void).cxx_destruct;
- (void)configureWithSwimDistanceByStrokeStyle:(id)arg1 isPoolSwim:(bool)arg2 formattingManager:(id)arg3;
- (id)dividerView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)setDividerView:(id)arg1;

@end
