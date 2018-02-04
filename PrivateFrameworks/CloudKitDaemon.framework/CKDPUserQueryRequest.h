/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPUserQueryRequest : PBRequest <NSCopying> {
    CKDPUserAlias * _alias;
    struct { 
        unsigned int publicKeyRequested : 1; 
    }  _has;
    NSString * _oBSOLETEPcsServiceType;
    bool  _publicKeyRequested;
    NSMutableArray * _sortedBys;
}

@property (nonatomic, retain) CKDPUserAlias *alias;
@property (nonatomic, readonly) bool hasAlias;
@property (nonatomic, readonly) bool hasOBSOLETEPcsServiceType;
@property (nonatomic) bool hasPublicKeyRequested;
@property (nonatomic, retain) NSString *oBSOLETEPcsServiceType;
@property (nonatomic) bool publicKeyRequested;
@property (nonatomic, retain) NSMutableArray *sortedBys;

+ (id)options;
+ (Class)sortedByType;

- (void).cxx_destruct;
- (void)addSortedBy:(id)arg1;
- (id)alias;
- (void)clearSortedBys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlias;
- (bool)hasOBSOLETEPcsServiceType;
- (bool)hasPublicKeyRequested;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)oBSOLETEPcsServiceType;
- (bool)publicKeyRequested;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setAlias:(id)arg1;
- (void)setHasPublicKeyRequested:(bool)arg1;
- (void)setOBSOLETEPcsServiceType:(id)arg1;
- (void)setPublicKeyRequested:(bool)arg1;
- (void)setSortedBys:(id)arg1;
- (id)sortedByAtIndex:(unsigned long long)arg1;
- (id)sortedBys;
- (unsigned long long)sortedBysCount;
- (void)writeTo:(id)arg1;

@end
