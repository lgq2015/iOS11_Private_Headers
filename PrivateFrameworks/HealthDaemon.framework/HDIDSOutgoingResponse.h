/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDIDSOutgoingResponse : NSObject <HDNanoSyncDescription> {
    NSData * _data;
    bool  _doNotCompress;
    bool  _forceLocalDelivery;
    NSString * _idsIdentifier;
    HDIDSMessageCenter * _messageCenter;
    unsigned short  _messageID;
    id  _pbResponse;
    NSDictionary * _persistentUserInfo;
    unsigned long long  _priority;
    NSString * _requestIdsIdentifier;
    unsigned short  _requestMessageID;
    double  _sendTimeout;
    bool  _sent;
    IDSDevice * _toDevice;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool doNotCompress;
@property (nonatomic) bool forceLocalDelivery;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, retain) HDIDSMessageCenter *messageCenter;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) id pbResponse;
@property (nonatomic, retain) NSDictionary *persistentUserInfo;
@property (nonatomic) unsigned long long priority;
@property (nonatomic, copy) NSString *requestIdsIdentifier;
@property (nonatomic) unsigned short requestMessageID;
@property (nonatomic) double sendTimeout;
@property (getter=isSent) bool sent;
@property (readonly) Class superclass;
@property (nonatomic, retain) IDSDevice *toDevice;

- (void).cxx_destruct;
- (void)configureWithActivationRestore:(id)arg1 syncStore:(id)arg2;
- (void)configureWithStatus:(id)arg1 syncStore:(id)arg2;
- (id)data;
- (void)dealloc;
- (id)description;
- (bool)doNotCompress;
- (bool)forceLocalDelivery;
- (id)idsIdentifier;
- (id)init;
- (bool)isSent;
- (id)messageCenter;
- (unsigned short)messageID;
- (id)nanoSyncDescription;
- (id)pbResponse;
- (id)persistentUserInfo;
- (unsigned long long)priority;
- (id)requestIdsIdentifier;
- (unsigned short)requestMessageID;
- (void)send;
- (double)sendTimeout;
- (void)setData:(id)arg1;
- (void)setDoNotCompress:(bool)arg1;
- (void)setForceLocalDelivery:(bool)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbResponse:(id)arg1;
- (void)setPersistentUserInfo:(id)arg1;
- (void)setPriority:(unsigned long long)arg1;
- (void)setRequestIdsIdentifier:(id)arg1;
- (void)setRequestMessageID:(unsigned short)arg1;
- (void)setSendTimeout:(double)arg1;
- (void)setSent:(bool)arg1;
- (void)setToDevice:(id)arg1;
- (id)toDevice;

@end
