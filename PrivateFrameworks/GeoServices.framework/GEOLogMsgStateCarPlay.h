/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOLogMsgStateCarPlay : PBCodable <NSCopying> {
    GEOCarInfo * _carInfo;
    struct { 
        unsigned int isConnected : 1; 
    }  _has;
    bool  _isConnected;
}

@property (nonatomic, retain) GEOCarInfo *carInfo;
@property (nonatomic, readonly) bool hasCarInfo;
@property (nonatomic) bool hasIsConnected;
@property (nonatomic) bool isConnected;

- (void).cxx_destruct;
- (id)carInfo;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCarInfo;
- (bool)hasIsConnected;
- (unsigned long long)hash;
- (bool)isConnected;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCarInfo:(id)arg1;
- (void)setHasIsConnected:(bool)arg1;
- (void)setIsConnected:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
