/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKProtobufPaymentInstrumentThumbnailRequest : PBRequest <NSCopying> {
    struct { 
        unsigned int height : 1; 
        unsigned int width : 1; 
    }  _has;
    double  _height;
    NSString * _manifestHash;
    NSString * _passIdentifier;
    double  _width;
}

@property (nonatomic) bool hasHeight;
@property (nonatomic, readonly) bool hasManifestHash;
@property (nonatomic, readonly) bool hasPassIdentifier;
@property (nonatomic) bool hasWidth;
@property (nonatomic) double height;
@property (nonatomic, retain) NSString *manifestHash;
@property (nonatomic, retain) NSString *passIdentifier;
@property (nonatomic) double width;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeight;
- (bool)hasManifestHash;
- (bool)hasPassIdentifier;
- (bool)hasWidth;
- (unsigned long long)hash;
- (double)height;
- (bool)isEqual:(id)arg1;
- (id)manifestHash;
- (void)mergeFrom:(id)arg1;
- (id)passIdentifier;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setHasHeight:(bool)arg1;
- (void)setHasWidth:(bool)arg1;
- (void)setHeight:(double)arg1;
- (void)setManifestHash:(id)arg1;
- (void)setPassIdentifier:(id)arg1;
- (void)setWidth:(double)arg1;
- (double)width;
- (void)writeTo:(id)arg1;

@end
