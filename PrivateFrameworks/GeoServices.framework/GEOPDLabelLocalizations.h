/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOPDLabelLocalizations : PBCodable <NSCopying> {
    NSMutableArray * _localizedStrings;
}

@property (nonatomic, retain) NSMutableArray *localizedStrings;

+ (Class)localizedStringType;

- (void).cxx_destruct;
- (void)addLocalizedString:(id)arg1;
- (id)bestLocalizedName;
- (void)clearLocalizedStrings;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localizedStringAtIndex:(unsigned long long)arg1;
- (id)localizedStrings;
- (unsigned long long)localizedStringsCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocalizedStrings:(id)arg1;
- (void)writeTo:(id)arg1;

@end
