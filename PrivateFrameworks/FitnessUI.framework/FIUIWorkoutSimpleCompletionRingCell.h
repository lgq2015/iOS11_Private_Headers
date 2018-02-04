/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
 */

@interface FIUIWorkoutSimpleCompletionRingCell : UITableViewCell {
    UIImageView * _iconImageView;
    UIView * _lineView;
    UIImageView * _ringImageView;
    HKRingsView * _ringsView;
    UILabel * _typeLabel;
}

@property (nonatomic, retain) UIImageView *iconImageView;
@property (nonatomic, retain) UIView *lineView;
@property (nonatomic, retain) UIImageView *ringImageView;
@property (nonatomic, retain) HKRingsView *ringsView;
@property (nonatomic, retain) UILabel *typeLabel;

+ (double)preferredHeightForWorkout:(id)arg1 fittingWidth:(double)arg2;

- (void).cxx_destruct;
- (void)configureWithWorkout:(id)arg1;
- (id)iconImageView;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)lineView;
- (id)ringImageView;
- (id)ringsView;
- (void)setIconImageView:(id)arg1;
- (void)setLineView:(id)arg1;
- (void)setRingImageView:(id)arg1;
- (void)setRingsView:(id)arg1;
- (void)setTypeLabel:(id)arg1;
- (id)typeLabel;

@end
