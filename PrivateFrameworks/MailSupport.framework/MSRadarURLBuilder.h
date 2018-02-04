/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MailSupport.framework/MailSupport
 */

@interface MSRadarURLBuilder : NSObject {
    bool  _appendStandardDisclaimerToDescription;
    long long  _classification;
    long long  _component;
    NSArray * _extensionIdentifiers;
    bool  _prependSystemVersionToTitle;
    NSString * _radarDescription;
    long long  _reproducibility;
    NSString * _title;
}

@property (nonatomic) bool appendStandardDisclaimerToDescription;
@property (nonatomic) long long classification;
@property (nonatomic) long long component;
@property (nonatomic, copy) NSArray *extensionIdentifiers;
@property (nonatomic) bool prependSystemVersionToTitle;
@property (nonatomic, copy) NSString *radarDescription;
@property (nonatomic) long long reproducibility;
@property (nonatomic, copy) NSString *title;

+ (id)_URLFromQueryItems:(id)arg1 builder:(id)arg2;
+ (id)_componentInfoDictionaryFromComponent:(long long)arg1;
+ (bool)canOpenRadar;
+ (id)componentIDFromRadarComponent:(long long)arg1;
+ (id)componentNameFromRadarComponent:(long long)arg1;
+ (id)radarURLWithBuilder:(id /* block */)arg1;
+ (id)stringFromRadarClassification:(long long)arg1;
+ (id)stringFromRadarReproducibility:(long long)arg1;

- (void).cxx_destruct;
- (bool)appendStandardDisclaimerToDescription;
- (long long)classification;
- (long long)component;
- (id)extensionIdentifiers;
- (id)init;
- (bool)prependSystemVersionToTitle;
- (id)radarDescription;
- (long long)reproducibility;
- (void)setAppendStandardDisclaimerToDescription:(bool)arg1;
- (void)setClassification:(long long)arg1;
- (void)setComponent:(long long)arg1;
- (void)setExtensionIdentifiers:(id)arg1;
- (void)setPrependSystemVersionToTitle:(bool)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setReproducibility:(long long)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
