/* made by EzioChiu
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPPMediaPredicateValue : PBCodable <NSCopying> {
    bool  _boolPredicateValue;
    NSData * _bytesPredicateValue;
    double  _doublePredicateValue;
    float  _floatPredicateValue;
    struct { 
        unsigned int doublePredicateValue : 1; 
        unsigned int integerPredicateValue : 1; 
        unsigned int floatPredicateValue : 1; 
        unsigned int boolPredicateValue : 1; 
    }  _has;
    long long  _integerPredicateValue;
    NSString * _stringPredicateValue;
    int  _type;
}

@property (nonatomic) bool boolPredicateValue;
@property (nonatomic, retain) NSData *bytesPredicateValue;
@property (nonatomic) double doublePredicateValue;
@property (nonatomic) float floatPredicateValue;
@property (nonatomic) bool hasBoolPredicateValue;
@property (nonatomic, readonly) bool hasBytesPredicateValue;
@property (nonatomic) bool hasDoublePredicateValue;
@property (nonatomic) bool hasFloatPredicateValue;
@property (nonatomic) bool hasIntegerPredicateValue;
@property (nonatomic, readonly) bool hasStringPredicateValue;
@property (nonatomic) long long integerPredicateValue;
@property (nonatomic, retain) NSString *stringPredicateValue;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (bool)boolPredicateValue;
- (id)bytesPredicateValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doublePredicateValue;
- (float)floatPredicateValue;
- (bool)hasBoolPredicateValue;
- (bool)hasBytesPredicateValue;
- (bool)hasDoublePredicateValue;
- (bool)hasFloatPredicateValue;
- (bool)hasIntegerPredicateValue;
- (bool)hasStringPredicateValue;
- (unsigned long long)hash;
- (long long)integerPredicateValue;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolPredicateValue:(bool)arg1;
- (void)setBytesPredicateValue:(id)arg1;
- (void)setDoublePredicateValue:(double)arg1;
- (void)setFloatPredicateValue:(float)arg1;
- (void)setHasBoolPredicateValue:(bool)arg1;
- (void)setHasDoublePredicateValue:(bool)arg1;
- (void)setHasFloatPredicateValue:(bool)arg1;
- (void)setHasIntegerPredicateValue:(bool)arg1;
- (void)setIntegerPredicateValue:(long long)arg1;
- (void)setStringPredicateValue:(id)arg1;
- (void)setType:(int)arg1;
- (id)stringPredicateValue;
- (int)type;
- (void)writeTo:(id)arg1;

@end
