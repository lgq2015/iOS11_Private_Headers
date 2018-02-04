/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBShareSheetExposure : PBCodable <NSCopying> {
    NSString * _contentId;
    int  _contentType;
    struct { 
        unsigned int contentType : 1; 
        unsigned int shareSheetExposureLocation : 1; 
    }  _has;
    NSString * _referencedArticleId;
    int  _shareSheetExposureLocation;
}

@property (nonatomic, retain) NSString *contentId;
@property (nonatomic) int contentType;
@property (nonatomic, readonly) bool hasContentId;
@property (nonatomic) bool hasContentType;
@property (nonatomic, readonly) bool hasReferencedArticleId;
@property (nonatomic) bool hasShareSheetExposureLocation;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic) int shareSheetExposureLocation;

- (void).cxx_destruct;
- (int)StringAsContentType:(id)arg1;
- (id)contentId;
- (int)contentType;
- (id)contentTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentId;
- (bool)hasContentType;
- (bool)hasReferencedArticleId;
- (bool)hasShareSheetExposureLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleId;
- (void)setContentId:(id)arg1;
- (void)setContentType:(int)arg1;
- (void)setHasContentType:(bool)arg1;
- (void)setHasShareSheetExposureLocation:(bool)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setShareSheetExposureLocation:(int)arg1;
- (int)shareSheetExposureLocation;
- (void)writeTo:(id)arg1;

@end
