/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBArticleScrollNotw : PBCodable <NSCopying> {
    NSString * _articleId;
    struct { 
        unsigned int maxScrollDepth : 1; 
    }  _has;
    float  _maxScrollDepth;
    NSString * _sourceChannelId;
    NSString * _windowId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasMaxScrollDepth;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasWindowId;
@property (nonatomic) float maxScrollDepth;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *windowId;

- (void).cxx_destruct;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleId;
- (bool)hasMaxScrollDepth;
- (bool)hasSourceChannelId;
- (bool)hasWindowId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (float)maxScrollDepth;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setHasMaxScrollDepth:(bool)arg1;
- (void)setMaxScrollDepth:(float)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setWindowId:(id)arg1;
- (id)sourceChannelId;
- (id)windowId;
- (void)writeTo:(id)arg1;

@end
