/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDFieldOn : NSObject <NFAWDEventProtocol> {
    AWDNFCFieldOnEvent * _metric;
    unsigned int  _technology;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCFieldOnEvent *metric;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int technology;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setTechnology:(unsigned int)arg1;
- (unsigned int)technology;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;

@end
