/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _CDContactStatistics : NSObject <NSSecureCoding> {
    NSDate * _firstIncomingRecipientDate;
    NSDate * _firstIncomingSenderDate;
    NSDate * _firstOutgoingRecipientDate;
    unsigned long long  _incomingRecipientCount;
    unsigned long long  _incomingSenderCount;
    NSDate * _lastIncomingRecipientDate;
    NSDate * _lastIncomingSenderDate;
    NSDate * _lastOutgoingRecipientDate;
    unsigned long long  _outgoingRecipientCount;
}

@property (retain) NSDate *firstIncomingRecipientDate;
@property (retain) NSDate *firstIncomingSenderDate;
@property (retain) NSDate *firstOutgoingRecipientDate;
@property unsigned long long incomingRecipientCount;
@property unsigned long long incomingSenderCount;
@property (retain) NSDate *lastIncomingRecipientDate;
@property (retain) NSDate *lastIncomingSenderDate;
@property (retain) NSDate *lastOutgoingRecipientDate;
@property unsigned long long outgoingRecipientCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstDate:(id)arg1 updatedWith:(id)arg2;
- (id)firstIncomingRecipientDate;
- (id)firstIncomingSenderDate;
- (id)firstInteractionDate;
- (id)firstOutgoingRecipientDate;
- (unsigned long long)incomingRecipientCount;
- (double)incomingRecipientTimeInterval;
- (unsigned long long)incomingSenderCount;
- (double)incomingSenderTimeInterval;
- (id)initWithCoder:(id)arg1;
- (unsigned long long)interactionCount;
- (double)interactionTimeInterval;
- (id)lastDate:(id)arg1 updatedWith:(id)arg2;
- (id)lastIncomingRecipientDate;
- (id)lastIncomingSenderDate;
- (id)lastInteractionDate;
- (id)lastOutgoingRecipientDate;
- (unsigned long long)outgoingRecipientCount;
- (double)outgoingRecipientTimeInterval;
- (void)setFirstIncomingRecipientDate:(id)arg1;
- (void)setFirstIncomingSenderDate:(id)arg1;
- (void)setFirstOutgoingRecipientDate:(id)arg1;
- (void)setIncomingRecipientCount:(unsigned long long)arg1;
- (void)setIncomingSenderCount:(unsigned long long)arg1;
- (void)setLastIncomingRecipientDate:(id)arg1;
- (void)setLastIncomingSenderDate:(id)arg1;
- (void)setLastOutgoingRecipientDate:(id)arg1;
- (void)setOutgoingRecipientCount:(unsigned long long)arg1;
- (void)updateWithStatistics:(id)arg1;

@end
