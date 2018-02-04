/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFLoginAuthenticator : MFSASLAuthenticator {
    bool  _justSentPassword;
}

- (bool)justSentPlainTextPassword;
- (id)responseForServerData:(id)arg1;
- (id)saslName;

@end