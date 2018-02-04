/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDBusinessClaim : PBCodable <NSCopying> {
    bool  _buttonEnabled;
    NSString * _buttonLabel;
    NSString * _descriptionText;
    struct { 
        unsigned int buttonEnabled : 1; 
    }  _has;
    NSString * _titleText;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool buttonEnabled;
@property (nonatomic, retain) NSString *buttonLabel;
@property (nonatomic, retain) NSString *descriptionText;
@property (nonatomic) bool hasButtonEnabled;
@property (nonatomic, readonly) bool hasButtonLabel;
@property (nonatomic, readonly) bool hasDescriptionText;
@property (nonatomic, readonly) bool hasTitleText;
@property (nonatomic, retain) NSString *titleText;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (id)businessClaimForPlaceData:(id)arg1;

- (void).cxx_destruct;
- (bool)buttonEnabled;
- (id)buttonLabel;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionText;
- (id)dictionaryRepresentation;
- (bool)hasButtonEnabled;
- (bool)hasButtonLabel;
- (bool)hasDescriptionText;
- (bool)hasTitleText;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtonEnabled:(bool)arg1;
- (void)setButtonLabel:(id)arg1;
- (void)setDescriptionText:(id)arg1;
- (void)setHasButtonEnabled:(bool)arg1;
- (void)setTitleText:(id)arg1;
- (id)titleText;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
