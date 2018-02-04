/* made by EzioChiu
   Image: /usr/lib/libnfshared.dylib
 */

@interface NFAWDVASGetData : NSObject <NFAWDEventProtocol> {
    unsigned int  _filterType;
    unsigned int  _filterValue;
    AWDNFCHCEVASGetData * _metric;
    bool  _signupOnly;
    unsigned int  _swStatus;
    unsigned int  _terminalCapabilities;
    unsigned int  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int filterType;
@property (nonatomic) unsigned int filterValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSData *merchantID;
@property (nonatomic, retain) NSString *merchantURL;
@property (nonatomic, retain) AWDNFCHCEVASGetData *metric;
@property (nonatomic) bool signupOnly;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int swStatus;
@property (nonatomic) unsigned int terminalCapabilities;
@property (nonatomic) unsigned int version;

- (void)dealloc;
- (unsigned int)filterType;
- (unsigned int)filterValue;
- (id)getMetric;
- (unsigned int)getMetricId;
- (id)init;
- (id)merchantID;
- (id)merchantURL;
- (id)metric;
- (void)setFilterType:(unsigned int)arg1;
- (void)setFilterValue:(unsigned int)arg1;
- (void)setMerchantID:(id)arg1;
- (void)setMerchantURL:(id)arg1;
- (void)setMetric:(id)arg1;
- (void)setSignupOnly:(bool)arg1;
- (void)setSwStatus:(unsigned int)arg1;
- (void)setTerminalCapabilities:(unsigned int)arg1;
- (void)setVersion:(unsigned int)arg1;
- (bool)signupOnly;
- (unsigned int)swStatus;
- (unsigned int)terminalCapabilities;
- (void)updateUUID:(id)arg1 withUUIDRefTimestamp:(unsigned long long)arg2;
- (unsigned long long)updateVASTransactionStateInfoWithPreviousState:(unsigned long long)arg1;
- (unsigned int)version;

@end
