/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/UITriggerVC.framework/UITriggerVC
 */

@interface CSLUIPBNumber : PBCodable <NSCopying> {
    bool  _boolValue;
    double  _doubleValue;
    float  _floatValue;
    struct { 
        unsigned int doubleValue : 1; 
        unsigned int int64Value : 1; 
        unsigned int floatValue : 1; 
        unsigned int int32Value : 1; 
        unsigned int boolValue : 1; 
    }  _has;
    int  _int32Value;
    long long  _int64Value;
}

@property (nonatomic) bool boolValue;
@property (nonatomic) double doubleValue;
@property (nonatomic) float floatValue;
@property (nonatomic) bool hasBoolValue;
@property (nonatomic) bool hasDoubleValue;
@property (nonatomic) bool hasFloatValue;
@property (nonatomic) bool hasInt32Value;
@property (nonatomic) bool hasInt64Value;
@property (nonatomic) int int32Value;
@property (nonatomic) long long int64Value;

- (bool)boolValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)doubleValue;
- (float)floatValue;
- (bool)hasBoolValue;
- (bool)hasDoubleValue;
- (bool)hasFloatValue;
- (bool)hasInt32Value;
- (bool)hasInt64Value;
- (unsigned long long)hash;
- (int)int32Value;
- (long long)int64Value;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBoolValue:(bool)arg1;
- (void)setDoubleValue:(double)arg1;
- (void)setFloatValue:(float)arg1;
- (void)setHasBoolValue:(bool)arg1;
- (void)setHasDoubleValue:(bool)arg1;
- (void)setHasFloatValue:(bool)arg1;
- (void)setHasInt32Value:(bool)arg1;
- (void)setHasInt64Value:(bool)arg1;
- (void)setInt32Value:(int)arg1;
- (void)setInt64Value:(long long)arg1;
- (void)writeTo:(id)arg1;

@end
