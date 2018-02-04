/* made by EzioChiu
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthWrapCodableValue : PBCodable <NSCopying> {
    NSData * _bytes;
    struct { 
        unsigned int integer : 1; 
        unsigned int type : 1; 
    }  _has;
    long long  _integer;
    NSString * _string;
    int  _type;
}

@property (nonatomic, retain) NSData *bytes;
@property (nonatomic, readonly) bool hasBytes;
@property (nonatomic) bool hasInteger;
@property (nonatomic, readonly) bool hasString;
@property (nonatomic) bool hasType;
@property (nonatomic) long long integer;
@property (nonatomic, retain) NSString *string;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)bytes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBytes;
- (bool)hasInteger;
- (bool)hasString;
- (bool)hasType;
- (unsigned long long)hash;
- (long long)integer;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBytes:(id)arg1;
- (void)setHasInteger:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setInteger:(long long)arg1;
- (void)setString:(id)arg1;
- (void)setType:(int)arg1;
- (id)string;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
