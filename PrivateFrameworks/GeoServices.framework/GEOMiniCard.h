/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMiniCard : PBCodable <NSCopying> {
    NSString * _buttonText;
    GEOFormattedString * _detail;
    struct { 
        unsigned int shouldEmphasize : 1; 
    }  _has;
    bool  _shouldEmphasize;
    GEOFormattedString * _title;
}

@property (nonatomic, retain) NSString *buttonText;
@property (nonatomic, retain) GEOFormattedString *detail;
@property (nonatomic, readonly) bool hasButtonText;
@property (nonatomic, readonly) bool hasDetail;
@property (nonatomic) bool hasShouldEmphasize;
@property (nonatomic, readonly) bool hasTitle;
@property (nonatomic) bool shouldEmphasize;
@property (nonatomic, retain) GEOFormattedString *title;

- (void).cxx_destruct;
- (id)buttonText;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (id)dictionaryRepresentation;
- (bool)hasButtonText;
- (bool)hasDetail;
- (bool)hasShouldEmphasize;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setButtonText:(id)arg1;
- (void)setDetail:(id)arg1;
- (void)setHasShouldEmphasize:(bool)arg1;
- (void)setShouldEmphasize:(bool)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldEmphasize;
- (id)title;
- (void)writeTo:(id)arg1;

@end
