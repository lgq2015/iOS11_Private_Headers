/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAPWACScanRequest : HMFObject <NSCopying> {
    id /* block */  _completion;
    HAPWACScanFilter * _filter;
    unsigned long long  _filterMethod;
    NSUUID * _uuid;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) HAPWACScanFilter *filter;
@property (nonatomic, readonly) unsigned long long filterMethod;
@property (nonatomic, copy) NSUUID *uuid;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)filter;
- (unsigned long long)filterMethod;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFilter:(id)arg1 completion:(id /* block */)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToWACScanRequest:(id)arg1;
- (void)setCompletion:(id /* block */)arg1;
- (void)setFilter:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
