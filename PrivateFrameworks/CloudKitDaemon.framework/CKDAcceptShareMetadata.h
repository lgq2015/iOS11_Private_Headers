/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDAcceptShareMetadata : NSObject {
    bool  _acceptedInProcess;
    NSString * _etag;
    NSString * _oonParticipantID;
    NSData * _oonProtectionInfo;
    NSData * _publicKey;
    unsigned long long  _publicKeyVersion;
    NSData * _publicPCSData;
    NSString * _publicPCSEtag;
    CKRecordID * _shareRecordID;
    NSURL * _shareURL;
}

@property (nonatomic) bool acceptedInProcess;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSString *oonParticipantID;
@property (nonatomic, retain) NSData *oonProtectionInfo;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (nonatomic, retain) NSData *publicPCSData;
@property (nonatomic, retain) NSString *publicPCSEtag;
@property (nonatomic, retain) CKRecordID *shareRecordID;
@property (nonatomic, retain) NSURL *shareURL;

- (void).cxx_destruct;
- (bool)acceptedInProcess;
- (id)etag;
- (id)oonParticipantID;
- (id)oonProtectionInfo;
- (id)publicKey;
- (unsigned long long)publicKeyVersion;
- (id)publicPCSData;
- (id)publicPCSEtag;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setEtag:(id)arg1;
- (void)setOonParticipantID:(id)arg1;
- (void)setOonProtectionInfo:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyVersion:(unsigned long long)arg1;
- (void)setPublicPCSData:(id)arg1;
- (void)setPublicPCSEtag:(id)arg1;
- (void)setShareRecordID:(id)arg1;
- (void)setShareURL:(id)arg1;
- (id)shareRecordID;
- (id)shareURL;

@end
