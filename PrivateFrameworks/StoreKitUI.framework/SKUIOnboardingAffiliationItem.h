/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIOnboardingAffiliationItem : NSObject <NSCopying> {
    UIColor * _fillColor;
    NSString * _identifier;
    NSString * _imageName;
    NSString * _imageTreatment;
    NSURL * _imageURL;
    NSString * _title;
    long long  _userAffinityCount;
}

@property (nonatomic, copy) UIColor *fillColor;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *imageName;
@property (nonatomic, copy) NSString *imageTreatment;
@property (nonatomic, copy) NSURL *imageURL;
@property (nonatomic, copy) NSString *title;
@property (nonatomic) long long userAffinityCount;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fillColor;
- (unsigned long long)hash;
- (id)identifier;
- (id)imageName;
- (id)imageTreatment;
- (id)imageURL;
- (bool)isEqual:(id)arg1;
- (void)setFillColor:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setImageName:(id)arg1;
- (void)setImageTreatment:(id)arg1;
- (void)setImageURL:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserAffinityCount:(long long)arg1;
- (id)title;
- (long long)userAffinityCount;

@end