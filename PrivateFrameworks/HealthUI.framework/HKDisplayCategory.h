/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
 */

@interface HKDisplayCategory : NSObject {
    UIColor * _bottomColor;
    NSMutableDictionary * _cachedGradients;
    NSMutableDictionary * _cachedRoundedCornerGradients;
    long long  _categoryID;
    NSString * _categoryName;
    NSString * _displayName;
    UIImage * _healthDataIcon;
    UIColor * _keyColor;
    UIImage * _listIcon;
    NSString * _listIconName;
    UIImage * _shareIcon;
    UIColor * _topColor;
}

@property (nonatomic, readonly) long long categoryID;
@property (nonatomic, readonly) NSString *categoryName;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) HKFillStyle *fillStyle;
@property (nonatomic, readonly) UIImage *healthDataIcon;
@property (nonatomic, readonly) bool isMeCategory;
@property (nonatomic, readonly) bool isTopLevelCategory;
@property (nonatomic, readonly) UIImage *listIcon;
@property (nonatomic, readonly) NSString *listIconName;
@property (nonatomic, readonly) UIColor *seriesColor;
@property (nonatomic, readonly) UIImage *shareIcon;

+ (id)topLevelCategoryIdentifiers;

- (void).cxx_destruct;
- (long long)categoryID;
- (id)categoryName;
- (id)displayName;
- (id)fillStyle;
- (id)gradientWithHeight:(double)arg1;
- (id)healthDataIcon;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (bool)isMeCategory;
- (bool)isTopLevelCategory;
- (id)listIcon;
- (id)listIconName;
- (id)roundedCornerGradientWithHeight:(double)arg1;
- (id)seriesColor;
- (id)shareIcon;

@end
