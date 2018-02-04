/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
 */

@interface UWLMessageHeaders : PBCodable <NSCopying> {
    NSMutableArray * _cookies;
    NSString * _correlationKey;
    NSString * _userAgent;
    NSString * _xAppleStorefront;
    NSString * _xDsid;
    NSString * _xGuid;
    NSString * _xUseridKey;
    NSString * _xUseridKeyspace;
}

@property (nonatomic, retain) NSMutableArray *cookies;
@property (nonatomic, retain) NSString *correlationKey;
@property (nonatomic, readonly) bool hasCorrelationKey;
@property (nonatomic, readonly) bool hasXGuid;
@property (nonatomic, readonly) bool hasXUseridKey;
@property (nonatomic, readonly) bool hasXUseridKeyspace;
@property (nonatomic, retain) NSString *userAgent;
@property (nonatomic, retain) NSString *xAppleStorefront;
@property (nonatomic, retain) NSString *xDsid;
@property (nonatomic, retain) NSString *xGuid;
@property (nonatomic, retain) NSString *xUseridKey;
@property (nonatomic, retain) NSString *xUseridKeyspace;

+ (Class)cookiesType;

- (void).cxx_destruct;
- (void)addCookies:(id)arg1;
- (void)clearCookies;
- (id)cookies;
- (id)cookiesAtIndex:(unsigned long long)arg1;
- (unsigned long long)cookiesCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)correlationKey;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCorrelationKey;
- (bool)hasXGuid;
- (bool)hasXUseridKey;
- (bool)hasXUseridKeyspace;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCookies:(id)arg1;
- (void)setCorrelationKey:(id)arg1;
- (void)setUserAgent:(id)arg1;
- (void)setXAppleStorefront:(id)arg1;
- (void)setXDsid:(id)arg1;
- (void)setXGuid:(id)arg1;
- (void)setXUseridKey:(id)arg1;
- (void)setXUseridKeyspace:(id)arg1;
- (id)userAgent;
- (void)writeTo:(id)arg1;
- (id)xAppleStorefront;
- (id)xDsid;
- (id)xGuid;
- (id)xUseridKey;
- (id)xUseridKeyspace;

@end
