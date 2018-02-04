/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRNextCardCommand : CRBasicPayloadCommand <CRPayloadCommand> {
    <CRCard> * _nextCard;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CRCard> *nextCard;
@property (nonatomic, retain) <NSSecureCoding> *payload;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

// Image: /System/Library/PrivateFrameworks/Cards.framework/Cards

- (void).cxx_destruct;
- (id)nextCard;
- (id)payload;
- (void)setNextCard:(id)arg1;

// Image: /System/Library/PrivateFrameworks/CardKit.framework/CardKit

- (unsigned long long)crk_intrinsicInteractiveBehavior;
- (bool)handleForCardViewController:(id)arg1;

@end
