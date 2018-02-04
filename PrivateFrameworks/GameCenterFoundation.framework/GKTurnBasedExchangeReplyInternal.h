/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation {
    NSData * _data;
    NSDictionary * _localizableMessage;
    unsigned char  _recipientIndex;
    NSDate * _replyDate;
}

@property (nonatomic, retain) NSData *data;
@property (nonatomic, retain) NSDictionary *localizableMessage;
@property (nonatomic) unsigned char recipientIndex;
@property (nonatomic, retain) NSDate *replyDate;

+ (id)secureCodedPropertyKeys;

- (id)data;
- (void)dealloc;
- (id)localizableMessage;
- (unsigned char)recipientIndex;
- (id)replyDate;
- (void)setData:(id)arg1;
- (void)setLocalizableMessage:(id)arg1;
- (void)setRecipientIndex:(unsigned char)arg1;
- (void)setReplyDate:(id)arg1;

@end
