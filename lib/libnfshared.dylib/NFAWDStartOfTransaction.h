/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDStartOfTransaction : NSObject <NFAWDEventProtocol> {
    AWDNFCHCIStartOfTransactionEvent * _metric;
    unsigned int  _status;
    unsigned int  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) AWDNFCHCIStartOfTransactionEvent *metric;
@property (nonatomic) unsigned int status;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int version;

- (void)dealloc;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)metric;
- (void)setMetric:(id)arg1;
- (void)setStatus:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)status;
- (unsigned long long)updateTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned int)version;

@end
