/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

@interface FCCKPRequestOperation : PBCodable <NSCopying> {
    FCCKPRequestOperationHeader * _header;
    FCCKPQueryRetrieveRequest * _queryRetrieveRequest;
    FCCKPRecordRetrieveRequest * _recordRetrieveRequest;
    FCCKPOperation * _request;
}

@property (nonatomic, readonly) bool hasHeader;
@property (nonatomic, readonly) bool hasQueryRetrieveRequest;
@property (nonatomic, readonly) bool hasRecordRetrieveRequest;
@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, retain) FCCKPRequestOperationHeader *header;
@property (nonatomic, retain) FCCKPQueryRetrieveRequest *queryRetrieveRequest;
@property (nonatomic, retain) FCCKPRecordRetrieveRequest *recordRetrieveRequest;
@property (nonatomic, retain) FCCKPOperation *request;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHeader;
- (bool)hasQueryRetrieveRequest;
- (bool)hasRecordRetrieveRequest;
- (bool)hasRequest;
- (unsigned long long)hash;
- (id)header;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)queryRetrieveRequest;
- (bool)readFrom:(id)arg1;
- (id)recordRetrieveRequest;
- (id)request;
- (void)setHeader:(id)arg1;
- (void)setQueryRetrieveRequest:(id)arg1;
- (void)setRecordRetrieveRequest:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)writeTo:(id)arg1;

@end
