/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRKeyboardMessage : MRProtocolMessage {
    MRTextEditingAttributes * _attributes;
}

@property (nonatomic, readonly) MRTextEditingAttributes *attributes;
@property (nonatomic, readonly) NSData *encryptedTextCyphertext;
@property (nonatomic, readonly) unsigned long long state;

+ (id)encryptedMessageWithState:(unsigned long long)arg1 text:(id)arg2 attributes:(id)arg3 usingCryptoSession:(id)arg4;

- (id)attributes;
- (void)dealloc;
- (id)decryptedTextUsingCryptoSession:(id)arg1;
- (id)encryptedTextCyphertext;
- (id)initWithState:(unsigned long long)arg1 encryptedTextCyphertext:(id)arg2 attributes:(id)arg3;
- (unsigned long long)state;
- (unsigned long long)type;

@end
