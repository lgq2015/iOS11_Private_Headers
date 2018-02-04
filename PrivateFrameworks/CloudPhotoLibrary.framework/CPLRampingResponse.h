/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLRampingResponse : PBCodable <NSCopying> {
    NSMutableArray * _responses;
}

@property (nonatomic, retain) NSMutableArray *responses;

+ (Class)responseType;

- (void).cxx_destruct;
- (void)addResponse:(id)arg1;
- (void)clearResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)responseAtIndex:(unsigned long long)arg1;
- (id)responses;
- (unsigned long long)responsesCount;
- (void)setResponses:(id)arg1;
- (void)writeTo:(id)arg1;

@end
