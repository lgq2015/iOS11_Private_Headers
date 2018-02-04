/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFSignatures : NSObject

+ (id)sharedInstance;
+ (id)signatureMarkupFormat:(id)arg1;
+ (id)signaturePlainTextFormat:(id)arg1;
+ (id)stripSignatureMarkup:(id)arg1;

- (id)_getValue:(id)arg1;
- (id)_modelSpecificLocalizedStringKeyForKey:(id)arg1;
- (void)_setValue:(id)arg1 value:(void*)arg2;
- (void)clearSignature;
- (void)dealloc;
- (id)defaultSignature;
- (id)init;
- (void)setSignature:(id)arg1;
- (void)setSignature:(id)arg1 forAccount:(id)arg2;
- (void)setSignature:(id)arg1 forEmailAddress:(id)arg2;
- (void)setUseAccountSignatures:(bool)arg1;
- (id)signature;
- (id)signatureForAccount:(id)arg1;
- (id)signatureForSendingEmailAddress:(id)arg1;
- (id)signatureMarkupForSendingEmailAddress:(id)arg1;
- (id)signaturePlainTextForSendingEmailAddress:(id)arg1;
- (bool)useAccountSignatures;

@end
