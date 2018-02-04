/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoPaymentPreconditionsNotMetRequest : PBRequest <NSCopying> {
    int  _failedPrecondition;
    NSMutableArray * _passIDs;
}

@property (nonatomic) int failedPrecondition;
@property (nonatomic, retain) NSMutableArray *passIDs;

+ (Class)passIDsType;

- (void).cxx_destruct;
- (int)StringAsFailedPrecondition:(id)arg1;
- (void)addPassIDs:(id)arg1;
- (void)clearPassIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)failedPrecondition;
- (id)failedPreconditionAsString:(int)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passIDs;
- (id)passIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)passIDsCount;
- (bool)readFrom:(id)arg1;
- (void)setFailedPrecondition:(int)arg1;
- (void)setPassIDs:(id)arg1;
- (void)writeTo:(id)arg1;

@end
