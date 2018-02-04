/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBOrderedRequesters : NSObject {
    NSMutableArray * _bands;
}

- (void)addRequester:(id)arg1 toBand:(int)arg2;
- (bool)containsRequester:(id)arg1 inBand:(int)arg2;
- (void)dealloc;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)highestPriorityRequester;
- (id)init;
- (id)lowestPriorityRequester;
- (void)prioritizeRequester:(id)arg1;
- (void)removeRequester:(id)arg1;
- (id)requesters;

@end
