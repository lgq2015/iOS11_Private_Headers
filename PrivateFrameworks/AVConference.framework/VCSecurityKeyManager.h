/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
 */

@interface VCSecurityKeyManager : NSObject {
    id  _delegate;
    bool  _isReceiveKeysCleanUpPending;
    bool  _isSendKeysCleanUpPending;
    NSObject<OS_dispatch_queue> * _keyManagerQueue;
    unsigned int  _latestReceiveKeyIndex;
    unsigned int  _latestSendKeyIndex;
    NSMutableDictionary * _receiveKeys;
    NSMutableDictionary * _sendKeys;
}

- (bool)addSecurityKeyMaterial:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (id)getLatestRecvKeyMaterial;
- (id)getLatestSendKeyMaterial;
- (id)getRecvKeyMaterialWithIndex:(id)arg1;
- (id)getSendKeyMaterialWithIndex:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)pruneRecvKeyMaterialWithDelay:(double)arg1;
- (void)pruneSendKeyMaterialWithDelay:(double)arg1;
- (void)updateSendKeyMaterialWithIndex:(id)arg1 delay:(double)arg2;

@end
