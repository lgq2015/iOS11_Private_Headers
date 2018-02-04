/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
 */

@interface ADTransparencyDetails : PBCodable <NSCopying> {
    NSString * _transparencyDetailsUnavailableMessage;
    NSString * _transparencyRendererPayload;
    NSString * _transparencyRendererURL;
}

@property (nonatomic, readonly) bool hasTransparencyDetailsUnavailableMessage;
@property (nonatomic, readonly) bool hasTransparencyRendererPayload;
@property (nonatomic, readonly) bool hasTransparencyRendererURL;
@property (nonatomic, retain) NSString *transparencyDetailsUnavailableMessage;
@property (nonatomic, retain) NSString *transparencyRendererPayload;
@property (nonatomic, retain) NSString *transparencyRendererURL;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasTransparencyDetailsUnavailableMessage;
- (bool)hasTransparencyRendererPayload;
- (bool)hasTransparencyRendererURL;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setTransparencyDetailsUnavailableMessage:(id)arg1;
- (void)setTransparencyRendererPayload:(id)arg1;
- (void)setTransparencyRendererURL:(id)arg1;
- (id)transparencyDetailsUnavailableMessage;
- (id)transparencyRendererPayload;
- (id)transparencyRendererURL;
- (void)writeTo:(id)arg1;

@end
