/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRecordFieldValue : PBCodable <NSCopying> {
    NSData * _bytesValue;
    FCCKPDate * _dateValue;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int signedValue : 1; 
        unsigned int type : 1; 
    }  _has;
    NSMutableArray * _listValues;
    FCCKPRecordReference * _referenceValue;
    long long  _signedValue;
    NSString * _stringValue;
    int  _type;
}

@property (nonatomic, retain) NSData *bytesValue;
@property (nonatomic, retain) FCCKPDate *dateValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) bool hasBytesValue;
@property (nonatomic, readonly) bool hasDateValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic, readonly) bool hasReferenceValue;
@property (nonatomic) bool hasSignedValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSMutableArray *listValues;
@property (nonatomic, retain) FCCKPRecordReference *referenceValue;
@property (nonatomic) long long signedValue;
@property (nonatomic, retain) NSString *stringValue;
@property (nonatomic) int type;

- (void)addListValue:(id)arg1;
- (id)bytesValue;
- (void)clearListValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateValue;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (bool)hasBytesValue;
- (bool)hasDateValue;
- (bool)hasDoubleValue;
- (bool)hasReferenceValue;
- (bool)hasSignedValue;
- (bool)hasStringValue;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)listValueAtIndex:(unsigned long long)arg1;
- (id)listValues;
- (unsigned long long)listValuesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referenceValue;
- (void)setBytesValue:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasSignedValue:(bool)arg1;
- (void)setHasType:(bool)arg1;
- (void)setListValues:(id)arg1;
- (void)setReferenceValue:(id)arg1;
- (void)setSignedValue:(long long)arg1;
- (void)setStringValue:(id)arg1;
- (void)setType:(int)arg1;
- (long long)signedValue;
- (id)stringValue;
- (int)type;
- (void)writeTo:(id)arg1;

@end
