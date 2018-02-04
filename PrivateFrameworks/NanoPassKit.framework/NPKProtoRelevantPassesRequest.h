/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
 */

@interface NPKProtoRelevantPassesRequest : PBRequest <NSCopying> {
    NSMutableArray * _passRelevancyTuples;
}

@property (nonatomic, retain) NSMutableArray *passRelevancyTuples;

+ (Class)passRelevancyTuplesType;

- (void).cxx_destruct;
- (void)addPassRelevancyTuples:(id)arg1;
- (void)clearPassRelevancyTuples;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)passRelevancyTuples;
- (id)passRelevancyTuplesAtIndex:(unsigned long long)arg1;
- (unsigned long long)passRelevancyTuplesCount;
- (bool)readFrom:(id)arg1;
- (void)setPassRelevancyTuples:(id)arg1;
- (void)writeTo:(id)arg1;

@end
