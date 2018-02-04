/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoSetIEFTPPUniqueIDRequest : PBRequest <NSCopying> {
    NSString * _applicationIdentifier;
    bool  _cancelOutstandingRequests;
    NSData * _expressPassInformation;
    struct { 
        unsigned int cancelOutstandingRequests : 1; 
        unsigned int requestAuthorization : 1; 
    }  _has;
    bool  _requestAuthorization;
    NSString * _uniqueID;
}

@property (nonatomic, retain) NSString *applicationIdentifier;
@property (nonatomic) bool cancelOutstandingRequests;
@property (nonatomic, retain) NSData *expressPassInformation;
@property (nonatomic, readonly) bool hasApplicationIdentifier;
@property (nonatomic) bool hasCancelOutstandingRequests;
@property (nonatomic, readonly) bool hasExpressPassInformation;
@property (nonatomic) bool hasRequestAuthorization;
@property (nonatomic, readonly) bool hasUniqueID;
@property (nonatomic) bool requestAuthorization;
@property (nonatomic, retain) NSString *uniqueID;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (bool)cancelOutstandingRequests;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)expressPassInformation;
- (bool)hasApplicationIdentifier;
- (bool)hasCancelOutstandingRequests;
- (bool)hasExpressPassInformation;
- (bool)hasRequestAuthorization;
- (bool)hasUniqueID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (bool)requestAuthorization;
- (void)setApplicationIdentifier:(id)arg1;
- (void)setCancelOutstandingRequests:(bool)arg1;
- (void)setExpressPassInformation:(id)arg1;
- (void)setHasCancelOutstandingRequests:(bool)arg1;
- (void)setHasRequestAuthorization:(bool)arg1;
- (void)setRequestAuthorization:(bool)arg1;
- (void)setUniqueID:(id)arg1;
- (id)uniqueID;
- (void)writeTo:(id)arg1;

@end
