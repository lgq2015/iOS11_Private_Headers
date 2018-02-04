/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTSealablePayload : NSObject {
    NSString * _base64Signature;
    NSData * _payload;
    bool  _sealed;
    NSData * _signature;
}

@property (nonatomic, retain) NSString *base64Signature;
@property (nonatomic, retain) NSData *payload;
@property (getter=isSealed, nonatomic) bool sealed;
@property (nonatomic, retain) NSData *signature;

- (void).cxx_destruct;
- (id)base64Signature;
- (id)description;
- (id)generatePayload;
- (id)initWithPayload:(id)arg1 signature:(id)arg2;
- (bool)isSealed;
- (id)payload;
- (bool)sealWithPayloadSigner:(id /* block */)arg1 error:(id*)arg2;
- (id)sealedDescription;
- (void)setBase64Signature:(id)arg1;
- (void)setPayload:(id)arg1;
- (void)setSealed:(bool)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
