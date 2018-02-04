/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOClientNetworkMetrics : PBCodable <NSCopying> {
    struct { 
        unsigned int requestEnd : 1; 
        unsigned int requestStart : 1; 
        unsigned int httpResponseCode : 1; 
        unsigned int redirectCount : 1; 
        unsigned int requestDataSize : 1; 
        unsigned int responseDataSize : 1; 
    }  _has;
    int  _httpResponseCode;
    int  _redirectCount;
    int  _requestDataSize;
    double  _requestEnd;
    double  _requestStart;
    int  _responseDataSize;
    NSString * _serviceIpAddress;
    NSMutableArray * _transactionMetrics;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic) bool hasHttpResponseCode;
@property (nonatomic) bool hasRedirectCount;
@property (nonatomic) bool hasRequestDataSize;
@property (nonatomic) bool hasRequestEnd;
@property (nonatomic) bool hasRequestStart;
@property (nonatomic) bool hasResponseDataSize;
@property (nonatomic, readonly) bool hasServiceIpAddress;
@property (nonatomic) int httpResponseCode;
@property (nonatomic) int redirectCount;
@property (nonatomic) int requestDataSize;
@property (nonatomic) double requestEnd;
@property (nonatomic) double requestStart;
@property (nonatomic) int responseDataSize;
@property (nonatomic, retain) NSString *serviceIpAddress;
@property (nonatomic, retain) NSMutableArray *transactionMetrics;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)transactionMetricsType;

- (void).cxx_destruct;
- (void)addTransactionMetrics:(id)arg1;
- (void)clearTransactionMetrics;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasHttpResponseCode;
- (bool)hasRedirectCount;
- (bool)hasRequestDataSize;
- (bool)hasRequestEnd;
- (bool)hasRequestStart;
- (bool)hasResponseDataSize;
- (bool)hasServiceIpAddress;
- (unsigned long long)hash;
- (int)httpResponseCode;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (int)redirectCount;
- (int)requestDataSize;
- (double)requestEnd;
- (double)requestStart;
- (int)responseDataSize;
- (id)serviceIpAddress;
- (void)setHasHttpResponseCode:(bool)arg1;
- (void)setHasRedirectCount:(bool)arg1;
- (void)setHasRequestDataSize:(bool)arg1;
- (void)setHasRequestEnd:(bool)arg1;
- (void)setHasRequestStart:(bool)arg1;
- (void)setHasResponseDataSize:(bool)arg1;
- (void)setHttpResponseCode:(int)arg1;
- (void)setRedirectCount:(int)arg1;
- (void)setRequestDataSize:(int)arg1;
- (void)setRequestEnd:(double)arg1;
- (void)setRequestStart:(double)arg1;
- (void)setResponseDataSize:(int)arg1;
- (void)setServiceIpAddress:(id)arg1;
- (void)setTransactionMetrics:(id)arg1;
- (id)transactionMetrics;
- (id)transactionMetricsAtIndex:(unsigned long long)arg1;
- (unsigned long long)transactionMetricsCount;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
