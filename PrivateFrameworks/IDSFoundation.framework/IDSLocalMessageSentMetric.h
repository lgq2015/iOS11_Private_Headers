/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSLocalMessageSentMetric : NSObject <CUTAWDMetric, CUTCoreAnalyticsMetric> {
    bool  _isToDefaultPairedDevice;
    unsigned long long  _linkType;
    long long  _messageSize;
    long long  _priority;
    NSString * _service;
}

@property (readonly) unsigned int awdIdentifier;
@property (nonatomic, readonly) PBCodable<NSCopying> *awdRepresentation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isToDefaultPairedDevice;
@property (nonatomic, readonly) unsigned long long linkType;
@property (nonatomic, readonly) long long messageSize;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) long long priority;
@property (nonatomic, readonly) NSString *service;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned int)awdIdentifier;
- (id)awdRepresentation;
- (id)dictionaryRepresentation;
- (id)initWithService:(id)arg1 isToDefaultPairedDevice:(bool)arg2 messageSize:(long long)arg3 linkType:(unsigned long long)arg4 priority:(long long)arg5;
- (bool)isToDefaultPairedDevice;
- (unsigned long long)linkType;
- (long long)messageSize;
- (id)name;
- (long long)priority;
- (id)service;

@end
