/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

@interface _HFItemUpdateRequestContext : NSObject <NSCopying> {
    HFUpdateLogger * _logger;
    <HFCharacteristicReadPolicy> * _readPolicy;
    SEL  _senderSelector;
    NSDictionary * _updateOptions;
}

@property (nonatomic, retain) HFUpdateLogger *logger;
@property (nonatomic, retain) <HFCharacteristicReadPolicy> *readPolicy;
@property (nonatomic) SEL senderSelector;
@property (nonatomic, copy) NSDictionary *updateOptions;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)logger;
- (id)readPolicy;
- (SEL)senderSelector;
- (void)setLogger:(id)arg1;
- (void)setReadPolicy:(id)arg1;
- (void)setSenderSelector:(SEL)arg1;
- (void)setUpdateOptions:(id)arg1;
- (id)updateOptions;

@end
