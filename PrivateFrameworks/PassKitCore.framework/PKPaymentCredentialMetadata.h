/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentCredentialMetadata : NSObject {
    NSString * _localizedDisplayName;
    NSString * _value;
}

@property (nonatomic, readonly, copy) NSString *localizedDisplayName;
@property (nonatomic, readonly, copy) NSString *value;

+ (Class)classForValueType:(id)arg1;
+ (id)paymentCredentialMetadataWithConfiguration:(id)arg1;

- (void).cxx_destruct;
- (id)displayString;
- (id)initWithConfiguration:(id)arg1;
- (id)localizedDisplayName;
- (id)value;

@end
