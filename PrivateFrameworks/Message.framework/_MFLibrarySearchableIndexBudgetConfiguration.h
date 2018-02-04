/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface _MFLibrarySearchableIndexBudgetConfiguration : NSObject {
    long long  _budgetInSeconds;
    long long  _budgetPeriodInSeconds;
    long long  _budgetResumeOverageCount;
}

@property (nonatomic, readonly) long long budgetInSeconds;
@property (nonatomic, readonly) long long budgetPeriodInSeconds;
@property (nonatomic, readonly) long long budgetResumeOverageCount;
@property (nonatomic, readonly) long long xpcGracePeriod;

- (long long)budgetInSeconds;
- (long long)budgetPeriodInSeconds;
- (long long)budgetResumeOverageCount;
- (id)init;
- (long long)xpcGracePeriod;

@end
