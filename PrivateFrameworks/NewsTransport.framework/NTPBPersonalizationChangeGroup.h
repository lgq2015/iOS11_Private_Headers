/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBPersonalizationChangeGroup : PBCodable <NSCopying> {
    unsigned long long  _changeNumber;
    NSMutableArray * _deltas;
    struct { 
        unsigned int changeNumber : 1; 
    }  _has;
    NSString * _instanceIdentifier;
}

@property (nonatomic) unsigned long long changeNumber;
@property (nonatomic, retain) NSMutableArray *deltas;
@property (nonatomic) bool hasChangeNumber;
@property (nonatomic, readonly) bool hasInstanceIdentifier;
@property (nonatomic, retain) NSString *instanceIdentifier;

+ (Class)deltasType;

- (void)addDeltas:(id)arg1;
- (unsigned long long)changeNumber;
- (void)clearDeltas;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)deltas;
- (id)deltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)deltasCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasChangeNumber;
- (bool)hasInstanceIdentifier;
- (unsigned long long)hash;
- (id)instanceIdentifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChangeNumber:(unsigned long long)arg1;
- (void)setDeltas:(id)arg1;
- (void)setHasChangeNumber:(bool)arg1;
- (void)setInstanceIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end
