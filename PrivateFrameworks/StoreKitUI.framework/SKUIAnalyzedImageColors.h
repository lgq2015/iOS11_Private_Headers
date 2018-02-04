/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIAnalyzedImageColors : NSObject {
    UIColor * _backgroundColor;
    bool  _isBackgroundLight;
    UIColor * _textPrimaryColor;
    UIColor * _textSecondaryColor;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic) bool isBackgroundLight;
@property (nonatomic, retain) UIColor *textPrimaryColor;
@property (nonatomic, retain) UIColor *textSecondaryColor;

- (void).cxx_destruct;
- (id)backgroundColor;
- (bool)isBackgroundLight;
- (void)setBackgroundColor:(id)arg1;
- (void)setIsBackgroundLight:(bool)arg1;
- (void)setTextPrimaryColor:(id)arg1;
- (void)setTextSecondaryColor:(id)arg1;
- (id)textPrimaryColor;
- (id)textSecondaryColor;

@end
