/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
 */

@interface BLTTestIDSService : NSObject <BLTAbstractIDSService> {
    NSMutableDictionary * _actionsByRequestType;
    NSMutableDictionary * _actionsByResponseType;
    unsigned long long  _currentIdentifier;
    NSMutableArray * _delegates;
    unsigned long long  _maximumResponseDelay;
    unsigned long long  _maximumSendDelay;
    unsigned long long  _minimumResponseDelay;
    unsigned long long  _minimumSendDelay;
    BLTPBProtobufSequenceNumberManager * _sequenceNumberManager;
    NSString * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) <BLTAbstractIDSDevice> *defaultPairedDevice;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long maximumResponseDelay;
@property (nonatomic) unsigned long long maximumSendDelay;
@property (nonatomic) unsigned long long minimumResponseDelay;
@property (nonatomic) unsigned long long minimumSendDelay;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_callDelegateActionForProtobuf:(id)arg1 delegate:(id)arg2 identifier:(id)arg3 type:(unsigned short)arg4 isResponse:(bool)arg5;
- (void)_handleProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned long long)arg3;
- (id)_lightsAndSirensRequestForProtobuf:(id)arg1;
- (unsigned long long)_nextSequenceNumber;
- (unsigned long long)_randomResponseDelay;
- (unsigned long long)_randomSendDelay;
- (unsigned long long)_randomValueBetweenMin:(unsigned long long)arg1 max:(unsigned long long)arg2;
- (void)_sendBlockToAllDelegatesAfterTime:(unsigned long long)arg1 block:(id /* block */)arg2;
- (void)_sendLightsAndSirensRequestForProtobuf:(id)arg1 identifier:(id)arg2 sendDelay:(unsigned long long)arg3;
- (void)_sendSetSectionInfoResponseWithIdentifier:(id)arg1 sendDelay:(unsigned long long)arg2;
- (void)addDelegate:(id)arg1 queue:(id)arg2;
- (id)defaultPairedDevice;
- (id)initWithService:(id)arg1;
- (unsigned long long)maximumResponseDelay;
- (unsigned long long)maximumSendDelay;
- (unsigned long long)minimumResponseDelay;
- (unsigned long long)minimumSendDelay;
- (void)removeDelegate:(id)arg1;
- (bool)sendProtobuf:(id)arg1 toDestinations:(id)arg2 priority:(long long)arg3 options:(id)arg4 identifier:(id*)arg5 error:(id*)arg6;
- (bool)sendResourceAtURL:(id)arg1 metadata:(id)arg2 toDestinations:(id)arg3 priority:(long long)arg4 options:(id)arg5 identifier:(id*)arg6 error:(id*)arg7;
- (void)setMaximumResponseDelay:(unsigned long long)arg1;
- (void)setMaximumSendDelay:(unsigned long long)arg1;
- (void)setMinimumResponseDelay:(unsigned long long)arg1;
- (void)setMinimumSendDelay:(unsigned long long)arg1;
- (void)setProtobufAction:(SEL)arg1 forIncomingRequestsOfType:(unsigned short)arg2;
- (void)setProtobufAction:(SEL)arg1 forIncomingResponsesOfType:(unsigned short)arg2;

@end
