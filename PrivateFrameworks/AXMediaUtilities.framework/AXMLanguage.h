/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMLanguage : NSObject <NSSecureCoding> {
    NSString * _languageCode;
    NSLocale * _locale;
    NSString * _primaryComponent;
    NSString * _secondaryComponent;
}

@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, readonly) NSString *languageDisplayName;
@property (nonatomic, retain) NSLocale *locale;
@property (nonatomic, retain) NSString *primaryComponent;
@property (nonatomic, retain) NSString *secondaryComponent;

+ (void)_updateDefaultLanguages;
+ (id)currentLocaleLanguage;
+ (id)currentSystemLanguage;
+ (void)initialize;
+ (id)languageCodesForLanguages:(id)arg1;
+ (bool)languageInSet:(id)arg1 isSupertypeOfLanguage:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLanguageCode:(id)arg1;
- (id)initWithLocale:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToAXMLanguage:(id)arg1;
- (bool)isSubtypeOfLanguage:(id)arg1;
- (bool)isSupertypeOfLanguage:(id)arg1;
- (id)languageCode;
- (id)languageDisplayName;
- (id)locale;
- (id)primaryComponent;
- (id)secondaryComponent;
- (void)setLanguageCode:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setPrimaryComponent:(id)arg1;
- (void)setSecondaryComponent:(id)arg1;

@end
