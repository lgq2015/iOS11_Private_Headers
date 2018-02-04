/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFNTLMAuthenticator : MFSASLAuthenticator {
    int  _ntlmError;
    struct NtlmGenerator { } * _ntlmGeneratorRef;
}

- (void)dealloc;
- (id)responseForServerData:(id)arg1;
- (void)setAuthenticationState:(int)arg1;

@end
