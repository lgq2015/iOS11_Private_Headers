/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface _CATXPCTransportSendMessageOperation : CATOperation {
    CATMessage * _message;
    CATXPCTransport * _transport;
}

@property (nonatomic, retain) CATMessage *message;
@property (nonatomic) CATXPCTransport *transport;

- (void).cxx_destruct;
- (void)didFailWithError:(id)arg1;
- (void)didProcessMessage;
- (bool)isAsynchronous;
- (void)main;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setTransport:(id)arg1;
- (id)transport;

@end
