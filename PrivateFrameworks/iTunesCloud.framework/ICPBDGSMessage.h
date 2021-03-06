/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICPBDGSMessage : PBCodable <NSCopying> {
    ICPBDGSRequest * _request;
    ICPBDGSResponse * _response;
}

@property (nonatomic, readonly) bool hasRequest;
@property (nonatomic, readonly) bool hasResponse;
@property (nonatomic, retain) ICPBDGSRequest *request;
@property (nonatomic, retain) ICPBDGSResponse *response;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequest;
- (bool)hasResponse;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)request;
- (id)response;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)writeTo:(id)arg1;

@end
