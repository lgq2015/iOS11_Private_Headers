/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSStorageTip : NSObject {
    NSString * _identifier;
    PSSpecifier * _infoSpecifier;
    PSSpecifier * _specifier;
}

@property (nonatomic, retain) UIImage *icon;
@property (retain) NSString *identifier;
@property (nonatomic, readonly) PSSpecifier *infoSpecifier;
@property (nonatomic, retain) NSString *infoText;
@property (nonatomic, retain) NSString *representedApp;
@property (nonatomic) long long size;
@property (retain) PSSpecifier *specifier;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)icon;
- (id)identifier;
- (id)infoSpecifier;
- (id)infoText;
- (id)init;
- (id)propertyForKey:(id)arg1;
- (void)reload;
- (id)representedApp;
- (void)setIcon:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setInfoText:(id)arg1;
- (void)setProperty:(id)arg1 forKey:(id)arg2;
- (void)setRepresentedApp:(id)arg1;
- (void)setSize:(long long)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setTitle:(id)arg1;
- (long long)size;
- (id)specifier;
- (id)title;

@end
