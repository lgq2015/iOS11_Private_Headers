/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBOptInButtonExposure : PBCodable <NSCopying> {
    struct { 
        unsigned int optInButtonLocation : 1; 
        unsigned int optInButtonType : 1; 
    }  _has;
    int  _optInButtonLocation;
    NSString * _optInButtonLocationId;
    int  _optInButtonType;
}

@property (nonatomic) bool hasOptInButtonLocation;
@property (nonatomic, readonly) bool hasOptInButtonLocationId;
@property (nonatomic) bool hasOptInButtonType;
@property (nonatomic) int optInButtonLocation;
@property (nonatomic, retain) NSString *optInButtonLocationId;
@property (nonatomic) int optInButtonType;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOptInButtonLocation;
- (bool)hasOptInButtonLocationId;
- (bool)hasOptInButtonType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)optInButtonLocation;
- (id)optInButtonLocationId;
- (int)optInButtonType;
- (bool)readFrom:(id)arg1;
- (void)setHasOptInButtonLocation:(bool)arg1;
- (void)setHasOptInButtonType:(bool)arg1;
- (void)setOptInButtonLocation:(int)arg1;
- (void)setOptInButtonLocationId:(id)arg1;
- (void)setOptInButtonType:(int)arg1;
- (void)writeTo:(id)arg1;

@end
