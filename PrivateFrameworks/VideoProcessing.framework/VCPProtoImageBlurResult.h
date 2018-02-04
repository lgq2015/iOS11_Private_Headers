/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
 */

@interface VCPProtoImageBlurResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    float  _faceSharpness;
    struct { 
        unsigned int faceSharpness : 1; 
    }  _has;
    float  _sharpness;
}

@property (nonatomic) float faceSharpness;
@property (nonatomic) bool hasFaceSharpness;
@property (nonatomic) float sharpness;

+ (id)resultFromLegacyDictionary:(id)arg1;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)exportToLegacyDictionary;
- (float)faceSharpness;
- (bool)hasFaceSharpness;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFaceSharpness:(float)arg1;
- (void)setHasFaceSharpness:(bool)arg1;
- (void)setSharpness:(float)arg1;
- (float)sharpness;
- (void)writeTo:(id)arg1;

@end
