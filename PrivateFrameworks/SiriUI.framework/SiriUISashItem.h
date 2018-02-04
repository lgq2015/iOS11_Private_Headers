/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
 */

@interface SiriUISashItem : NSObject {
    NSString * _applicationBundleIdentifier;
    UIColor * _backgroundColor;
    bool  _canPunchout;
    NSArray * _commands;
    bool  _hidden;
    UIImage * _image;
    bool  _isDefault;
    UIColor * _textColor;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *applicationBundleIdentifier;
@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, readonly) bool canPunchout;
@property (nonatomic, copy) NSArray *commands;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, retain) UIImage *image;
@property (setter=_setDefault:, nonatomic) bool isDefault;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, copy) NSString *title;

+ (id)_languageCode;
+ (void)_setLanguageCode:(id)arg1;
+ (id)defaultSashItem;

- (void).cxx_destruct;
- (void)_setDefault:(bool)arg1;
- (id)applicationBundleIdentifier;
- (id)backgroundColor;
- (bool)canPunchout;
- (id)commands;
- (id)image;
- (id)init;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithExtension:(id)arg1;
- (id)initWithTitle:(id)arg1 image:(id)arg2;
- (bool)isDefault;
- (bool)isEqual:(id)arg1;
- (bool)isHidden;
- (void)setBackgroundColor:(id)arg1;
- (void)setCommands:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setImage:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)textColor;
- (id)title;

@end
