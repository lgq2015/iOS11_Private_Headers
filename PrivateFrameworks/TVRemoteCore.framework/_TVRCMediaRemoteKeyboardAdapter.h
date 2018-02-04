/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
 */

@interface _TVRCMediaRemoteKeyboardAdapter : NSObject {
    NSTimer * _acknowledgementTimer;
    <_TVRCMediaRemoteKeyboardAdapterDelegate> * _delegate;
    _TVRCMRTelevisionWrapper * _television;
    NSString * _text;
    NSMutableArray * _typedStringsAwaitingAcknowledgement;
}

@property (nonatomic) NSTimer *acknowledgementTimer;
@property (nonatomic) <_TVRCMediaRemoteKeyboardAdapterDelegate> *delegate;
@property (nonatomic, retain) _TVRCMRTelevisionWrapper *television;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, retain) NSMutableArray *typedStringsAwaitingAcknowledgement;

- (void).cxx_destruct;
- (void)_acknowledgementTimerExpired:(id)arg1;
- (void)_resetTextValueToSessionValue;
- (id)acknowledgementTimer;
- (id)delegate;
- (id)init;
- (void)receivedRemotelyUpdatedText:(id)arg1;
- (void)sessionBeganWithInitialText:(id)arg1;
- (void)sessionEnded;
- (void)setAcknowledgementTimer:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTelevision:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTypedStringsAwaitingAcknowledgement:(id)arg1;
- (id)television;
- (id)text;
- (id)typedStringsAwaitingAcknowledgement;
- (void)userEnteredText:(id)arg1;

@end
