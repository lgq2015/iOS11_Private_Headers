/* made by EzioChiu
   Image: /System/Library/PrivateFrameworks/DifferentialPrivacy.framework/DifferentialPrivacy
 */

@interface _DPPrivacyBudget : NSObject {
    _DPPrivacyBudgetProperties * _budgetProperties;
    _DPPrivacyBudgetRecord * _budgetRecord;
    NSString * _name;
}

@property (nonatomic, readonly) _DPPrivacyBudgetProperties *budgetProperties;
@property (retain) _DPPrivacyBudgetRecord *budgetRecord;
@property (nonatomic, readonly, copy) NSString *name;

+ (long long)balanceForBudgetWithName:(id)arg1;
+ (id)budgetWithName:(id)arg1;
+ (void)createBudgetRecordsIn:(id)arg1;
+ (bool)createDatabaseRecordIfMissingIn:(id)arg1 key:(id)arg2 balance:(long long)arg3;
+ (bool)credit:(unsigned long long)arg1 budgetWithName:(id)arg2;
+ (bool)debit:(unsigned long long)arg1 budgetWithName:(id)arg2;
+ (id)fetchBudgetKeyNamesFrom:(id)arg1;
+ (id)fetchBudgetRecordFrom:(id)arg1 key:(id)arg2;
+ (void)initialize;
+ (void)updateAllBudgetsIn:(id)arg1;
+ (void)updateAllBudgetsUnsafeIn:(id)arg1;

- (void).cxx_destruct;
- (id)budgetProperties;
- (id)budgetRecord;
- (id)description;
- (id)init;
- (id)initWithName:(id)arg1 budgetProperties:(id)arg2;
- (bool)initializeBudgetRecordFrom:(id)arg1;
- (id)name;
- (void)setBudgetRecord:(id)arg1;

@end
