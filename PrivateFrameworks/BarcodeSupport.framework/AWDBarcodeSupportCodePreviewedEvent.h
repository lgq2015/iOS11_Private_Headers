/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
 */

@interface AWDBarcodeSupportCodePreviewedEvent : PBCodable <NSCopying> {
    struct { 
        unsigned int timestamp : 1; 
        unsigned int previewContentType : 1; 
    }  _has;
    int  _previewContentType;
    unsigned long long  _timestamp;
}

@property (nonatomic) bool hasPreviewContentType;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) int previewContentType;
@property (nonatomic) unsigned long long timestamp;

- (int)StringAsPreviewContentType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPreviewContentType;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)previewContentType;
- (id)previewContentTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasPreviewContentType:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPreviewContentType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
