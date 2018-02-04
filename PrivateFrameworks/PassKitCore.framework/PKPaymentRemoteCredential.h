/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentRemoteCredential : PKPaymentCredential {
    NSString * _identifier;
    NSArray * _metadata;
    NSURL * _passURL;
    PKPaymentPass * _paymentPass;
    unsigned long long  _rank;
    long long  _status;
    NSString * _statusDescription;
    NSArray * _summaryMetadata;
    NSString * _summaryMetadataDescription;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSArray *metadata;
@property (nonatomic, copy) NSURL *passURL;
@property (nonatomic, retain) PKPaymentPass *paymentPass;
@property (nonatomic) unsigned long long rank;
@property (nonatomic) long long status;
@property (nonatomic, readonly, copy) NSString *statusDescription;
@property (nonatomic, readonly, copy) NSArray *summaryMetadata;
@property (nonatomic, readonly, copy) NSString *summaryMetadataDescription;

- (void).cxx_destruct;
- (bool)_isEqualToCredential:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithIdentifier:(id)arg1 status:(long long)arg2 credentialType:(long long)arg3 passURL:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)metadata;
- (id)passURL;
- (id)paymentPass;
- (unsigned long long)rank;
- (void)setIdentifier:(id)arg1;
- (void)setPassURL:(id)arg1;
- (void)setPaymentPass:(id)arg1;
- (void)setRank:(unsigned long long)arg1;
- (void)setStatus:(long long)arg1;
- (long long)status;
- (id)statusDescription;
- (id)summaryMetadata;
- (id)summaryMetadataDescription;
- (void)updateWithDictionary:(id)arg1;

@end
