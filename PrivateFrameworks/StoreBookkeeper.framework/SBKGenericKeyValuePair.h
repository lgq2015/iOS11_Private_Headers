/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
 */

@interface SBKGenericKeyValuePair : NSObject <SBKKeyValuePayloadPair> {
    NSString * _kvsKey;
    NSData * _kvsPayload;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *kvsKey;
@property (nonatomic, readonly) NSData *kvsPayload;
@property (readonly) Class superclass;

+ (id)pairWithKVSKey:(id)arg1 kvsPayload:(id)arg2;

- (void).cxx_destruct;
- (id)initWithKVSKey:(id)arg1 kvsPayload:(id)arg2;
- (id)kvsKey;
- (id)kvsPayload;
- (id)kvsValueDescription;
- (double)timestamp;

@end
