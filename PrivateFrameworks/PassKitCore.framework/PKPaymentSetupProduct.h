/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentSetupProduct : NSObject <NSSecureCoding> {
    NSURL * _appLaunchURL;
    NSArray * _associatedStoreIdentifiers;
    NSString * _displayName;
    NSString * _identifier;
    NSArray * _paymentOptions;
    NSString * _productIdentifier;
    NSDictionary * _rawDictionary;
    NSDictionary * _readerModeMetadata;
    NSString * _region;
    NSArray * _requiredFields;
    NSArray * _supportedProtocols;
    NSURL * _termsURL;
    unsigned long long  _type;
}

@property (nonatomic, copy) NSURL *appLaunchURL;
@property (nonatomic, copy) NSArray *associatedStoreIdentifiers;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *partnerName;
@property (nonatomic, readonly, copy) NSArray *paymentOptions;
@property (nonatomic, copy) NSString *productIdentifier;
@property (nonatomic, copy) NSDictionary *rawDictionary;
@property (nonatomic, copy) NSDictionary *readerModeMetadata;
@property (nonatomic, copy) NSString *region;
@property (nonatomic, copy) NSArray *requiredFields;
@property (nonatomic, copy) NSArray *supportedProtocols;
@property (nonatomic, copy) NSURL *termsURL;
@property (nonatomic) unsigned long long type;

+ (id)partnerProductsFromArrayOfPartners:(id)arg1 andProducts:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 readerModeMetadata:(id)arg4 requiredFields:(id)arg5 paymentOptions:(id)arg6 termsURL:(id)arg7;
- (id)_initWithDisplayName:(id)arg1 partnerDictionary:(id)arg2 productIdentifier:(id)arg3 requiredFields:(id)arg4;
- (long long)allSupportedProtocols;
- (id)appLaunchURL;
- (id)associatedStoreIdentifiers;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductDictionary:(id)arg1;
- (id)partnerName;
- (id)paymentOptions;
- (id)productIdentifier;
- (id)rawDictionary;
- (id)readerModeMetadata;
- (id)region;
- (id)requiredFields;
- (void)setAppLaunchURL:(id)arg1;
- (void)setAssociatedStoreIdentifiers:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProductIdentifier:(id)arg1;
- (void)setRawDictionary:(id)arg1;
- (void)setReaderModeMetadata:(id)arg1;
- (void)setRegion:(id)arg1;
- (void)setRequiredFields:(id)arg1;
- (void)setSupportedProtocols:(id)arg1;
- (void)setTermsURL:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)supportedProtocols;
- (id)termsURL;
- (unsigned long long)type;

@end
