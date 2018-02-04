/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
 */

@interface NMSIncomingResponse : NSObject <NMSDeviceSourced, NMSObfuscatableDescriptionProviding> {
    NSData * _data;
    IDSMessageContext * _idsContext;
    NSString * _idsIdentifier;
    unsigned short  _messageID;
    id  _pbResponse;
    NSString * _requestIDSIdentifier;
    NSDictionary * _requestPersistentUserInfo;
    NSDate * _requestSent;
    NSString * sourceDeviceID;
}

@property (nonatomic, retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) IDSMessageContext *idsContext;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic) unsigned short messageID;
@property (nonatomic, retain) id pbResponse;
@property (nonatomic, copy) NSString *requestIDSIdentifier;
@property (nonatomic, retain) NSDictionary *requestPersistentUserInfo;
@property (nonatomic, retain) NSDate *requestSent;
@property (nonatomic, retain) NSString *sourceDeviceID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)CPObfuscatedDescriptionObject;
- (id)data;
- (id)description;
- (id)idsContext;
- (id)idsIdentifier;
- (unsigned short)messageID;
- (id)pbResponse;
- (id)requestIDSIdentifier;
- (id)requestPersistentUserInfo;
- (id)requestSent;
- (void)setData:(id)arg1;
- (void)setIdsContext:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setMessageID:(unsigned short)arg1;
- (void)setPbResponse:(id)arg1;
- (void)setRequestIDSIdentifier:(id)arg1;
- (void)setRequestPersistentUserInfo:(id)arg1;
- (void)setRequestSent:(id)arg1;
- (void)setSourceDeviceID:(id)arg1;
- (id)sourceDeviceID;

@end