/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPassContent : PKContent <NSSecureCoding> {
    NSArray * _backFieldBuckets;
    PKImage * _footerImage;
    NSArray * _frontFieldBuckets;
    NSString * _logoText;
    PKPassPersonalization * _personalization;
    long long  _transitType;
}

@property (nonatomic, copy) NSArray *backFieldBuckets;
@property (nonatomic, retain) PKImage *footerImage;
@property (nonatomic, copy) NSArray *frontFieldBuckets;
@property (nonatomic, copy) NSString *logoText;
@property (nonatomic, copy) PKPassPersonalization *personalization;
@property (nonatomic) long long transitType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backFieldBuckets;
- (void)encodeWithCoder:(id)arg1;
- (void)flushFormattedFieldValues;
- (id)footerImage;
- (id)frontFieldBuckets;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)logoText;
- (id)personalization;
- (void)setBackFieldBuckets:(id)arg1;
- (void)setFooterImage:(id)arg1;
- (void)setFrontFieldBuckets:(id)arg1;
- (void)setLogoText:(id)arg1;
- (void)setPersonalization:(id)arg1;
- (void)setTransitType:(long long)arg1;
- (long long)transitType;

@end
