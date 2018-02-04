/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Cards.framework/Cards
 */

@interface CRBasicAsyncCardReceiptFeedback : NSObject <CRAsyncCardReceiptFeedback> {
    <CRCard> * baseCard;
    <CRCard> * receivedCard;
    <CRCard> * requestedCard;
}

@property (nonatomic, readonly) SFFeedback *backingFeedback;
@property (nonatomic, retain) <CRCard> *baseCard;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <CRCard> *receivedCard;
@property (nonatomic, retain) <CRCard> *requestedCard;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)baseCard;
- (id)receivedCard;
- (id)requestedCard;
- (void)setBaseCard:(id)arg1;
- (void)setReceivedCard:(id)arg1;
- (void)setRequestedCard:(id)arg1;

@end
