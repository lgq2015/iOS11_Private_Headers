/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WiFiKitUI.framework/WiFiKitUI
 */

@interface WFHotspotCell : UITableViewCell <WFNetworkCell> {
    WFAssociationStateView * _associationStateView;
    unsigned long long  _bars;
    bool  _connectionError;
    WFHotspotDetails * _hotspotDetails;
    WFHotspotDetailsView * _hotspotDetailsView;
    UILabel * _nameLabel;
    bool  _personalHotspot;
    bool  _secure;
    UIStackView * _stackView;
    NSLayoutConstraint * _stackViewBottomConstraint;
    NSLayoutConstraint * _stackViewTopConstraint;
    long long  _state;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic) WFAssociationStateView *associationStateView;
@property (nonatomic) unsigned long long bars;
@property (nonatomic) bool connectionError;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) WFHotspotDetails *hotspotDetails;
@property (nonatomic) WFHotspotDetailsView *hotspotDetailsView;
@property (nonatomic) UILabel *nameLabel;
@property (nonatomic) bool personalHotspot;
@property (nonatomic) bool secure;
@property (nonatomic) UIStackView *stackView;
@property (nonatomic) NSLayoutConstraint *stackViewBottomConstraint;
@property (nonatomic) NSLayoutConstraint *stackViewTopConstraint;
@property (nonatomic) long long state;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_adjustStackViewPadding;
- (double)_verticalPadding;
- (id)associationStateView;
- (void)awakeFromNib;
- (unsigned long long)bars;
- (bool)connectionError;
- (id)hotspotDetails;
- (id)hotspotDetailsView;
- (id)nameLabel;
- (bool)personalHotspot;
- (void)prepareForReuse;
- (bool)secure;
- (void)setAssociationStateView:(id)arg1;
- (void)setBars:(unsigned long long)arg1;
- (void)setConnectionError:(bool)arg1;
- (void)setHotspotDetails:(id)arg1;
- (void)setHotspotDetailsView:(id)arg1;
- (void)setNameLabel:(id)arg1;
- (void)setPersonalHotspot:(bool)arg1;
- (void)setSecure:(bool)arg1;
- (void)setStackView:(id)arg1;
- (void)setStackViewBottomConstraint:(id)arg1;
- (void)setStackViewTopConstraint:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)stackView;
- (id)stackViewBottomConstraint;
- (id)stackViewTopConstraint;
- (long long)state;
- (id)subtitle;
- (id)title;
- (void)traitCollectionDidChange:(id)arg1;

@end
