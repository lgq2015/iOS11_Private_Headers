/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFNetworkListCell : UITableViewCell <WFNetworkCell> {
    WFAssociationStateView * _associationStateView;
    unsigned long long  _bars;
    bool  _connectionError;
    WFHotspotDetails * _hotspotDetails;
    UIImageView * _lockImageView;
    UILabel * _nameLabel;
    bool  _personalHotspot;
    bool  _secure;
    UIImageView * _signalImageView;
    NSLayoutConstraint * _signalImageViewCenterConstraint;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewBottomConstraint;
    NSLayoutConstraint * _stackViewTopConstraint;
    long long  _state;
    NSString * _subtitle;
    UILabel * _subtitleLabel;
    NSString * _title;
}

@property (nonatomic) WFAssociationStateView *associationStateView;
@property (nonatomic) unsigned long long bars;
@property (nonatomic) bool connectionError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFHotspotDetails *hotspotDetails;
@property (nonatomic) UIImageView *lockImageView;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) bool personalHotspot;
@property (nonatomic) bool secure;
@property (nonatomic) UIImageView *signalImageView;
@property (nonatomic) NSLayoutConstraint *signalImageViewCenterConstraint;
@property (nonatomic) UIStackView *stackView;
@property (nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_adjustStackViewPadding;
- (void)_updateSignalImage;
- (double)_verticalPadding;
- (id)associationStateView;
- (void)awakeFromNib;
- (unsigned long long)bars;
- (bool)connectionError;
- (id)hotspotDetails;
- (id)imageFromSignalBars:(long long)arg1;
- (id)lockImageView;
- (id)nameLabel;
- (bool)personalHotspot;
- (void)prepareForReuse;
- (bool)secure;
- (void)setAssociationStateView:(id)arg1;
- (void)setBars:(unsigned long long)arg1;
- (void)setConnectionError:(bool)arg1;
- (void)setHotspotDetails:(id)arg1;
- (void)setLockImageView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPersonalHotspot:(bool)arg1;
- (void)setSecure:(bool)arg1;
- (void)setSignalImageView:(id)arg1;
- (void)setSignalImageViewCenterConstraint:(id)arg1;
- (void)setStackView:(id)arg1;
- (void)setStackViewBottomConstraint:(id)arg1;
- (void)setStackViewTopConstraint:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)signalImageView;
- (id)signalImageViewCenterConstraint;
- (id)stackView;
- (id)stackViewBottomConstraint;
- (id)stackViewTopConstraint;
- (long long)state;
- (id)subtitle;
- (id)subtitleLabel;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
