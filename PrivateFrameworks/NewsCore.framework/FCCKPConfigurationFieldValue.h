/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPConfigurationFieldValue : PBCodable <NSCopying> {
    bool  _boolValue;
    NSData * _bytesValue;
    double  _doubleValue;
    NSMutableArray * _fieldValues;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int longValue : 1; 
        unsigned int type : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    NSMutableArray * _listValues;
    long long  _longValue;
    NSString * _stringValue;
    int  _type;
}

@property (nonatomic) bool boolValue;
@property (nonatomic, retain) NSData *bytesValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, retain) NSMutableArray *fieldValues;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic, readonly) bool hasBytesValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasLongValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *listValues;
@property (nonatomic) long long longValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int type;

- (void)addFieldValues:(id)arg1;
- (void)addListValues:(id)arg1;
- (bool)boolValue;
- (id)bytesValue;
- (void)clearFieldValues;
- (void)clearListValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (id)fieldValues;
- (id)fieldValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)fieldValuesCount;
- (bool)hasBoolValue;
- (bool)hasBytesValue;
- (bool)hasDoubleValue;
- (bool)hasLongValue;
- (bool)hasStringValue;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)listValues;
- (id)listValuesAtIndex:(unsigned long long)arg1;
- (unsigned long long)listValuesCount;
- (long long)longValue;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolValue:(bool)arg1;
- (void)setBytesValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFieldValues:(id)arg1;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasLongValue:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setListValues:(id)arg1;
- (void)setLongValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(int)arg1;
- (id)stringValue;
- (int)type;
- (void)writeTo:(id)arg1;

@end
