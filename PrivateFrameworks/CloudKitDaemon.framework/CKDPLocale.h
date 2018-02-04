/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPLocale : PBCodable <NSCopying> {
    NSString * _languageCode;
    NSString * _regionCode;
}

@property (nonatomic, readonly) bool hasLanguageCode;
@property (nonatomic, readonly) bool hasRegionCode;
@property (nonatomic, retain) NSString *languageCode;
@property (nonatomic, retain) NSString *regionCode;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLanguageCode;
- (bool)hasRegionCode;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languageCode;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)regionCode;
- (void)setLanguageCode:(id)arg1;
- (void)setRegionCode:(id)arg1;
- (void)writeTo:(id)arg1;

@end
