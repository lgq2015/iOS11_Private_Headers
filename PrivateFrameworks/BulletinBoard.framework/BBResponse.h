/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

@interface BBResponse : NSObject <NSSecureCoding> {
    unsigned long long  _actionActivationMode;
    long long  _actionBehavior;
    NSString * _actionID;
    long long  _actionType;
    bool  _activated;
    NSString * _bulletinID;
    NSString * _buttonID;
    NSDictionary * _context;
    BBAssertion * _lifeAssertion;
    NSArray * _lifeAssertions;
    NSString * _originID;
    NSString * _replyText;
    id /* block */  _sendBlock;
    bool  _sent;
}

@property (nonatomic) unsigned long long actionActivationMode;
@property (nonatomic) long long actionBehavior;
@property (nonatomic, copy) NSString *actionID;
@property (nonatomic) long long actionType;
@property (nonatomic) bool activated;
@property (nonatomic, copy) NSString *bulletinID;
@property (nonatomic, copy) NSString *buttonID;
@property (nonatomic, copy) NSDictionary *context;
@property (nonatomic, copy) NSArray *lifeAssertions;
@property (nonatomic, copy) NSString *originID;
@property (nonatomic, copy) NSString *replyText;
@property (nonatomic, copy) id /* block */ sendBlock;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)actionActivationMode;
- (long long)actionBehavior;
- (id)actionID;
- (long long)actionType;
- (bool)activated;
- (id)bulletinID;
- (id)buttonID;
- (id)context;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)lifeAssertions;
- (id)originID;
- (id)replyText;
- (void)send;
- (id /* block */)sendBlock;
- (void)setActionActivationMode:(unsigned long long)arg1;
- (void)setActionBehavior:(long long)arg1;
- (void)setActionID:(id)arg1;
- (void)setActionType:(long long)arg1;
- (void)setActivated:(bool)arg1;
- (void)setBulletinID:(id)arg1;
- (void)setButtonID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setLifeAssertions:(id)arg1;
- (void)setOriginID:(id)arg1;
- (void)setReplyText:(id)arg1;
- (void)setSendBlock:(id /* block */)arg1;

@end
