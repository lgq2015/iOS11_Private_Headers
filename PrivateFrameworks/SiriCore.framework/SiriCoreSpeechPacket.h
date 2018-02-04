/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/SiriCore.framework/SiriCore
 */

@interface SiriCoreSpeechPacket : NSObject <SiriCoreSessionObject, SiriCoreThunking> {
    NSString * _aceId;
    long long  _packetNumber;
    NSArray * _packets;
    NSString * _refId;
}

@property (nonatomic, copy) NSString *aceId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long packetNumber;
@property (nonatomic, retain) NSArray *packets;
@property (nonatomic, copy) NSString *refId;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)aceId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)packetNumber;
- (id)packets;
- (id)refId;
- (void)setAceId:(id)arg1;
- (void)setPacketNumber:(long long)arg1;
- (void)setPackets:(id)arg1;
- (void)setRefId:(id)arg1;
- (void)siriCore_addSendCompletion:(id /* block */)arg1;
- (bool)siriCore_bufferingAllowedDuringActiveSession;
- (void)siriCore_dispatchSendCompletionsWithResult:(long long)arg1 error:(id)arg2;
- (void)siriCore_invokeThunk;
- (bool)siriCore_isRestartable;
- (bool)siriCore_isRetryable;
- (void)siriCore_logDiagnostics;
- (id)siriCore_requestId;
- (id)siriCore_serializedAceDataError:(id*)arg1;
- (void)siriCore_setSessionRequestId:(id)arg1;
- (bool)siriCore_supportedByLocalSession;
- (bool)siriCore_supportsSendCompletions;

@end
