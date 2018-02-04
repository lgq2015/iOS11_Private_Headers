/* made by EzioChiu
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUSlideshowSpeedCell : UITableViewCell {
    <PUSlideshowSpeedCellDelegate> * _delegate;
    bool  _enabled;
    UIImageView * _fasterGlyphImageView;
    UISlider * _slider;
    UIImageView * _slowerGlyphImageView;
    NSArray * _speedConstraints;
}

@property (nonatomic) <PUSlideshowSpeedCellDelegate> *delegate;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) double stepDuration;

- (void).cxx_destruct;
- (void)_stepDurationValueChanged:(id)arg1;
- (void)_updateView;
- (id)delegate;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (bool)isEnabled;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setStepDuration:(double)arg1;
- (double)stepDuration;
- (void)updateConstraints;

@end