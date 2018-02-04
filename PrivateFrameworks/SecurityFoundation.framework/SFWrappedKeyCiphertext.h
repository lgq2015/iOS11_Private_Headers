/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface SFWrappedKeyCiphertext : _SFCiphertext {
    id  _wrappedKeyCiphertextInternal;
}

@property (readonly) _SFCiphertext *ciphertextKey;

- (void).cxx_destruct;
- (id)ciphertextKey;
- (id)initWithCiphertext:(id)arg1 ciphertextKey:(id)arg2;

@end
