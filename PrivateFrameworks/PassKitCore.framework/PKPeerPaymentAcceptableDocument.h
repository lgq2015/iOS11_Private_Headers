/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPeerPaymentAcceptableDocument : NSObject {
    NSArray * _countryCodes;
    unsigned long long  _documentType;
}

@property (nonatomic, retain) NSArray *countryCodes;
@property (nonatomic) unsigned long long documentType;

- (void).cxx_destruct;
- (id)countryCodes;
- (unsigned long long)documentType;
- (void)setCountryCodes:(id)arg1;
- (void)setDocumentType:(unsigned long long)arg1;

@end
