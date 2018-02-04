/* made by EzioChiu
   Image: /System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDPRecordFieldValueEncryptedValue : PBCodable <NSCopying> {
    NSMutableArray * _dateListValues;
    CKDPDate * _dateValue;
    struct { 
        double *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _doubleListValues;
    double  _doubleValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int signedValue : 1; 
    }  _has;
    NSMutableArray * _locationListValues;
    CKDPLocationCoordinate * _locationValue;
    CKDPRecordReference * _referenceValue;
    struct { 
        long long *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _signedListValues;
    long long  _signedValue;
    NSMutableArray * _stringListValues;
    NSString * _stringValue;
}

@property (nonatomic, retain) NSMutableArray *dateListValues;
@property (nonatomic, retain) CKDPDate *dateValue;
@property (nonatomic, readonly) double*doubleListValues;
@property (nonatomic, readonly) unsigned long long doubleListValuesCount;
@property (nonatomic) double doubleValue;
@property (nonatomic, readonly) bool hasDateValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic, readonly) bool hasLocationValue;
@property (nonatomic, readonly) bool hasReferenceValue;
@property (nonatomic) bool hasSignedValue;
@property (nonatomic, readonly) bool hasStringValue;
@property (nonatomic, retain) NSMutableArray *locationListValues;
@property (nonatomic, retain) CKDPLocationCoordinate *locationValue;
@property (nonatomic, retain) CKDPRecordReference *referenceValue;
@property (nonatomic, readonly) long long*signedListValues;
@property (nonatomic, readonly) unsigned long long signedListValuesCount;
@property (nonatomic) long long signedValue;
@property (nonatomic, retain) NSMutableArray *stringListValues;
@property (nonatomic, retain) NSString *stringValue;

+ (Class)dateListValueType;
+ (Class)locationListValueType;
+ (Class)stringListValueType;

- (void).cxx_destruct;
- (void)addDateListValue:(id)arg1;
- (void)addDoubleListValue:(double)arg1;
- (void)addLocationListValue:(id)arg1;
- (void)addSignedListValue:(long long)arg1;
- (void)addStringListValue:(id)arg1;
- (void)clearDateListValues;
- (void)clearDoubleListValues;
- (void)clearLocationListValues;
- (void)clearSignedListValues;
- (void)clearStringListValues;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateListValueAtIndex:(unsigned long long)arg1;
- (id)dateListValues;
- (unsigned long long)dateListValuesCount;
- (id)dateValue;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleListValueAtIndex:(unsigned long long)arg1;
- (double*)doubleListValues;
- (unsigned long long)doubleListValuesCount;
- (double)doubleValue;
- (bool)hasDateValue;
- (bool)hasDoubleValue;
- (bool)hasLocationValue;
- (bool)hasReferenceValue;
- (bool)hasSignedValue;
- (bool)hasStringValue;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locationListValueAtIndex:(unsigned long long)arg1;
- (id)locationListValues;
- (unsigned long long)locationListValuesCount;
- (id)locationValue;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referenceValue;
- (void)setDateListValues:(id)arg1;
- (void)setDateValue:(id)arg1;
- (void)setDoubleListValues:(double*)arg1 count:(unsigned long long)arg2;
- (void)setDoubleValue:(double)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasSignedValue:(bool)arg1;
- (void)setLocationListValues:(id)arg1;
- (void)setLocationValue:(id)arg1;
- (void)setReferenceValue:(id)arg1;
- (void)setSignedListValues:(long long*)arg1 count:(unsigned long long)arg2;
- (void)setSignedValue:(long long)arg1;
- (void)setStringListValues:(id)arg1;
- (void)setStringValue:(id)arg1;
- (long long)signedListValueAtIndex:(unsigned long long)arg1;
- (long long*)signedListValues;
- (unsigned long long)signedListValuesCount;
- (long long)signedValue;
- (id)stringListValueAtIndex:(unsigned long long)arg1;
- (id)stringListValues;
- (unsigned long long)stringListValuesCount;
- (id)stringValue;
- (void)writeTo:(id)arg1;

@end
