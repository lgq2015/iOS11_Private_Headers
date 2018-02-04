/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOMapsLaunchFeedbackCollection : PBCodable <NSCopying> {
    struct { 
        unsigned int sessionId : 1; 
    }  _has;
    struct GEOSessionID { 
        unsigned long long _high; 
        unsigned long long _low; 
    }  _sessionId;
    NSString * _sourceAppBundleId;
    NSString * _uriScheme;
}

@property (nonatomic) bool hasSessionId;
@property (nonatomic, readonly) bool hasSourceAppBundleId;
@property (nonatomic, readonly) bool hasUriScheme;
@property (nonatomic) struct GEOSessionID { unsigned long long x1; unsigned long long x2; } sessionId;
@property (nonatomic, retain) NSString *sourceAppBundleId;
@property (nonatomic, retain) NSString *uriScheme;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSessionId;
- (bool)hasSourceAppBundleId;
- (bool)hasUriScheme;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (struct GEOSessionID { unsigned long long x1; unsigned long long x2; })sessionId;
- (void)setHasSessionId:(bool)arg1;
- (void)setSessionId:(struct GEOSessionID { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setSourceAppBundleId:(id)arg1;
- (void)setUriScheme:(id)arg1;
- (id)sourceAppBundleId;
- (id)uriScheme;
- (void)writeTo:(id)arg1;

@end
