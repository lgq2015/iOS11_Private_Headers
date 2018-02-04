/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/ActivitySharing.framework/ActivitySharing
 */

@interface ASDisplayContext : NSObject {
    NSString * _contentSizeCategory;
    UIFont * _dataFont;
    double  _dataFontSize;
    UIFont * _descriptionFont;
    NSDictionary * _keyColors;
    UIFont * _multilineDataFont;
    double  _multilineDataFontSize;
    UIFont * _multilineUnitFont;
    UIFont * _nameFont;
    double  _nameFontSize;
    NSDictionary * _titleColors;
    UIFont * _unitFont;
}

@property (nonatomic, retain) UIFont *dataFont;
@property (nonatomic, retain) UIFont *descriptionFont;
@property (nonatomic, retain) NSDictionary *keyColors;
@property (nonatomic, retain) UIFont *multilineDataFont;
@property (nonatomic, retain) UIFont *multilineUnitFont;
@property (nonatomic, retain) UIFont *nameFont;
@property (nonatomic, retain) NSDictionary *titleColors;
@property (nonatomic, retain) UIFont *unitFont;

+ (id)_companionContext;
+ (id)_gizmoContext;
+ (id)displayContextWithName:(id)arg1;

- (void).cxx_destruct;
- (id)dataFont;
- (id)descriptionFont;
- (id)keyColorForDisplayMode:(long long)arg1;
- (id)keyColors;
- (id)multilineDataFont;
- (id)multilineUnitFont;
- (id)nameFont;
- (void)setDataFont:(id)arg1;
- (void)setDescriptionFont:(id)arg1;
- (void)setKeyColors:(id)arg1;
- (void)setMultilineDataFont:(id)arg1;
- (void)setMultilineUnitFont:(id)arg1;
- (void)setNameFont:(id)arg1;
- (void)setTitleColors:(id)arg1;
- (void)setUnitFont:(id)arg1;
- (id)titleColorForDisplayMode:(long long)arg1;
- (id)titleColors;
- (id)unitFont;

@end
