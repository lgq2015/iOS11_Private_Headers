/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
 */

@interface NTPBViewInfo : PBCodable <NSCopying> {
    struct { 
        unsigned int viewType : 1; 
    }  _has;
    NSString * _viewId;
    int  _viewType;
}

@property (nonatomic, readonly) bool hasViewId;
@property (nonatomic) bool hasViewType;
@property (nonatomic, retain) NSString *viewId;
@property (nonatomic) int viewType;

- (void).cxx_destruct;
- (int)StringAsViewType:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasViewId;
- (bool)hasViewType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasViewType:(bool)arg1;
- (void)setViewId:(id)arg1;
- (void)setViewType:(int)arg1;
- (id)viewId;
- (int)viewType;
- (id)viewTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
