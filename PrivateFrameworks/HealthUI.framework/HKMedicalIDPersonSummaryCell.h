/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKMedicalIDPersonSummaryCell : UITableViewCell {
    UILabel * _birthdateLabel;
    NSDateComponents * _gregorianBirthday;
    NSCalendar * _gregorianCalendar;
    UIStackView * _labelContainerView;
    UIStackView * _mainContainerView;
    NSString * _name;
    UILabel * _nameLabel;
    UIFont * _nameLabelFont;
    UILabel * _organDonationLabel;
    NSNumber * _organDonationStatus;
    UIImage * _picture;
    UIImageView * _pictureView;
    NSLayoutConstraint * _pictureWidthAnchor;
    bool  _resetFormatters;
}

@property (nonatomic, retain) NSDateComponents *gregorianBirthday;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSNumber *organDonationStatus;
@property (nonatomic, retain) UIImage *picture;

- (void).cxx_destruct;
- (id)_cachedCalendar;
- (void)_contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (id)gregorianBirthday;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)localeDidChange:(id)arg1;
- (id)name;
- (id)notOrganDonorString;
- (id)organDonationStatus;
- (id)organDonorStringWithTemplate:(id)arg1;
- (id)picture;
- (void)setGregorianBirthday:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOrganDonationStatus:(id)arg1;
- (void)setPicture:(id)arg1;
- (void)timeZoneDidChange:(id)arg1;
- (void)updateSubviewsFromData;

@end
