/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBAnfComponentExposure : PBCodable <NSCopying> {
    NSString * _anfComponentId;
    NSString * _anfComponentRole;
    NSString * _anfComponentType;
    NSString * _articleId;
    NSString * _articleVersion;
    long long  _backendArticleVersionInt64;
    struct { 
        unsigned int backendArticleVersionInt64 : 1; 
        unsigned int publisherArticleVersionInt64 : 1; 
    }  _has;
    NSString * _metadata;
    long long  _publisherArticleVersionInt64;
    NSString * _sourceChannelId;
}

@property (nonatomic, retain) NSString *anfComponentId;
@property (nonatomic, retain) NSString *anfComponentRole;
@property (nonatomic, retain) NSString *anfComponentType;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSString *articleVersion;
@property (nonatomic) long long backendArticleVersionInt64;
@property (nonatomic, readonly) bool hasAnfComponentId;
@property (nonatomic, readonly) bool hasAnfComponentRole;
@property (nonatomic, readonly) bool hasAnfComponentType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleVersion;
@property (nonatomic) bool hasBackendArticleVersionInt64;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool hasPublisherArticleVersionInt64;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, retain) NSString *metadata;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic, retain) NSString *sourceChannelId;

- (void).cxx_destruct;
- (id)anfComponentId;
- (id)anfComponentRole;
- (id)anfComponentType;
- (id)articleId;
- (id)articleVersion;
- (long long)backendArticleVersionInt64;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAnfComponentId;
- (bool)hasAnfComponentRole;
- (bool)hasAnfComponentType;
- (bool)hasArticleId;
- (bool)hasArticleVersion;
- (bool)hasBackendArticleVersionInt64;
- (bool)hasMetadata;
- (bool)hasPublisherArticleVersionInt64;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (long long)publisherArticleVersionInt64;
- (bool)readFrom:(id)arg1;
- (void)setAnfComponentId:(id)arg1;
- (void)setAnfComponentRole:(id)arg1;
- (void)setAnfComponentType:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleVersion:(id)arg1;
- (void)setBackendArticleVersionInt64:(long long)arg1;
- (void)setHasBackendArticleVersionInt64:(bool)arg1;
- (void)setHasPublisherArticleVersionInt64:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setPublisherArticleVersionInt64:(long long)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end
