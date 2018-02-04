/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaSocial.framework/MediaSocial
 */

@interface MSCLAudioPickerVoiceMemoTableViewCell : UITableViewCell {
    UILabel * _creationDateLabel;
    UILabel * _durationLabel;
    SKUIPlayButton * _playButton;
}

@property (nonatomic, copy) NSString *creationDateString;
@property (nonatomic, copy) NSString *durationString;
@property (nonatomic, readonly) SKUIPlayButton *playButton;
@property (nonatomic, copy) NSString *titleString;

- (void).cxx_destruct;
- (id)creationDateString;
- (id)durationString;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (id)playButton;
- (void)setBackgroundColor:(id)arg1;
- (void)setCreationDateString:(id)arg1;
- (void)setDurationString:(id)arg1;
- (void)setTitleString:(id)arg1;
- (void)tintColorDidChange;
- (id)titleString;

@end
