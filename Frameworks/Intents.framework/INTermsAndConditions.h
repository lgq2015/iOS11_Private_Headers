/* made by EzioChiu
   Image: /System/Library/Frameworks/Intents.framework/Intents
 */

@interface INTermsAndConditions : NSObject <INTermsAndConditionsExport, NSCopying, NSSecureCoding> {
    NSString * _localizedTermsAndConditionsText;
    NSURL * _privacyPolicyURL;
    NSURL * _termsAndConditionsURL;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *localizedTermsAndConditionsText;
@property (nonatomic, readonly) NSURL *privacyPolicyURL;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *termsAndConditionsURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalizedTermsAndConditionsText:(id)arg1 privacyPolicyURL:(id)arg2 termsAndConditionsURL:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)localizedTermsAndConditionsText;
- (id)privacyPolicyURL;
- (id)termsAndConditionsURL;

@end
