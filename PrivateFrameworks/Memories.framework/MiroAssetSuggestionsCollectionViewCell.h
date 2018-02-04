/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Memories.framework/Memories
 */

@interface MiroAssetSuggestionsCollectionViewCell : UICollectionViewCell {
    UIView * _debugGradient;
    UILabel * _debugLabel;
    NSArray * _debugLabels;
    UIView * _debugView;
    bool  _isKeyAssetPicker;
    UIView * _selectionIndicator;
    UILabel * _slomoDurationLabel;
    UIView * _slomoIndicator;
    UIImageView * _thumbnailView;
    UILabel * _timelapseDurationLabel;
    UIView * _timelapseIndicator;
    UILabel * _videoDurationLabel;
    UIView * _videoIndicator;
    NSLayoutConstraint * _videoIndicatorBottomConstraint;
    NSLayoutConstraint * _videoIndicatorLeadingConstraint;
    NSLayoutConstraint * _videoIndicatorTopConstraint;
    NSLayoutConstraint * _videoIndicatorTrailingConstraint;
}

@property (nonatomic) UIView *debugGradient;
@property (nonatomic) UILabel *debugLabel;
@property (nonatomic, retain) NSArray *debugLabels;
@property (nonatomic) UIView *debugView;
@property bool isKeyAssetPicker;
@property (nonatomic, retain) UIView *selectionIndicator;
@property (nonatomic, retain) UILabel *slomoDurationLabel;
@property (nonatomic, retain) UIView *slomoIndicator;
@property (nonatomic, retain) UIImageView *thumbnailView;
@property (nonatomic, retain) UILabel *timelapseDurationLabel;
@property (nonatomic, retain) UIView *timelapseIndicator;
@property (nonatomic, retain) UILabel *videoDurationLabel;
@property (nonatomic, retain) UIView *videoIndicator;
@property (nonatomic, retain) NSLayoutConstraint *videoIndicatorBottomConstraint;
@property (nonatomic, retain) NSLayoutConstraint *videoIndicatorLeadingConstraint;
@property (nonatomic, retain) NSLayoutConstraint *videoIndicatorTopConstraint;
@property (nonatomic, retain) NSLayoutConstraint *videoIndicatorTrailingConstraint;

- (void).cxx_destruct;
- (void)applyLayoutAttributes:(id)arg1;
- (void)awakeFromNib;
- (void)configureWithAsset:(id)arg1 selected:(bool)arg2;
- (id)debugGradient;
- (id)debugLabel;
- (id)debugLabels;
- (id)debugView;
- (bool)isKeyAssetPicker;
- (void)prepareForReuse;
- (id)selectionIndicator;
- (void)setDebugGradient:(id)arg1;
- (void)setDebugLabel:(id)arg1;
- (void)setDebugLabels:(id)arg1;
- (void)setDebugView:(id)arg1;
- (void)setIsKeyAssetPicker:(bool)arg1;
- (void)setSelected:(bool)arg1;
- (void)setSelectionIndicator:(id)arg1;
- (void)setSlomoDurationLabel:(id)arg1;
- (void)setSlomoIndicator:(id)arg1;
- (void)setThumbnailView:(id)arg1;
- (void)setTimelapseDurationLabel:(id)arg1;
- (void)setTimelapseIndicator:(id)arg1;
- (void)setVideoDurationLabel:(id)arg1;
- (void)setVideoIndicator:(id)arg1;
- (void)setVideoIndicatorBottomConstraint:(id)arg1;
- (void)setVideoIndicatorLeadingConstraint:(id)arg1;
- (void)setVideoIndicatorTopConstraint:(id)arg1;
- (void)setVideoIndicatorTrailingConstraint:(id)arg1;
- (id)slomoDurationLabel;
- (id)slomoIndicator;
- (id)thumbnailView;
- (id)timelapseDurationLabel;
- (id)timelapseIndicator;
- (id)videoDurationLabel;
- (id)videoIndicator;
- (id)videoIndicatorBottomConstraint;
- (id)videoIndicatorLeadingConstraint;
- (id)videoIndicatorTopConstraint;
- (id)videoIndicatorTrailingConstraint;

@end