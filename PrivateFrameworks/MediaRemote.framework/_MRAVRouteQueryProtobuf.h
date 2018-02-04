/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRAVRouteQueryProtobuf : PBCodable <NSCopying> {
    NSString * _routeUID;
}

@property (nonatomic, readonly) bool hasRouteUID;
@property (nonatomic, retain) NSString *routeUID;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRouteUID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)routeUID;
- (void)setRouteUID:(id)arg1;
- (void)writeTo:(id)arg1;

@end
