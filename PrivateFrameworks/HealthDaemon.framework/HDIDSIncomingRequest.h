/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSIncomingRequest : NSObject <HDNanoSyncDescription> {
    NSData * _data;
    bool  _expectsResponse;
    IDSDevice * _fromDevice;
    NSString * _idsIdentifier;
    HDIDSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    id  _pbRequest;
    unsigned long long  _priority;
    HDIDSOutgoingResponse * _response;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool expectsResponse;
@property (nonatomic, retain) IDSDevice *fromDevice;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) HDIDSMessageCenter *messageCenter;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) id pbRequest;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, retain) HDIDSOutgoingResponse *response;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)configureResponse;
- (id)data;
- (void)dealloc;
- (id)description;
- (bool)expectsResponse;
- (id)fromDevice;
- (id)idsIdentifier;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)nanoSyncDescription;
- (id)pbRequest;
- (unsigned long long)priority;
- (id)response;
- (void)setData:(id)arg1;
- (void)setExpectsResponse:(bool)arg1;
- (void)setFromDevice:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbRequest:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setResponse:(id)arg1;

@end
