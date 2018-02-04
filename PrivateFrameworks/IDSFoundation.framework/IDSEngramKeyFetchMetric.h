/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSEngramKeyFetchMetric : NSObject <CUTCoreAnalyticsMetric> {
    NSError * _keyFetchError;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSError *keyFetchError;
@property (nonatomic, readonly) NSString *name;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithKeyFetchError:(id)arg1;
- (id)keyFetchError;
- (id)name;

@end
