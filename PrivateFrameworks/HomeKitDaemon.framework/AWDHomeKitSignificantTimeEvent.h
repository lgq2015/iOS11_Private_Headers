/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface AWDHomeKitSignificantTimeEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int offsetPresent : 1; 
    }  _has;
    bool  _offsetPresent;
    NSString * _significantEvent;
}

@property (nonatomic) bool hasOffsetPresent;
@property (nonatomic, readonly) bool hasSignificantEvent;
@property (nonatomic) bool offsetPresent;
@property (nonatomic, retain) NSString *significantEvent;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOffsetPresent;
- (bool)hasSignificantEvent;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)offsetPresent;
- (bool)readFrom:(id)arg1;
- (void)setHasOffsetPresent:(bool)arg1;
- (void)setOffsetPresent:(bool)arg1;
- (void)setSignificantEvent:(id)arg1;
- (id)significantEvent;
- (void)writeTo:(id)arg1;

@end
