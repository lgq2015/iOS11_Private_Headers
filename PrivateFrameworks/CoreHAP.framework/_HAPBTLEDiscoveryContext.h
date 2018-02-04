/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface _HAPBTLEDiscoveryContext : HMFObject {
    NSMapTable * _characteristicSignatures;
    id /* block */  _completionHandler;
    NSMutableArray * _discoveringCharacteristics;
    NSMutableArray * _discoveringDescriptors;
    NSMutableArray * _discoveringServices;
    long long  _discoveryType;
    NSMutableArray * _readingCharacteristics;
    NSMutableArray * _readingDescriptors;
    NSMutableArray * _readingSignatureCharacteristics;
    NSMutableArray * _readingSignatureServices;
    long long  _retries;
    NSMapTable * _serviceSignatures;
}

@property (nonatomic, readonly) NSMapTable *characteristicSignatures;
@property (getter=isComplete, nonatomic, readonly) bool complete;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly) NSMutableArray *discoveringCharacteristics;
@property (nonatomic, readonly) NSMutableArray *discoveringDescriptors;
@property (nonatomic, readonly) NSMutableArray *discoveringServices;
@property (nonatomic, readonly) long long discoveryType;
@property (nonatomic, readonly) NSMutableArray *readingCharacteristics;
@property (nonatomic, readonly) NSMutableArray *readingDescriptors;
@property (nonatomic, readonly) NSMutableArray *readingSignatureCharacteristics;
@property (nonatomic, readonly) NSMutableArray *readingSignatureServices;
@property (nonatomic) long long retries;
@property (nonatomic, readonly) NSMapTable *serviceSignatures;

- (void).cxx_destruct;
- (id)characteristicSignatures;
- (id /* block */)completionHandler;
- (id)discoveringCharacteristics;
- (id)discoveringDescriptors;
- (id)discoveringServices;
- (long long)discoveryType;
- (id)init;
- (id)initWithDiscoveryType:(long long)arg1;
- (bool)isComplete;
- (id)readingCharacteristics;
- (id)readingDescriptors;
- (id)readingSignatureCharacteristics;
- (id)readingSignatureServices;
- (void)reset;
- (long long)retries;
- (id)serviceSignatures;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setRetries:(long long)arg1;

@end
