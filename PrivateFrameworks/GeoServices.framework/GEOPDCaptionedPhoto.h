/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDCaptionedPhoto : PBCodable <NSCopying> {
    NSString * _author;
    NSString * _caption;
    bool  _displayFullPhotoInline;
    struct { 
        unsigned int displayFullPhotoInline : 1; 
        unsigned int useGallery : 1; 
    }  _has;
    NSString * _licenseDescription;
    NSString * _licenseUrl;
    GEOPDPhoto * _photo;
    PBUnknownFields * _unknownFields;
    bool  _useGallery;
}

@property (nonatomic, retain) NSString *author;
@property (nonatomic, retain) NSString *caption;
@property (nonatomic) bool displayFullPhotoInline;
@property (nonatomic, readonly) bool hasAuthor;
@property (nonatomic, readonly) bool hasCaption;
@property (nonatomic) bool hasDisplayFullPhotoInline;
@property (nonatomic, readonly) bool hasLicenseDescription;
@property (nonatomic, readonly) bool hasLicenseUrl;
@property (nonatomic, readonly) bool hasPhoto;
@property (nonatomic) bool hasUseGallery;
@property (nonatomic, retain) NSString *licenseDescription;
@property (nonatomic, retain) NSString *licenseUrl;
@property (nonatomic, retain) GEOPDPhoto *photo;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;
@property (nonatomic) bool useGallery;

+ (id)captionedPhotosForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (id)author;
- (id)caption;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)displayFullPhotoInline;
- (bool)hasAuthor;
- (bool)hasCaption;
- (bool)hasDisplayFullPhotoInline;
- (bool)hasLicenseDescription;
- (bool)hasLicenseUrl;
- (bool)hasPhoto;
- (bool)hasUseGallery;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)licenseDescription;
- (id)licenseUrl;
- (void)mergeFrom:(id)arg1;
- (id)photo;
- (bool)readFrom:(id)arg1;
- (void)setAuthor:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setDisplayFullPhotoInline:(bool)arg1;
- (void)setHasDisplayFullPhotoInline:(bool)arg1;
- (void)setHasUseGallery:(bool)arg1;
- (void)setLicenseDescription:(id)arg1;
- (void)setLicenseUrl:(id)arg1;
- (void)setPhoto:(id)arg1;
- (void)setUseGallery:(bool)arg1;
- (id)unknownFields;
- (bool)useGallery;
- (void)writeTo:(id)arg1;

@end
