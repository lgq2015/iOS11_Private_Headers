/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLFaceInstance : PBCodable <NSCopying> {
    double  _centerX;
    double  _centerY;
    unsigned int  _faceState;
    struct { 
        unsigned int centerX : 1; 
        unsigned int centerY : 1; 
        unsigned int size : 1; 
        unsigned int faceState : 1; 
        unsigned int nameSource : 1; 
    }  _has;
    unsigned int  _nameSource;
    NSString * _personIdentifier;
    NSMutableArray * _rejectedPersonIdentifiers;
    double  _size;
}

@property (nonatomic) double centerX;
@property (nonatomic) double centerY;
@property (nonatomic) unsigned int faceState;
@property (nonatomic) bool hasCenterX;
@property (nonatomic) bool hasCenterY;
@property (nonatomic) bool hasFaceState;
@property (nonatomic) bool hasNameSource;
@property (nonatomic, readonly) bool hasPersonIdentifier;
@property (nonatomic) bool hasSize;
@property (getter=isKeyFace, nonatomic) bool keyFace;
@property (getter=isManual, nonatomic) bool manual;
@property (nonatomic) unsigned int nameSource;
@property (getter=isNoneState, nonatomic, readonly) bool noneState;
@property (nonatomic, retain) NSString *personIdentifier;
@property (nonatomic, retain) NSMutableArray *rejectedPersonIdentifiers;
@property (nonatomic) double size;

+ (Class)rejectedPersonIdentifiersType;

- (void).cxx_destruct;
- (bool)_isFaceStateBitSet:(unsigned int)arg1;
- (void)_setFaceStateBit:(unsigned int)arg1 fromBoolValue:(bool)arg2;
- (void)addRejectedPersonIdentifiers:(id)arg1;
- (double)centerX;
- (double)centerY;
- (void)clearRejectedPersonIdentifiers;
- (void)clearState;
- (long long)compare:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)faceState;
- (bool)hasCenterX;
- (bool)hasCenterY;
- (bool)hasFaceState;
- (bool)hasNameSource;
- (bool)hasPersonIdentifier;
- (bool)hasSize;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isKeyFace;
- (bool)isManual;
- (bool)isNoneState;
- (void)mergeFrom:(id)arg1;
- (unsigned int)nameSource;
- (id)personIdentifier;
- (id)pointerDescription;
- (bool)readFrom:(id)arg1;
- (id)rejectedPersonIdentifiers;
- (id)rejectedPersonIdentifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)rejectedPersonIdentifiersCount;
- (void)setCenterX:(double)arg1;
- (void)setCenterY:(double)arg1;
- (void)setFaceState:(unsigned int)arg1;
- (void)setHasCenterX:(bool)arg1;
- (void)setHasCenterY:(bool)arg1;
- (void)setHasFaceState:(bool)arg1;
- (void)setHasNameSource:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setKeyFace:(bool)arg1;
- (void)setManual:(bool)arg1;
- (void)setNameSource:(unsigned int)arg1;
- (void)setPersonIdentifier:(id)arg1;
- (void)setRejectedPersonIdentifiers:(id)arg1;
- (void)setSize:(double)arg1;
- (double)size;
- (void)writeTo:(id)arg1;

@end
