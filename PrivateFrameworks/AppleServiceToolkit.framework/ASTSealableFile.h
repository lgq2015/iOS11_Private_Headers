/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
 */

@interface ASTSealableFile : NSObject {
    NSString * _base64Signature;
    NSURL * _fileURL;
    bool  _sealed;
    NSData * _signature;
}

@property (nonatomic, retain) NSString *base64Signature;
@property (nonatomic, retain) NSURL *fileURL;
@property (getter=isSealed, nonatomic) bool sealed;
@property (nonatomic, retain) NSData *signature;

+ (id)sealedFileURL:(id)arg1 signature:(id)arg2;

- (void).cxx_destruct;
- (id)base64Signature;
- (id)fileURL;
- (id)initWithFileURL:(id)arg1 signature:(id)arg2;
- (bool)isSealed;
- (bool)sealWithFileSigner:(id /* block */)arg1 error:(id*)arg2;
- (void)setBase64Signature:(id)arg1;
- (void)setFileURL:(id)arg1;
- (void)setSealed:(bool)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end
