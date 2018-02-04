/* made by EzioChiu
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPlacecardModuleLayoutEntry : PBCodable <NSCopying> {
    NSString * _appId;
    MKPlacecardModuleLayout * _layout;
    NSString * _layoutId;
}

@property (nonatomic, retain) NSString *appId;
@property (nonatomic, readonly) bool hasAppId;
@property (nonatomic, readonly) bool hasLayout;
@property (nonatomic, readonly) bool hasLayoutId;
@property (nonatomic, retain) MKPlacecardModuleLayout *layout;
@property (nonatomic, retain) NSString *layoutId;

- (void).cxx_destruct;
- (id)appId;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAppId;
- (bool)hasLayout;
- (bool)hasLayoutId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)layout;
- (id)layoutId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAppId:(id)arg1;
- (void)setLayout:(id)arg1;
- (void)setLayoutId:(id)arg1;
- (void)writeTo:(id)arg1;

@end
