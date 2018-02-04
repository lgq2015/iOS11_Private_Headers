/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
 */

@interface SKUIMetricsRequestInfo : NSObject <NSCopying> {
    bool  _hasResponseWasCachedValue;
    double  _requestStartTime;
    double  _responseEndTime;
    double  _responseStartTime;
    bool  _responseWasCached;
}

@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic) bool hasResponseWasCachedValue;
@property (nonatomic) double requestStartTime;
@property (nonatomic) double responseEndTime;
@property (nonatomic) double responseStartTime;
@property (nonatomic) bool responseWasCached;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (bool)hasResponseWasCachedValue;
- (id)initWithReportRequestTimesMessagePayload:(id)arg1;
- (double)requestStartTime;
- (double)responseEndTime;
- (double)responseStartTime;
- (bool)responseWasCached;
- (void)setHasResponseWasCachedValue:(bool)arg1;
- (void)setRequestStartTime:(double)arg1;
- (void)setResponseEndTime:(double)arg1;
- (void)setResponseStartTime:(double)arg1;
- (void)setResponseWasCached:(bool)arg1;

@end
